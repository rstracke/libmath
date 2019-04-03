#include "quaternion.h"

t_re          quat_mod(t_quat q)
{
    return ((q.s * q.s)+(q.i * q.i)+(q.j * q.j)+(q.k * q.k));
}

