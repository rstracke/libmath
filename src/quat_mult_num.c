#include "quaternion.h"

t_quat          quat_mult_num(t_quat q, t_re k)
{
    t_quat res;

    res.s = k * q.s;
    res.i = k * q.i;
    res.j = k * q.j;
    res.k = k * q.k;
    return (res);
}

