#include <stdio.h>

int main() {
    double mass[30];
	double y;

    for (int i = 0; i < 30; i++) {
        mass[i] = i; 
    }

	for (int i=0; i<30; i++) {
		printf("%d ", mass[i]);
	}

	for (int i = 0; i<30; i++){
		y += mass[i];
	}
	printf("%d",y);
    return 0;
}
