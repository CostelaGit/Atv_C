#include <stdio.h>

int main(){
    float entrada;
    int n200, n100, n50, n20, n5, n2;
    int i = 0;

    printf("Digite o valor a ser sacado: \n");
    scanf("%f", &entrada);
    
    while(entrada != 0){
        if(entrada >= 200){
            
            entrada -= 200;
            n200++;
        }
        else if (entrada <= 100)
        {
            entrada -= 100;
            n100++;
        }
        else if (entrada <= 50)
        {
            entrada -= 50;
            n50++;
        }
        else if (entrada <= 20)
        {
            entrada -= 20;
            n20++;
        }
        else if (entrada <= 5)
        {
            entrada -= 5;
            n5++;
        }
        else if (entrada <= 2)
        {
            entrada -= 2;
            n2++;
        }
        printf("")
    }
}