#include <iostream>
#include <fstream>
#include <math.h>
#include "ray.h"

using namespace std;

vec3 color(const ray& r) {
    vec3 unit_direction = unit_vector(r.direction());
    float t = 0.5*(unit_direction.y() + 1.0);
    return (1.0-t)*vec3(1.0, 1.0, 1.0) + t*vec3(0.5, 0.7, 1.0);
}


int main() {
    int nx = 200;
    int ny = 100;
    ofstream myfile;
    myfile.open("example.ppm");
    myfile << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j > 0; j--) {
        for (int i = 0; i < nx; i++) {
            vec3 col(float(i) / float(nx), float(j) / float(ny), 0.2);

            int ir = int(255.99*col[0]);
            int ig = int(255.99*col[1]);
            float ib = int(255.99*col[2]);
            myfile << ir << " " << ig << " " << " " << ib << "\n";
        }
    }
    myfile.close();
    return 0;
}
