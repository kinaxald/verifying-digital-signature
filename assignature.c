#include<stdio.h>
#include<stdlib.h>

int calculaDigito(int n);

main()
{
	int n,a;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	while(n>0){
		a = calculaDigito (n);
		printf("%d\n",a);
		scanf("%d",&n);
	}
	getchar();
}

int calculaDigito (int n){
	
	int i,res=1,div,b,c,v[10],d,soma=0;
	
	for(i=0,d=2;res>0;i++,d++)
	{
		res=n%10;
		v[i]=res;
		div=n/10;
		n=div;
		v[i]=v[i]*d;
		soma = soma + v[i];
	}

	b = soma%11;
	c = 11-b;
	
	if(c==10 || c==11)
		c=0;
	
	return c;
}
