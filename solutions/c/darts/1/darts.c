#include "darts.h"
#include "math.h"

int score(coordinate_t landing_point) {
    float distance = sqrt(landing_point.x * landing_point.x + landing_point.y * landing_point.y);

    if (distance <= 1.0F) {
        return 10;
    } else if (distance <= 5.0F) {
        return 5;
    } else if (distance <= 10.0F) {
        return 1;
    } else {
        return 0;
    }
}