#include <stdio.h>

void rekurzio(int elsoElem);

int g;

int main() {

    int elsoElem;

    scanf("%d", &elsoElem);

    rekurzio(elsoElem);

    printf("\n%d ", g);

    return 0;
}

void rekurzio(int elem) {

    printf("%d, ", elem);

    if (elem % 2 == 0 && elem > 1) {
        elem = elem / 2;
        rekurzio(elem);
        g++;
    } else if (elem == 1) {
        g++;
    } else {
        elem = (elem * 3) + 1;
        rekurzio(elem);
        g++;
    }
}