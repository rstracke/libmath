#include "vector.h"

t_vector    vector_add(t_vector v1, t_vector v2)
{
    t_vector res;
    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;
    res.z = v1.z + v2.z;
    return (res);
}

