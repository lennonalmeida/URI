#include <stdio.h>
 
int main() {
double SALARY, MONTANTE, SALARYF;
char NOME[100];

		scanf("%s%lf%lf", &NOME,&SALARYF,&MONTANTE);
		
		SALARY = MONTANTE*0.15+SALARYF;
		
		printf ("TOTAL = R$ %.2lf\n", SALARY);
 
    return 0;
}
