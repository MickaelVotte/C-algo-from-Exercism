#include "space_age.h"

#define EARTH_YEAR_IN_SECONDS 31557600.0
#define MERCURY_RATIO 0.2408467
#define VENUS_RATIO 0.61519726
#define EARTH_RATIO 1.0
#define MARS_RATIO 1.8808158
#define JUPITER_RATIO 11.862615
#define SATURN_RATIO 29.447498
#define URANUS_RATIO 84.016846
#define NEPTUNE_RATIO 164.79132

float age(planet_t planet, int64_t seconds){
    double result = 0;
    double earth_year_seconds = 31557600;

    if(seconds < 0){
        return -1.0;
    }
    switch(planet){
        case MERCURY:
            result = seconds / (earth_year_seconds * MERCURY_RATIO);
            break;
        case VENUS:
            result = seconds / (earth_year_seconds * VENUS_RATIO);
            break;
        case EARTH:
            result = seconds / (earth_year_seconds * EARTH_RATIO);
            break;
        case MARS:
            result = seconds / (earth_year_seconds * MARS_RATIO);
            break;
        case JUPITER:
            result = seconds / (earth_year_seconds * JUPITER_RATIO);
            break;
        case SATURN:
            result = seconds / (earth_year_seconds * SATURN_RATIO);
            break;
        case URANUS:
            result = seconds / (earth_year_seconds * URANUS_RATIO);
            break;
        case NEPTUNE:
            result = seconds / (earth_year_seconds * NEPTUNE_RATIO);
            break;
        default:
            return -1.0;
    }
    return result;
}