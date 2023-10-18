#include <stdio.h>

int main() {
	int matriz[5][5],i,j;
	
	printf("Ingrese valores para la diagonal principal (5 elementos):\n");
	for (i=0;i<5;i++) {
		printf("Ingrese el valor para la fila %d, columna %d: ", i + 1, i + 1);
		scanf("%d", &matriz[i][i]);
	}
	
	printf("Ingrese valores para el triángulo superior:\n");
	for (i=0;i<5;i++) {
		for (j=i+1;j<5;j++) {
			printf("Ingrese el valor para la fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("Ingrese valores para el triángulo inferior:\n");
	for (i=1;i<5;i++) {
		for (j=0;j<i;j++) {
			printf("Ingrese el valor para la fila %d, columna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("Matriz completa:\n");
	for (i=0;i<5;i++) {
		for (j=0;j<5;j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
