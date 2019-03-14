#include "../includes/vector.h"

t_vector    vector_init(t_re x, t_re y, t_re z)
{
    t_vector    v;

    v.x = x;
    v.y = y;
    v.z = z;
    return (v);
}