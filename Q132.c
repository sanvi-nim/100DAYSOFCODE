
#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight light;
    int n;

    scanf("%d", &n);
    light = n;

    switch (light) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}
