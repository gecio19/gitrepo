/*
 * 2.cxx
 * 
 * Copyright 2019  <>

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    
    
    int a,b,c;
    cout << "Podaj pierwsza cyfre";
    cin >> a;
    cout << "Podaj druga cyfre";
    cin >> b;
    cout << "Podaj trzecia cyfre";
    cin >> c;
    cout << "To pierwsza:" << a << endl;
    cout << "To Druga:" << b << endl;
    cout << "To Trzecia:"<< c << endl;
    
    
    if(a>b)
    {
        if(a>c)
        cout << "Pierwsza iczba jest największa:" << a;
        
        else
        {
            
                cout << "Trzecia cyfra jest największa:" << c;
        }
        
        
        }
    if(b>a)
    {
        if(b>c)
        cout << "Druga cyfra jest największa:" << b;
        
        else
        {
            
                cout << "Trzecia cyfra jest największa:" << c;
        }
        
        }    
    
    

    
	
	return 0;
}

