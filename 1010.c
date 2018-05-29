#include <stdio.h>
 
int main() {
 
    int P, p, U, u;
	double V, v, Vf;
	
	scanf("%d%d%lf",&P,&U,&V);
	scanf("%d%d%lf",&p,&u,&v);
	
	Vf= U*V+u*v;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", Vf);
	
    return 0;
}
