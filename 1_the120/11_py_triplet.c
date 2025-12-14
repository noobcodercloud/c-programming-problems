#include <stdio.h>

int main() {
    int x, y, z, isFound = 0;

    for (x = 1; x < 1000 && !isFound; x++) {
        for (y = x + 1; y < 1000 && !isFound; y++) {
            z = 1000 - x - y;  // directly calculate z
            if (z > y && (x * x + y * y == z * z)) {
                printf("%d + %d + %d = 1000\n", x, y, z);
                isFound = 1;  // stop all loops
            }
        }
    }

    return 0;
}
