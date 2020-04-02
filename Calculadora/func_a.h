#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "ctype.h"
#include "locale.h"

void soma (void){
    system("cls");

    float x, y;

    puts("| X = ?\n");
    scanf("%f", &x);

    puts("| Y = ?\n");
    scanf("%f", &y);

    printf("| X + Y = %.1f\n", x + y);
    system("pause");
}

void sub (void){
    system("cls");

    float x, y;

    puts("| X = ?\n");
    scanf("%f", &x);

    puts("| Y = ?\n");
    scanf("%f", &y);

    printf("| X - Y = %.1f\n", x - y);
    system("pause");

}

void multi (void){
    system("cls");

    float x, y;

    puts("| X = ?\n");
    scanf("%f", &x);

    puts("| Y = ?\n");
    scanf("%f", &y);

    printf("| X * Y = %.1f\n", x * y);
    system("pause");

}

void divisao (void){
    system("cls");

    float x, y;

    puts("| X = ?");
    scanf("%f", &x);

    puts("| Y = ?");
    scanf("%f", &y);

    printf("| X / Y = %.1f\n", x / y);
    system("pause");

}

void regra (void){
    system("cls");

    float x, y, z, w;

    puts("| Preencha os outros valores para encontrar o valor de W");
    puts("| X _ Z");
    puts("| Y   W");
    puts("| W = (Y * Z) / X");

    puts("| X = ?");
    scanf("%f", &x);

    puts("| Y = ?");
    scanf("%f", &y);

    puts("| Z = ?");
    scanf("%f", &z);

    printf("| W = (Y * Z) / X = %.1f\n", ((y * z ) / x));
    system("pause");
}

void porc (void){
    system("cls");

    float x, y, z;

    puts("| X = ?");
    scanf("%f", &x);

    puts("| % = ?");
    scanf("%f", &y);

    z = y / 100;

    printf("| %.1f %% de %.2f será: %.2f\n", y, x, x * z);
    system("pause");
}

void teorema (void){
    system("cls");

    float catX, catY, hipo;

    puts("| Teorema de Pitágoras:");
    puts("| Hipotenusa = Raiz Quadrada (Cateto X² + Cateto Y²)");

    puts("| Cateto X = ?");
    scanf("%f", &catX);

    puts("| Cateto Y = ?");
    scanf("%f", &catY);

    hipo = hypot(catX, catY);

    printf("Hipotenusa = %.2f\n", hipo);
    system("pause");
}

void plano (void){
    system("cls");

    float px1, px2, py1, py2, catX, catY, hipo;

    puts("| Plano Cartesiano:");
    puts("| Ponto Min. de X:");
    scanf("%f", &px1);
    
    puts("| Ponto Max. de X:");
    scanf("%f", &px2);

    puts("| Ponto Min. de Y:");
    scanf("%f", &py1);
    
    puts("| Ponto Max. de Y:");
    scanf("%f", &py2);

    catX = px2 - px1;
    catY = py2 - py1;

    printf("| Cateto X = Ponto Max. de X - Ponto Min. de X = %.2f\n", catX);
    printf("| Cateto Y = Ponto Max. de Y - Ponto Min. de Y = %.2f\n", catY);        
    puts("| Hipotenusa = Raiz Quadrada (Cateto X² + Cateto Y²)");

    hipo = hypot(catX, catY);

    printf("Hipotenusa = %.2f\n", hipo);
    system("pause");
}