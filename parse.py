import getopt, sys
import re

seen = {} 

def parse_name(m):
    if (m):
        name  = m.group(1)
        if not name in seen :
            seen[name]=1
            print "/*fwd*/class %s; " % name
            print "/*dcl*/class %s {}; " % name
        return True
    else:
        return False

def parse_file(filename):
    print (filename)
    f = open (filename)
    for l in f.readlines():
        #if l[0]=="." or l[0]=="/":
        
#        if (parse_name(re.search(r'error: \'(\w+)\' has not been declared', l))):
#            pass
#        elif (parse_name(re.search(r'error: \'(\w+)\' does not name', l))):
#            pass
        #el
                                   #error: invalid use of incomplete type '
        if (parse_name(re.search(r'error: invalid use of incomplete type \'const class (\w+)\'', l))):
            pass
        elif (parse_name(re.search(r'error: invalid use of incomplete type \'class (\w+)\'', l))):
            pass
        elif (parse_name(re.search(r'error: \'(\w+)\' does not name a type', l))):
            pass

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
