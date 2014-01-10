import getopt, sys
import re

seen = {} 

def parse_name(m,l):
    if (m):
        name  = m.group(1)
        if not name in seen :
            seen[name]=1
            ns = name.split("::")
            name = ns.pop()
            print "// in line %s" % l
            print "".join(["namespace %s{" % n for n in ns])
            print "/*fwd*/class %s; " % name
            print "/*dcl*/class %s {}; " % name            
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
        name  = m.group(1)
        ns  = m.group(2)
        name2= ns + name
        nsl = ns.split("::")

        if not name2 in seen :
            seen[name2]=1
            print "// in line %s" % l
            print "".join(["namespace %s{" % n for n in nsl])
            print "/*fwd*/class %s; " % name
            print "/*dcl*/class %s {}; " % name            
            print "".join(["}" for n in nsl])
        return True
    else:
        return False




def parse_file(filename):
    print (filename)
    f = open (filename)
    for l in f.readlines():
#        print("Consider:%s"%l)
        if (parse_name(re.search(r'error: invalid use of incomplete type \'const class (\w+)\'', l),l)):
            pass

        if (parse_name_in_ns(re.search(r'error: \'(\w+)\' in namespace \'(\w+)\' does not name a type', l),l)):
            pass

        elif (parse_name(re.search(r'error: invalid use of incomplete type \'class (\w+)\'', l),l)):
            pass

        elif (parse_name(re.search(r'error: \'([\w:]+)\' does not name a type', l),l)):
            pass

        elif (parse_name(re.search(r'error: \'([\w:]+)\' has not been declared', l),l)):
            pass

        elif (parse_name_in_ns(re.search(r'error: \'([\w:]+)\' is not a member of \'([\w:]+)\'', l),l)):
            pass

        else :
            if (re.search(r'error: (.+)', l)):
                print("// ELSE "+l+"\n")
#            else:
                #print("// SCAN "+l+"\n")


        #error: 'class com::sun::star::accessibility::XAccessible' has no member named 'GetAccessible'


def main():
    try:
        opts, args = getopt.getopt(sys.argv[1:], "hi:v", ["help", "input="])
    except getopt.GetoptError as err:
        # print help information and exit:
        print str(err) # will print something like "option -a not recognized"
        usage()
        sys.exit(2)
    input_file = None
    verbose = False
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
