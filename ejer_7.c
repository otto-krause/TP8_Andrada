#include <stdio.h>

int main(int argc, char *argv[]) {
	float clientes[100][6]={0},mayor=0;
	int i=0,j,code,monto,numC;
	printf("Ingrese numero de cliente: ");
	scanf("%d",&numC);
	while(numC!=0){
		printf("Ingrese codigo de transaccio 1,(Deposito), 2(extraccion), 3(Comisiones deducidas), 4(Interesces acreditadas): ");
		scanf("%d",&code);
		printf("Ingrese Monto: ");
		scanf("%d",&monto);
		if(code==1){
			clientes[numC-1][1]+=monto;
			clientes[numC-1][5]+=monto;
		}else{
			if(code==2){
				clientes[numC-1][2]+=monto;
				clientes[numC-1][5]-=monto;
			}else{
				if(code==3){
					clientes[numC-1][3]+=monto;
					clientes[numC-1][5]-=monto;
				}else{
					if(code==4){
						clientes[numC-1][4]+=monto;
						clientes[numC-1][5]+=monto;
					}
				}
			}
		}
		printf("Ingrese numero de cliente: ");
		scanf("%d",&numC);
	}
	for(i=0;i<100;i++){
		clientes[i][0]=i+1;
	}
	printf("Nro Cliente  Deposito    Extraccion  Comisiones deducidas  Interesces acreditadas Saldo\n");
	for(i=0;i<100;i++){
		for(j=0;j<6;j++){
			printf("%.2f\t\t",clientes[i][j]);
			if(mayor<clientes[i][1]){
				mayor=clientes[i][1];
			}
		}
		printf("\n");
	}
	printf("Clientes con mayor deposito: \n");
	for(i=0;i<100;i++){
		if(clientes[i][1]==mayor){
			printf("-Nro %.2f -- Deposito %2.f\n",clientes[i][0],clientes[i][1]);
		}
		
	}
	return 0;
}