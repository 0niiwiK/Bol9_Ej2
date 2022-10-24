// Prototipos
float pidePeso();
float pidePrecioUnitario();
void imprimeImporte(float precio);
float introduceAPagar();
void imprimeCambio(float importe, float aPagar);

#include <stdio.h>

int main() {
    float precio=pidePeso()*pidePrecioUnitario();
    imprimeImporte(precio);
    imprimeCambio(precio,introduceAPagar());
    return 0;
}

float pidePeso(){
    float peso;
    printf("Introduce el peso del articulo: ");
    scanf("%f",&peso);
    fflush(stdin);
    while (peso<0){
        printf("El peso no puede ser negativo\nIntroduzca el peso de nuevo: ");
        scanf("%f",&peso);
        fflush(stdin);
    }
    return peso;
}

float pidePrecioUnitario(){
    float precioU;
    printf("Introduce el precio por kilo del articulo: ");
    scanf("%f",&precioU);
    fflush(stdin);
    while (precioU < 0){
        printf("El precio no puede ser negativo\nIntroduzca el precio de nuevo: ");
        scanf("%f",&precioU);
        fflush(stdin);
    }
    return precioU;
}

void imprimeImporte(float precio){
    printf("\nEl importe a pagar es %.2f euros.\n",precio);
}

float introduceAPagar(){
    float aPagar;
    printf("Introduce la cantidad que va a pagar: ");
    scanf("%f",&aPagar);
    fflush(stdin);
    while (aPagar < 0){
        printf("El importe no puede ser negativo\nIntroduzca el importe de nuevo: ");
        scanf("%f",&aPagar);
        fflush(stdin);
    }
    return aPagar;
}

void imprimeCambio(float importe, float aPagar){
    printf("\nEl cambio es de %.2f euros.\n",aPagar-importe);
}
