#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char arr1[1000];
        char arr2[1000];
        int cnt = 0;

        printf("Enter two strings>> ");
        scanf_s("%999s", arr1, 1000);
        if (strcmp(arr1, "Quit") == 0) break;
        scanf_s("%999s", arr2, 1000);

        int len1 = strlen(arr1);
        int len2 = strlen(arr2);

        for (int j = 0; j <= len1 - len2; j++) {
            if (strncmp(&arr1[j], arr2, len2) == 0) {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}
