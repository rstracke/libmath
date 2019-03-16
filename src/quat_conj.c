#include "quaternion.h"

t_quat          quat_conj(t_quat q)
{
    return (quat_init(q.s, -q.i, -q.j, -q.k));
}

