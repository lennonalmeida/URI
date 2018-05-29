#include <stdio.h>

int main() {
double SALARY, HOURWORK;
int HOUR, NUMBER;

    scanf("%d%d%lf", &NUMBER,&HOUR,&HOURWORK);
    
    SALARY = HOUR*HOURWORK;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER, SALARY);
 
    return 0;
}
