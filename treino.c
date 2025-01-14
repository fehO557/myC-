#include <stdio.h>
#include <string.h>
#include <io.h>

int main () {
    printf("bom dia \n");
    printf("boa noite \n");

    int x, y;
    x= 10;
    y= 20;

    printf("%d\n", x);
    printf("%d\n", y);

    double z;
    z= 2.3456;
    printf("%.2lf\n", z);

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade= 22;
    salario= 6800.5;
    strcpy(nome, "Fernanda");
    sexo= 'F';

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos \n", nome, sexo, salario, idade);

    x=5;
    y= 2*x;
    printf("%d\n", x);
    printf("%d\n", y);

    double b1, b2, h, area;
    b1= 6.0;
    b2= 8.0;
    h= 5.0;
    area= (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    int a, b, resultado;
    a= 5;
    b= 2;
    resultado= a / b;
    printf("%d\n", resultado);

    return 0;


}