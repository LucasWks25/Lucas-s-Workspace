#include <stdio.h> 

int main() { 

    float chico; 
    float ze; 
    ze = 1.10; 
    chico = 1.50; 
    int anos; 
    do{ 
     ze = ze+0.03; 
     chico = chico+0.02; 
     anos++;                                 
    } while(ze<chico); 
printf("Se passaram %i anos",anos); 
