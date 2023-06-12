#include <stdio.h>
#include "magicSquare.h"

int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {
    /*comprobacion filas*/
    int sumf=0, fila, cons, columna, ver=0;
    fila=0;
    for (columna = 0; columna < columnas; columna++) {
        cons = cons + cuadrado[fila][columna];
    }
    while (fila<filas)
    {
        for (columna = 0; columna < columnas; columna++) {
        sumf = sumf + cuadrado[fila][columna];
        
    }
        if (sumf==cons)
    {
        fila= fila+1;
        sumf=0;
        ver=1; 
    }  
    else
    {
        fila=filas;
        ver=0;
    }
    }
    
    /*comprobacion columnas*/
    if (ver==1)
    {
        ver=0;
        columna=0;
        while (columna<columnas)
    {
        for (fila = 0; fila < filas; fila++) {
        sumf = sumf + cuadrado[fila][columna];
        
    }
        if (sumf==cons)
    {
        columna= columna+1;
        sumf=0;
        ver=1; 
    }  
    else
    {
        columna=columnas;
        ver=0;
    }
    }  
    }
    
    /*comprobacion diagonal1*/
    if (ver==1)
    {
        ver=0;
        columna=0;
        fila=0;
        while (columna<columnas)
    {
        sumf = sumf + cuadrado[fila][columna];
        fila=fila+1;
        columna=columna+1;
    }  
    if (sumf==cons)
    {
        sumf=0;
        ver=1; 
    }  
    else
    {
        ver=0;
    }
    }
    
    /*comprobacion diagonal2*/
    if (ver==1)
    {
        ver=0;
        columna=columnas-1;
        fila=0;
        while (fila<filas)
    {
        sumf = sumf + cuadrado[fila][columna];
        fila=fila+1;
        columna=columna-1;
    }  
    printf("d2 %d\n", sumf);
    if (sumf==cons)
    {
        sumf=0;
        ver=1; 
    }  
    else
    {
        ver=0;
    }
    }
    return ver;
}

int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    int sumacons = 0;
    int columna;
    filas=1;

    
    for (columna = 0; columna < columnas; columna++) {
        sumacons = sumacons + cuadrado[filas][columna];
    }

    return sumacons;
}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
    int fila, columna;
    for (fila = 0; fila < filas; fila++) {
        for (columna = 0; columna < columnas; columna++) {
            printf("%d ", cuadrado[fila][columna]);
        }
        printf("\n");
    }
   
}   
