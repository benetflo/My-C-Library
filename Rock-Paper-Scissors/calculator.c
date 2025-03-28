#include <stdio.h>


/*
Uppgift: Skapa en enkel miniräknare
Skriv ett C-program som fungerar som en enkel miniräknare. Programmet ska:

Fråga användaren efter två tal.

Fråga användaren vilken operation de vill utföra (+, -, *, /).

Utföra beräkningen och skriva ut resultatet.

Hantera division med noll (visa ett felmeddelande om det händer).

Upprepa tills användaren väljer att avsluta.
*/


float math_result(float a, float b, char operation){

    if(operation == '+'){
        return (a + b);
    }else if(operation == '-'){
        return (a - b);
    }else if(operation == '*'){
        return (a * b);
    }else if(operation == '/'){
        return (a / b);
    }else{
        return 0.0f;
    }
}

int main(){

    float a,b,result = 0.0f;
    char operation;

    while(1){

        printf("Tal a: ");
        scanf("%f", &a);
        printf("Tal b: ");
        scanf("%f", &b);
        printf("What operation?");
        scanf("%2c", operation);
        result = math_result(a, b, operation);
        printf("Result: %f", result);
    }

    return 0;
}


