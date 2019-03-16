#include "quaternion.h"

t_quat          quat_init(t_re s, t_re i, t_re j, t_re k)
{
    t_quat q;
    q.s = s;
    q.i = i;
    q.j = j;
    q.k = k;
    return (q);
}

