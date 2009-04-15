#ifndef PLANE_H_924GCA3G
#define PLANE_H_924GCA3G

#include "RE167_global.h"
#include "Vector4.h"

namespace RE167 {
    
    class RE167_EXPORT Plane
    {
    public:
        
        
        Plane(const float dist, const Vector4 &normal) : distance(dist), unitNormal(normal) {}
        // no memory allocated
        ~Plane() {}
        
        inline float getDistance() { return distance; }
        inline Vector4 getUnitNormal() { return unitNormal; }
        
        float distanceTo(const Vector4 &point);
        
        static void test();
    private:
        // Perpendicular distance from origin to the plane
        float distance;
        Vector4 unitNormal;
        
    };
}
#endif /* end of include guard: PLANE_H_924GCA3G */