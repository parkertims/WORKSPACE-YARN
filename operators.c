// TIMOLA, MHALON PARKER R. 
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int num1 = 13;
    int num2 = 12;
    
    //arithmetic operations
    printf("Arithmetic Operations: \n");
    
    //addition
    printf("%d\n", num1 + num2);
    //subtractiln
    printf("%d\n", num1 - num2);
    //miltiplication
    printf("%d\n", num1 * num2);
    //division
    printf("%.2f\n", (float)num1 / num2);

    printf("Logical Operators: AND condition\n");
    int x = 3;
    int y = 5; 
if (x < 5 && y < 6){printf("TRUE\n");
}
else{printf("FALSE\n");
}
   printf("Logical Operators: OR condition\n");
   int temp = 20; 
if (temp <= 0 || temp >= 30){ 
    printf("IT IS WARM OUTSIDE\n");
}
else{
    printf("IT IS CHILLY OUTSIDE\n");
}

    printf("Logical Operators: NOT condition\n");
    bool isRaining = 0;
if (!isRaining){
    printf("IT IS NOT RAINING OUTSIDE\n");
}
else{
    printf("IT IS RAINING OUTSIDE\n");
}

  int a = 10;
    int b = 13;
    int c = 11;
    int d = 12;
    int f = 13;
    
    a += 10;
    b -= 10;
    c *= 10;
    d /= 10;
    f %= 3;
    
    printf("Addition: %d\n", a);
    printf("Subtraction: %d\n", b);
    printf("Multiplication: %d\n", c);
    printf("Division: %d\n", d);
    printf("Modulus: %d\n", f);

    return 0;
}