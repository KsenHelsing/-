#include "CImage.h"

using namespace std;

int main(int argc, char** argv) {
    int xmax = 24;
    int ymax = 30;
    CImage a(xmax, ymax);

    a.zalka(19, 2);
    a.zalka(13, 7);
    a.zalka(19, 12);
    a.zalka(19, 17);
    a.zalka(13, 22);
    a.zalka(7, 27);

    for (int i = 0; i < 25; i += 6) {
        a.drawhline(i);
    }

    for (int j = 0; j < 31; j += 5) {
        a.drawvline(j);
    }

    a.showpnm();

    return 0;
}

