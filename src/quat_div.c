#include "quaternion.h"

t_quat          quat_div(t_quat q1, t_quat q2)
{
    return (quat_mult(q1, quat_inv(q2)));
}

