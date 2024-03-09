#include <stdio.h>

/* Global variables */
int option;
int a,b,c;

/*  
 * Wherein V in Ohms law is V=I*R
 */  
int voltage(int x, int y){
   float total;
   total = x*y;
   
/* int x = Ampheres */
   printf("I = %dAmps\n", x);

/* int y = Resistance */
   printf("R = %dΩ\n", y);
   printf(": %.2f Volts\n", total);
}

/* 
 * Wherein I in Ohms law is I=V/R  
 */
int current(int x, int y){
   float total;
   total = (float)x/y;
   
/* int x = Voltage */
   printf("V = %dv\n", x);

/* int y = Resistance */
   printf("R = %dΩ\n", y);
   printf("Current is: %.2f\n", total);
}

/*
 * Wherein R in Ohms law is R=V/I
 */ 
int resistance(int x, int y){
   float total;
   total = (float)x/y;
   
/* int x = Voltage */
   printf("V = %dv\n", x);

/* int y =  Ampheres */
   printf("I = %dAmps\n", y);
   printf("Resistance is: %.2f\n", total);
}

int calculate(){

/* Voltage */
 if(a == 1)
 {	 
    /* If a = 1 will then execute this block */   
    int x,y;
    printf("(Enter Current(I/A/Ampheres))\n"); 
    printf("> "); 
    scanf(" %d", &x); 
    printf("(Enter Resistance(/R/Ohms))\n"); 
    printf("> ");
    scanf(" %d", &y);
    
    voltage(x,y);
 } 
 
/* Current */
 else if(b == 1)
 {   	 
    /* If b = 1 will then execute this block */ 
    int x,y;
    printf("(Enter Voltage(V))\n");
    printf("> ");
    scanf(" %d", &x);
    printf("(Enter Resistance(/R/Ohms))\n");
    printf("> ");
    scanf(" %d", &y);
    
    current(x,y);
 } 
 
 /* Resistance */
 else if(c == 1)
 {	 
    /* If c = 1 will then execute this block */ 
    int x,y;
    printf("(Enter Voltage(V))\n");
    printf("> ");
    scanf(" %d", &x);
    printf("(Enter Current(I/A/Ampheres))\n");
    printf("> ");
    scanf(" %d", &y);
    
    resistance(x,y);
 } else {
    printf("Error: Must be an integer...\n");
 }
}

int main(){
 printf("Ohms-Calc by Daniel Salvaloza\n");
 //choices
 printf("1. Voltage\n");
 printf("2. Current\n");
 printf("3. Resistance\n");
 //reminder
 printf("(Enter 1 for Voltage(V), 2 for Current(I), 3 for Resistance(R))\n");
 printf("> "); 
 //option prompt
 scanf(" %d", &option);
 
 //user input validation
 switch(option){
 case 1:
	a = 1;
	calculate();
	break;
 case 2:	
        b = 1;
	calculate();
	break;
 case 3:
        c = 1;
	calculate();
	break;
 default:
	printf("Invalid input\n");
 return 0;
 }
}
