#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int a=0, b=0, c=0, d=0, e=0, f=0, g=0; //NOTAS E 1 R$
	double h=0, i=0, j=0, k=0, l=0; //MOEDAS
	double money;

	scanf("%lf", &money);

	if(money>=100){
		a = (int)money/100;
		money -= a*100;
	}
	if(money>=50 && money <100){
		b = money/50;
		money -= b*50;
	}
	if(money>=20 && money<50){
		c = money/20;
		money -= c*20;
	}
	if(money>=10 && money<20){
		d = money/10;
		money -= d*10;
	}
	if(money>=5 && money<10){
		e = money/5;
		money -= e*5;
	}
	if(money>=2 && money<5){
		f = money/2;
		money -= f*2;
	}
	if(money>=1 && money < 2){
		g = money/1;
		money-=g*1;
	}
	if(money>=0.5 && money<1){
		h = money/0.5;
		money -= (int)h * 0.5;
	}
	if(money>=0.25 && money<0.5){
		i = money/0.25;
		money -= (int)i * 0.25;
	}
	if(money>=0.10 && money<0.25){
		j = money/0.10;
		money -= (int)j * 0.10;
	}
	if(money>=0.05 && money<0.1){
		k = money/0.05;
		money -= (int)k * 0.05;
	}
	if(money>=0.01 && money<0.05){
		l = money/0.01;
		money -= (int)l * 0.01;
	}

		printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n",(int) h);
    printf("%d moeda(s) de R$ 0.25\n", (int) i);
    printf("%d moeda(s) de R$ 0.10\n", (int) j);
    printf("%d moeda(s) de R$ 0.05\n", (int) k);
		printf("%d moeda(s) de R$ 0.01\n", (int) l);

return 0;
}
