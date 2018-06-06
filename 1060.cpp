#include <iostream>
#include <cstdio>
using namespace std;

int main(){
float a, b, c, d, e, f;
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	int i = 0;
	if(a > 0.) i++;
	if(b > 0.) i++;
	if(c > 0.) i++;
	if(d > 0.) i++;
	if(e > 0.) i++;
	if(f > 0.) i++;

	printf("%d valores positivos\n", i);


return 0;
}
