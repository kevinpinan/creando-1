#inlcude <iostream>

//funcion principal
int main(){
	
	//variable
	int dato=45
	int peso;
	std::cout<<dato;
	
	// arrays
	int sueldos[4]={45,74,23,45};
	
	std::cout<<sueldos[2];
	
	
	//matrices
	int salarios[3][3]={{100,500,46},{120,850,96},{800,200,66}};
	
	/* 			0	1	2
			0	100,500,46
			1	120,850,96
			2	800,200,66
	*/
	//	[FILA][COLUMNA]
	std::cout<<salarios[2][0];
	
}
