#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	int sorteo[3][6]={0},i,j,k,l,cont,num,temp,acu[2][43]={0};
	srand(time(NULL));
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			cont=0;
			sorteo[i][j]=rand()%43;
			for(k=0;k<j+1;k++){
				if(sorteo[i][j]==sorteo[i][k]){
					cont++;
				}
			if(cont==2){
				sorteo[i][j]=rand()%43;
						cont=0;
					k=-1;
				}
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			acu[0][sorteo[i][j]]++;
		}
	}
	for(i=0;i<43;i++){
		acu[1][i]=i;
	}
	
	printf("Ingrese un numero");
	scanf("%d",&num);
	printf("El nro %d se repite en %d veces en el sorteo\n",num,acu[0][num]);
	
	for(i=0;i<43;i++){
		for(j=0;j<43;j++){
			if(acu[0][j]<acu[0][i]){
				temp=acu[0][j];
				acu[0][j]=acu[0][i];
				acu[0][i]=temp;
				temp=acu[1][j];
				acu[1][j]=acu[1][i];
				acu[1][i]=temp;
			}
		}
	}
	printf("Los numeros que mas se repiten son: \n");
	for(i=0;i<43;i++){
		if(acu[0][i]==acu[0][0]){
			printf("- %d\n",acu[1][i]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			for(l=0;l<6;l++){
				temp=sorteo[i][l];
				sorteo[i][l]=sorteo[i][j];
				sorteo[i][j]=temp;
			}
		}
	}
	printf("Matriz Ordenada: \n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("%d  ",sorteo[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
	
}
