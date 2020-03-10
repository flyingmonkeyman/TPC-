//
//  main.cpp
//  TP1_Christopher_Lajoie_Asselin
//
//  Created by Christopher Lajoie on 2020-03-03.
//  Copyright © 2020 Christopher Lajoie. All rights reserved.
//

#include <iostream>


int calculerPGCD(int a, int b);
void simplifier();


int PGCD;
int* a;
int* b;


int calculerPGCD(int a, int b){
    int div=1;
    PGCD=0;
    int min;
    
    if (a<b){
        min=a;
    }
    else
        min=b;

    for (div=1;div<=min;div++){
        if(a%div==0 && b%div==0)
            PGCD=div;
    }
    return PGCD;
}

void simplifier(int& a, int& b, int PGCD){
    a=a/PGCD;
    b=b/PGCD;

}


