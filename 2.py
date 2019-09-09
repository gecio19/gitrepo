#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  2.py
#  



def main(args):
    
    a = int(input("Podaj 1. liczbę: "))
    b = int(input("Podaj 1. liczbę: "))
    c = int(input("Podaj 1. liczbę: "))
    print ("Pierwsza cyfra:",a);
    print ("Druga cyfra:",b);
    print ("Trzecia cyfra:",c);
    
    if a>b:
        if a>c:
            print ("Pierwsza Cyfra jest największa" , a);
        else:
            print("Trzecia Cyfra jest największa", c);
    if b>a:
        if b>c:
            print("Druga Cyfra jest największa", b);
        else:
            print("Trzecia Cyfra jest największa", c);    
            

          
        
                
    
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
