#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if(b * b - 4 * a * c >= 0 && a != 0){
		double delta = sqrt(b * b - 4 * a * c);
		double R1 = (-b + delta)/ (2 * a), R2 = (-b - delta)/ (2 * a);
		printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
	}
	else{
		printf("Impossivel calcular\n");
	}
	return 0;
}
