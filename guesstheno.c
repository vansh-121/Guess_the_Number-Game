#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int no;
    srand(time(0));
    no = rand() % 100 + 1;
    int guess;
    int n = 1;

    do {
        printf("Guess the no between 1 to 100: ");
        scanf("%d", &guess);

        if (guess < no) {
            printf("Go Higher\n");
        } else if (guess > no) {
            printf("Go Lower\n");
        } else {
            printf("No is found in %d attempts\n", n);
        }
        n++;
    } while (guess != no);

    return 0;
}
