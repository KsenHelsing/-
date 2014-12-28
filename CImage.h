#ifndef CIMAGE_H
#define	CIMAGE_H

#include <cstdlib>
#include <stdio.h>
#include <string.h>

class CImage {
    
    int fon;
    int pnt;

    int mx;
    int my;
    int mas [100][100];
    
public:
    CImage(int ty, int tx);
    void drawhline(int y);
    void drawvline(int x);
    void set(int x,int y,int elem);
    int get(int x,int y);
    void zalka(int x,int y);
    void showpnm();
};

#endif

