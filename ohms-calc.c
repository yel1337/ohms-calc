#include <stdio.h>

//Global variables
int option;
int a,b,c;
// as V in Ohms triangle. V=I*R
int voltage(int x, int y){
   float total;
   total = x*y;
   
   //ampheres
   printf("I = %dAmps\n", x);
   //resistance
   printf("R = %dΩ\n", y);
   printf(": %.2f Volts\n", total);
}
// as I in Ohms triangle. I=V/R
int current(int x, int y){
   float total;
   total = (float)x/y;
   
   //voltage
   printf("V = %dv\n", x);
   //resistance
   printf("R = %dΩ\n", y);
   printf("Current is: %.2f\n", total);
}
//as R in Ohms triangle. R=V/I
int resistance(int x, int y){
   float total;
   total = (float)x/y;
   
   //voltage
   printf("V = %dv\n", x);
   //ampheres
   printf("I = %dAmps\n", y);
   printf("Resistance is: %.2f\n", total);
}
int calculate(){

 //voltage
 if(a == 1){
    // then execute this block 
    int x,y;
    printf("(Enter Current(I/A/Ampheres))\n"); printf("> "); scanf(" %d", &x); printf("(Enter Resistance(/R/Ohms))\n"); printf("> ");
    scanf(" %d", &y);
    
    voltage(x,y);
 } 
 
 //current
 else if(b == 1){
    // then execute this block 
    int x,y;
    printf("(Enter Voltage(V))\n");
    printf("> ");
    scanf(" %d", &x);
    printf("(Enter Resistance(/R/Ohms))\n");
    printf("> ");
    scanf(" %d", &y);
    
    current(x,y);
 } 
 
 //resistance
 else if(c == 1){
    // then execute this block 
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
