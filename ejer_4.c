#include <stdio.h>

int main() {
	int matriz[3][3],i,j,k,l,temp;
	
	printf("Ingrese valores para la matriz de 3x3:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Ingrese el valor para la fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			for(k=0;k<3;k++) {
				for(l=0;l<3;l++) {
					if (matriz[i][j]<matriz[k][l]) {
						temp=matriz[i][j];
						matriz[i][j]=matriz[k][l];
						matriz[k][l]=temp;
					}
				}
			}
		}
	}
	
	
	printf("Matriz ordenada de menor a mayor:\n");
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
