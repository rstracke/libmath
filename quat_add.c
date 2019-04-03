#include "quaternion.h"

t_quat          quat_add(t_quat q1, t_quat q2)
{
    return (quat_init(q1.s + q2.s, q1.i + q2.i, q1.j + q2.j, q1.k + q2.k));
}

