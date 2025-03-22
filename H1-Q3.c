#include <stdio.h>

int main(void){
	int population;
	double size, home_value;
	printf("Enter population>\n");
	scanf("%d", &population);
	printf("Enter size>\n");
	scanf("%lf", &size);
	
	home_value = (population*population*population+size*size)*10000;
	printf("Home value is %.2f", home_value);
	return(0);
	
}
