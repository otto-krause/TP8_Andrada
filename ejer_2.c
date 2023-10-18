#include <stdio.h>

int main() {
	int matriz[3][3],i,j;
	
	printf("Ingrese valores para la matriz de 3x3:\n");
	for (j=0;j<3;j++) {
		printf("Ingrese el valor para la fila 2, columna %d: ",j+1);
		scanf("%d", &matriz[j][1]);
	}
	for (i=0;i<2;i++) {
		for (j=0;j<3;j++) {
			if(i==0){
				printf("Ingrese el valor para la fila %d, columna %d: ", i+1,j+1);
				scanf("%d", &matriz[j][i]);
			}else
			{
				printf("Ingrese el valor para la fila %d, columna %d: ", i+2,j+1);
				scanf("%d", &matriz[j][i+1]);
			}
			
		}
		
	}
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
