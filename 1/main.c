#include <stdio.h>

int main() {

    int szint, asz, x, tegla, behuzas;

    printf("Hany szintes a bastya?");
    scanf("%d", &szint);

    for (asz = szint; asz >= 0; asz--) {
        if (asz >= 0) {
            for (behuzas = asz; behuzas >= 0; behuzas--) {
                printf(" ");
            }
            for (tegla = 0; tegla < 2; tegla++) {
                for (x = asz; x <= szint; x++) {
                    printf("X");
                }
                printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}