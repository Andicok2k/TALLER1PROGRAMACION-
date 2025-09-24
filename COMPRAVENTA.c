#include <stdio.h>
int main () {
    //declaracion de variables 
    int id, stock, opciones, cantidadV,Rstock;
    float preciou,ganancias;
    char nombre [50], respuesta;
    respuesta='s';
    Rstock=0;
    ganancias=0;
    printf ("BIENVENIDO\n");
    printf ("Ingrese el ID del producto\n");
    scanf ("%d", &id);
    while(id<0){
        printf("ERROR ID INVALIDO\n");
        scanf ("%d", &id);
    }
    printf ("Ingrese el nombre del producto\n");
    scanf ("%s", &nombre);
    printf ("Ingrese la cantidad de stock del producto\n");
    scanf ("%d", &stock);
    while(stock<0){
        printf("ERROR\n");
        scanf ("%d", &stock);
    }
    printf ("Ingrese el precio unitario del producto\n");
    scanf ("%f", &preciou);
    while(preciou<0){
        printf("PRECIO ERRORONEO\n");
        scanf ("%f", &preciou);
    }
    while (respuesta=='s' || respuesta=='S') {
        printf ("MENU DE OPCIONES VENDEDOR\n");
        printf ("1. VENDER PRODUCTO\n");
        printf ("2. RESTABLECER EL PRODUCTO\n");
        printf ("3. INFORMACION DEL PRODUCTO\n");
        printf ("4. MOSTRAR GANANCIAS OBTENIDAS\n");
        printf("SELECCIONE UNA OPCION:\n");
        scanf ("%d",&opciones);
        switch (opciones)
        {
        case 1:
            printf ("Ingrese las unidades que desea vender\n");
            scanf ("%d", &cantidadV);
            while(cantidadV<0){
                printf("SOLO VALE NUMEROS POSITIVOS\n");
                scanf ("%d", &cantidadV);
            }
            if (cantidadV>stock){
                printf("No hay suficiente stock\n");
            }
            else{
                stock-=cantidadV;
                ganancias+=cantidadV*preciou;
                printf("VENTA EXITOSA\n");
            }
            break;
        case 2:
            printf("Ingrese la cantidad para resbastecer stock:\n");
            scanf ("%d", &Rstock);
            if (Rstock>0){
                stock+=Rstock;
                printf("Se restablecio %d cantidades de %s\n",Rstock,nombre);
            }
            else{
                printf("cantidad invalida\n");
            }
            break;
        case 3:
            printf("La cantidad actual de %s es %d\n",nombre,stock);
            printf("Su precio unintario es %.2f\n",preciou);      
            break;
        case 4:   
            printf(" Stock restante de %s:%d\n",nombre,stock);
            printf("Las ganancias obtenidas son:%.2f\n",ganancias);
            break;
        default:
            break;
        }
        printf("DESEA CONTINUAR:\n");
        scanf("  %c",&respuesta);
    }
    printf("Gracias\n");
}   
