#include <stdio.h>

int main() {
	int matriz[6][5] = {0};
	int fila, columna, valor,i,j;
	
	printf("Ingrese la fila (1-6), o 0 para finalizar: ");
	scanf("%d", &fila);
	
	while (fila != 0) {
		printf("Ingrese la columna (1-5): ");
		scanf("%d", &columna);
		
		if (fila>=1 && fila<=6 && columna>=1 && columna<=5) {
			printf("Ingrese el valor a cargar: ");
			scanf("%d", &valor);
			matriz[fila-1][columna-1]=valor;
		} else {
			printf("Fila o columna fuera de rango. Intente de nuevo.\n");
		}
		
		printf("Ingrese la fila (1-6), o 0 para finalizar: ");
		scanf("%d", &fila);
	}
	

	printf("Matriz por filas:\n");
	for (i=0;i<6;i++) {
		for (j=0;j<5;j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	

	printf("Matriz por columnas:\n");
	for (j=0;j<5;j++) {
		for ( i=0;i<6;i++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
