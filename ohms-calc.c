#include <stdio.h>
#include <stdbool.h>
/* Global variables */
int option;
bool a,b,c;

/*  
 * Wherein V in Ohms law is V=I*R
 */  
int voltage(int x, int y){
   float total;
   total = x*y;

   printf("--------------\n");   
/* int x = Ampheres */
   printf("I = %dAmps\n", x);

/* int y = Resistance */
   printf("R = %dΩ\n", y);
   printf("(V = I*R)\n");
   printf("= %.2f Volts\n", total); 
   printf("--------------\n");   
}

/* 
 * Wherein I in Ohms law is I=V/R  
 */
int current(int x, int y){
   float total;
   total = (float)x/y;
   
   printf("--------------\n");   
/* int x = Voltage */
   printf("V = %dv\n", x);

/* int y = Resistance */
   printf("R = %dΩ\n", y);
   printf("(I = V/R)\n");
   printf("= %.2f\n", total);
   printf("--------------\n");   
}

/*
 * Wherein R in Ohms law is R=V/I
 */ 
int resistance(int x, int y){
   float total;
   total = (float)x/y;
   
   printf("--------------\n");   
/* int x = Voltage */
   printf("V = %dv\n", x);

/* int y =  Ampheres */
   printf("I = %dAmps\n", y);
   printf("(R = V/I)\n");
   printf("= %.2f\n", total);
   printf("--------------\n");   
}

int calculate(){

/* Voltage */
 if(a == true)
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
 else if(b == true)
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
 else if(c == true)
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


int main() 
{
 printf("This is a command-line interface (CLI) Ohms calculator written in C, designed to quickly and efficiently calculate resistance, voltage  and current in electrical circuits based on Ohm's Law.\n");
 printf("\nUsage: \n");
 printf("** Upon running the program, follow the prompts to input values and select the desired calculation. **\n");
 printf("** Choose from options such as calculating resistance (R), voltage (V), current (I). **\n");
 printf("** Enter the known values when prompted and get the result instantly. **\n");

 /* Values */ 
 printf("\n(Enter 1 for Voltage(V), 2 for Current(I/A), 3 for Resistance(Ω))\n");
 printf("1. Voltage\n");
 printf("2. Current\n");
 printf("3. Resistance\n");
 printf("> "); 
 /* Values(1,2,3) = option */
 scanf(" %d", &option);
 
 /* User input validation */
 int s = 3;

 while(option <= s)
  {
    if(option == 1)
    {
            a = true;
            calculate();
            break;
    }
    else if(option == 2)
    {
            b = true;
            calculate();
            break;
    }
    else if (option == 3)
    {
	    c = true;
	    calculate();
	    break;
    } 
  }

 /* 
  * If user input is greater than prompt
  */
 if(option > s)
  {
	    printf("Invalid input...\n");
	    printf(">");
            scanf(" %d", &option);
	  
    /* If input still not valid then execute this block*/
    while(option > s)
    {
	    printf("Invalid input...\n");
	    printf(">");
	    scanf(" %d", &option);

	    /* If input is valid then execute this block */
	    if(option <= s)
	    {		    
		 /* Normally goes here */   
                 if(option == 1)
                 {
                      a = true;
                      calculate();
                      break;
                 }
                 else if(option == 2)
                 {
                      b = true;
                      calculate();
                      break;
                 }
                 else if (option == 3)
                 {
	              c = true;
	              calculate();
	              break;
                 } 

	    }
    }
    /* Default */
    if(option == 1)
    {
            a = true;
            calculate();
    }
    else if(option == 2)
    {
            b = true;
            calculate();
    }
    else if (option == 3)
    {
	    c = true;
	    calculate();
    }
	  return 0;
  }
}
