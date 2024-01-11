#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    line(50, 50, 100, 50);
    line(100, 100, 40, 50);

    getch();
    closegraph();
    return 0;
}

