#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	float a, b, c, d, e, f, soma = 0;
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
	int i = 0, j;
	if(a > 0.){ i++; soma += a;}
	if(b > 0.){ i++; soma += b;}
	if(c > 0.){ i++; soma += c;}
	if(d > 0.){ i++; soma += d;}
	if(e > 0.){ i++; soma += e;}
	if(f > 0.){ i++; soma += f;}
  float media = (float)soma/i;
	printf("%d valores positivos\n%.1f\n", i, media);


return 0;
}
