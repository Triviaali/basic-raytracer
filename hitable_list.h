//
// Created by anssivm on 2/23/20.
//

#ifndef RAY_TRACER_IN_A_WEEKEND_HITABLE_LIST_H
#define RAY_TRACER_IN_A_WEEKEND_HITABLE_LIST_H


#include "hitable.h"

class hitable_list: public hitable {
public:
    hitable_list() = default;
    hitable_list(hitable **l, int n) {list = l; list_size = n;}
    virtual bool hit(const ray& r, float tmin, float tmax, hit_record& rec) const;
    hitable **list;
    int list_size;
};



#endif //RAY_TRACER_IN_A_WEEKEND_HITABLE_LIST_H
