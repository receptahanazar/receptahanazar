#include <stdio.h>

int computeHomeValue(int popularity, int size){
	int home_value = (popularity*popularity*popularity+size*size)*10000;
	return home_value;
}

int main(){
	int popularity, size;

	printf("Enter population>\n");
	scanf("%d", &popularity);
	printf("Enter size>\n");
	scanf("%d", &size);
	

	printf("Home value is %d", computeHomeValue(popularity, size));
	return(0);

}
