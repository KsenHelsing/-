#include "CImage.h"

CImage::CImage(int ty, int tx) {
    fon = 1;
    pnt = 1;
    mx = tx;
    my = ty;
}

void CImage::set(int x, int y, int elem) {
    mas[x][y] = elem;
}

int CImage::get(int x, int y) {
    return mas[x][y];
}

void CImage::zalka(int x, int y) {
    mas[y][x] = pnt;
    mas[y + 1][x + 1] = pnt;
    mas[y + 2][x + 2] = pnt;

    mas[y + 1][x + 3] = pnt;
    mas[y][x + 4] = pnt;
}

void CImage::drawvline(int x) {
    int j;
    for (j = 0; j <= my; j++)
        set(x, j, fon);
}

void CImage::drawhline(int y) {
    int i;
    for (i = 0; i < mx; i++)
        set(i, y, fon);
}

void CImage::showpnm() {
    int i;
    int j;
    printf("P1\n");
    printf("%d %d\n", mx, my);
    for (i = 0; i <= mx; i++) {
        for (j = 0; j <= my; j++) {
            printf("%d", mas[i][j]);
        }
        printf("\n");
    }
}
