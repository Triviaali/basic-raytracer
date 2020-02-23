//
// Created by anssivm on 2/23/20.
//

#ifndef RAY_TRACER_IN_A_WEEKEND_HITABLE_H
#define RAY_TRACER_IN_A_WEEKEND_HITABLE_H
#include "ray.h"

struct hit_record {
    float t;
    vec3 p;
    vec3 normal;
};

class hitable {
public:
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};


#endif //RAY_TRACER_IN_A_WEEKEND_HITABLE_H
