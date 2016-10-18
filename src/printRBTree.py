def getPreAndInOrder ():
    f = open ("tree.txt", "r")
    pre = [k.strip().split (',') for k in 
           f.readline().strip().split (";")]
    del pre[-1]
    pre = [[k[0], int (k[1].strip())] for k in pre]
    print (pre)

    ino = [k.strip().split (',') for k in 
           f.readline().strip().split (";")]
    del ino[-1]
    ino = [[k[0], int (k[1].strip())] for k in ino]
    print (ino)
    f.close()
    return pre, ino

def printTree():
    pre, ino = getPreAndInOrder ()
    
    

if __name__ == "__main__":
    print ("Hello from python.")
    printTree ();
