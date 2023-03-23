#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    float s, area;

    scanf("%d %d %d", &x, &y, &z);

    s = (float) (x + y + z) / 2;

    area = (float) sqrt(s * (s - x) * (s - y) * (s - z));

    printf("%.3f", area);

    return 0;
}
