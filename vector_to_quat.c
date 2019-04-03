#include "vector_quat.h"

t_quat   vector_to_quat(t_re s, t_vector v)
{
    t_quat  q;

    q.s = s;
    q.i = v.x;
    q.j = v.y;
    q.k = v.z;
    return (q);
}