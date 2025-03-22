#include <stdio.h>

void computeHomeValue(void){
	int population, size, home_value;
	
	printf("Enter population>\n");
	scanf("%d", &population);
	printf("Enter size>\n");
	scanf("%d", &size);

	home_value = (population*population*population+size*size)*10000;
	printf("Home value is %d", home_value);
}

int main(){
	
	computeHomeValue();
	
	return(0);
}
