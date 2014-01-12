import getopt, sys
import re

seen = {} 
verbose = False

def parse_name(m,l):
    if (m):
        name  = m.group(1)
        if not name in seen :
            seen[name]=1
            ns = name.split("::")
            name = ns.pop()
            l=l.strip()
            if (verbose):
                print "// in line %s" % l
            if ns:
                print "".join(["namespace %s{" % n for n in ns])
            print "/*fwd*/class %s; " % name
            print "/*dcl*/class %s {}; " % name            
            if ns:
                print "".join(["}" for n in ns])
        return True
    else:
        return False


def parse_name_in_class(m,l):
    if (m):
        name  = m.group(1)
        if not name in seen :
            seen[name]=1
            cls = m.group(2)
            ns = cls.split("::")
            name2 = ns.pop()
            l=l.strip()
            print "// in line %s" % l
            if ns:
                print "".join(["namespace %s{" % n for n in ns])
            print "/*fwd*/class %s; " % name2
            print "/*dcl*/class %s { " % name2
            print "/*dcl*/class %s {};}; " % name
            if ns:
                print "".join(["}" for n in ns])
        return True
    else:
        return False

def parse_err(m):
    if (m):
        name  = m.group(1)
        print "// error %s; " % name
    else:
        raise Exception()

def parse_name_in_ns(m,l):
    if (m):
        l=l.strip()
        name  = m.group(1)
        ns  = m.group(2)
        name2= ns + name
        nsl = ns.split("::")
        if not name2 in seen :
            seen[name2]=1
            print "// in line %s" % l
            if nsl:
                print "".join(["namespace %s{" % n for n in nsl])
            print "/*fwd*/class %s; " % name
            print "/*dcl*/class %s {}; " % name            
            if nsl:
                print "".join(["}" for n in nsl])
        return True
    else:
        return False

def parse_file(filename):
    print (filename)
    f = open (filename)
    for l in f.readlines():
        l= l.strip()
#        print("Consider:%s"%l)
        if (parse_name(re.search(r'error: invalid use of incomplete type \'const class (\w+)\'', l),l)):
            pass

        #error: 'ForbiddenCharacters' in namespace 'com::sun::star::i18n' does not name a type
        if (parse_name_in_ns(re.search(r'error: \'(\w+)\' in namespace \'([\w:]+)\' does not name a type', l),l)):
            pass

        if (parse_name_in_class(re.search(r'error: \'(\w+)\' in \'class ([\w:]+)\' does not name a type', l),l)):
            pass

        elif (parse_name(re.search(r'error: invalid use of incomplete type \'class (\w+)\'', l),l)):
            pass

        elif (parse_name(re.search(r'error: \'([\w:]+)\' does not name a type', l),l)):
            pass

        elif (parse_name(re.search(r'error: \'([\w:]+)\' has not been declared', l),l)):
            pass

        elif (parse_name_in_ns(re.search(r'error: \'([\w:]+)\' is not a member of \'([\w:]+)\'', l),l)):
            pass

        elif (parse_name(re.search(r'error: \'([\w:]+)\' was not declared in this scope', l),l)):
            pass

        else :
            if (re.search(r'error: (.+)', l)):
                if (verbose):
                    print("// ELSE "+l)
            else:
                #if (verbose):
                #print("// SCAN "+l+"\n")
                pass


        #error: 'class com::sun::star::accessibility::XAccessible' has no member named 'GetAccessible'


def main():
    global verbose
    try:
        opts, args = getopt.getopt(sys.argv[1:], "hi:v", ["help", "input="])
    except getopt.GetoptError as err:
        # print help information and exit:
        print str(err) # will print something like "option -a not recognized"
        usage()
        sys.exit(2)
    input_file = None

    for o, a in opts:
        if o == "-v":
            verbose = True
        elif o in ("-h", "--help"):
            usage()
            sys.exit()
        elif o in ("-i", "--input"):
            input_file = a
        else:
            assert False, "unhandled option"
    parse_file(input_file)

if __name__ == "__main__":
    main()
