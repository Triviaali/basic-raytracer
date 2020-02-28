//
// Created by anssivm on 2/23/20.
//

#ifndef RAY_TRACER_IN_A_WEEKEND_CAMERA_H
#define RAY_TRACER_IN_A_WEEKEND_CAMERA_H


#include "ray.h"

class camera {
public:
    camera() {
        lower_left_corner = vec3(-2.0, -1.0, -1.0);
        horizontal = vec3(4.0, 0.0, 0.0);
        vertical = vec3(0.0, 2.0, 0.0);
        origin = vec3(0.0, 0.0, 0.0);

    }
    ray get_ray(float u, float v) {return ray(origin, lower_left_corner + u*horizontal + v*vertical - origin);}
    vec3 origin;
    vec3 horizontal;
    vec3 lower_left_corner;
    vec3 vertical;
};


#endif //RAY_TRACER_IN_A_WEEKEND_CAMERA_H
