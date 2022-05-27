#include <stdio.h>

int main(int argc, char const *argv[])
{

    int vTipoCarga = 0;
    int vHorasCarga = 0;
    int vHorasRegalo = 0;
    float vPrecioHora = 50.00;
    float vMontoFinal = 0.00;
	int vHorasTotal = 0;

do {

    printf("Buenos dias, Bienvenido al sistema de carga de saldo.\n");
    printf("====================================================\n");    
	printf("             Indique si es dia de Semana - Ingrese 1\n");
    printf("             Indique si es Fin de Semana - Ingrese 2\n");
    printf("             Indique si quiere finalizar - Ingrese 0\n");
    printf("------------------------------------------------------\n");
    printf("             Ingrese su opcion: ");
	scanf("%i", &vTipoCarga);
	switch(vTipoCarga)
	{
			case 1 :
				system("cls");
			  	printf("Ha seleccionado la opcion 1 - Dia de Semana.\n");
			    printf("============================================\n");
			    printf("Por cada hora recargada, se le regalara una hora adicional.\n");
			    printf("Ingrese la cantidad de horas que desea cargar: ");
			    scanf("%i", &vHorasCarga);
			    vHorasRegalo = vHorasCarga;
			  	vMontoFinal = vHorasCarga * vPrecioHora;
			  	vHorasTotal = vHorasCarga+vHorasRegalo;
			  	printf("\n");
				printf("Se le han sumado %d Horas de regalo mas %d horas de carga (Total: %d horas) y el monto a abonar es de $ %.2f \n\n\n", vHorasRegalo, vHorasCarga, vHorasTotal, vMontoFinal);
			  	printf("Presione cualquier tecla para volver al menu...\n");
				system("pause");
				system("cls");
				break;
			case 2 :
				system("cls");
			  	printf("Ha seleccionado la opcion 2 - Fin de Semana.\n");
			  	printf("============================================\n");
			    printf("Por cada hora recargada, se le regalara una hora adicional.\n");
			    printf("Ingrese la cantidad de horas que desea cargar: ");
			    scanf("%i", &vHorasCarga);
			    vHorasRegalo = vHorasCarga;
			  	vMontoFinal = vHorasCarga * (vPrecioHora*1.30);
			  	vHorasTotal = vHorasCarga+vHorasRegalo;
			  	printf("\n");
				printf("Se le han sumado %d Horas de regalo mas %d horas de carga (Total: %d horas) y el monto a abonar es de $ %.2f \n\n\n", vHorasRegalo, vHorasCarga, vHorasTotal, vMontoFinal);
			  	printf("Presione cualquier tecla para volver al menu...\n");
				system("pause");
				system("cls");
				break;
			case 0 :
				system("cls");
			    printf("====================================\n");
			    break;
			default :
				system("cls");
			    printf("Ha seleccionado una opcion incorrecta...\n");
			  	printf("Presione cualquier tecla para volver al menu...\n");
				system("pause");
				system("cls");
				break;
	}
	
	
} while (vTipoCarga != 0 );
system("cls");
printf("====================================\n");
printf("Gracias por usar el sistema de carga de saldo. \n");
printf("====================================\n");
    return 0;
}
