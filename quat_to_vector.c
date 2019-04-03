#include "vector_quat.h"

t_vector    quat_to_vector(t_quat q)
{
    t_vector  v;

    v.x = q.i;
    v.y = q.j;
    v.z = q.k;
    return (v);
}