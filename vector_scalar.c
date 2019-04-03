#include "vector.h"

t_vector    vector_scalar(t_vector v, t_re k)
{
    t_vector w;
    w.x = k * v.x;
    w.y = k * v.y;
    w.z = k * v.z;
    return (w);
}