#include <stdio.h>

int main()
{
	int socios[10][2]={0},num,edad,i,j,temp,temp2,cont=0;
	printf("Ingrese Nro de socio: ");
	scanf("%d",&num);
	while(num!=0 && cont<10){
		printf("Ingrese edad del socio: ");
		scanf("%d",&edad);
		socios[cont][0]=num;
		socios[cont][1]=edad;
		cont++;
		printf("Ingrese Nro de socio: ");
		scanf("%d",&num);
	}
	for(i=0;i<cont-1;i++) {
		for(j=i+1;j<cont;j++) {
			if (socios[i][1]<socios[j][1]) {
				temp=socios[i][0];
				temp2=socios[i][1];
				socios[i][0]=socios[j][0];
				socios[i][1]=socios[j][1];
				socios[j][0]=temp;
				socios[j][1]=temp2;
			}
		}
	}
	printf("Lista Ordenada por edades:\n");
	for (i=0;i<cont;i++) {
		printf("Nro de socio: %d, Edad: %d\n", socios[i][0],socios[i][1]);
	}
	return 0;
}
