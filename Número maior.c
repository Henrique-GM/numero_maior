#include<stdio.h>
#include<stdlib.h>
int main(){
	
	//inserindo vari�veis.
	int num1, num2;
	
	//inserindo o primeiro n�mero.
	printf("digite um numero:");
	scanf("%d", &num1);
	
	//inserindo o segundo n�mero.
	printf("digite o segundo numero:");
	scanf("%d", &num2);
	
	
	//inserindo condicionais.
	if(num1 > num2)
	{
		printf("o numero maior que foi digitado eh:%d", num1);	
	}
	
	else
	{
		printf("o maior numero que foi digitado eh:%d", num2);
	}
		
system("pause");	
return 0;	
}
