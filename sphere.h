//
// Created by anssivm on 2/23/20.
//

#ifndef RAY_TRACER_IN_A_WEEKEND_SPHERE_H
#define RAY_TRACER_IN_A_WEEKEND_SPHERE_H

#include "hitable.h"

class sphere: public hitable {
public:
    sphere() = default;
    sphere(vec3 cen, float r) : center(cen), radius(r) {};
    virtual bool hit(const ray& r, float tmin, float tmax, hit_record& rec) const;
    vec3 center;
    float radius;

};



#endif //RAY_TRACER_IN_A_WEEKEND_SPHERE_H
