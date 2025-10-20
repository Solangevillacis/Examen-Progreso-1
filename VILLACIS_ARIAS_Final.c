#include "stdio.h"
int main (){
int agenda [5][8];
int i, j;

char*dias[5]= {"Lunes", "Martes", "Miercoles","Jueves", "Viernes"};
char*horas[8]= {"9-10", "10-11", "11-12", "1-2", "2-3","3-4", "4-5", "5-6"};

for(i=0; i<5; i++){

    for(j=0; j<8; j++){
        agenda [i][j]=0;
    }
}
int opcion; 
do {
//Menu//
printf("\n=== Agenda Juan Perros===");
printf("1)Mostrar Agenda\n ");
printf("2)Agenda (reservar hora)\n");
printf("3)Salir\n");
printf("Elija una opcion:\n");
scanf("&d", &opcion);

if(opcion==1){
    int c;
    printf ("\n  " );
    for (c=0; c<8; c++);{
        printf ("%7s,horas[c]");

    }

    printf ("\n");
    for(i=0; i<5; i++);{
        printf ("%-9s", dias[i]);
        for (j=0; j<8; j++){
            printf ("%7d", agenda [i][j]);
        } 
        printf("\n");
    }
printf ("\n(0=libre, 1=ocupado)\n");
}
else if (opcion==2){
    int d, h;
    printf ("\nDias: 1=Lunes, 2= Martes, 3= Miercoles, 4=Jueves, 5=Viernes");
    printf ("Ingrese el dia (1-5)");
    scanf ("&d, &d");
    printf ("\nFranjas;\n");
    for (i=0; i<8; i++){
        printf ("%d), %s", i+1, horas [i]);
    }   
    printf("\nIngrese la franja (1-8):");
    scanf("%d", &h);

    if(d<1 || d>5 || h<1 || h>8){
        printf("\n*** Error: dia o hora fuera de rango.***\n");
    } else{
        d--; h--;
        //Validar conflicto de horario
        if(agenda [d][h]==1){
            printf("\n*** Ese horario ya esta OCUPADO. Elija otro. ***\n");
        }else{
            agenda[d][h]=1;
            printf("\nReserva realizada:%s en %s.\n", dias[d], horas[h]);
        }

    }

}

else if (opcion==3){
    printf("\nSaliendo.. Exitos en su reserva!\n");
}
else{
    printf("\n***Opcion no valida.***\n");
}
} while(opcion !=3);
return 0;
}