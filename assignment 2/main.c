#include <stdio.h>

int main() {
    char name[50];
    int age;

    FILE *f = fopen("data.txt", "r");
    if (f != NULL) {
        while (fscanf(f, "%s %d", name, &age) == 2) {
            printf("%s %d\n", name, age);
        }
        fclose(f);
    }

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    f = fopen("data.txt", "a");
    if (f != NULL) {
        fprintf(f, "%s %d\n", name, age);
        fclose(f);
    }

    printf("Saved: %s %d\n", name, age);

    return 0;
}