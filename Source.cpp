#include <stdio.h>

int main() {
    double mass[30];

    for (int i = 0; i < 30; i++) {
        mass[i] = i; 
    }

	for (int i=0; i<30; i++) {
		printf("%d ", mass[i]);
	}

    return 0;
}
