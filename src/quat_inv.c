#include "quaternion.h"

t_quat          quat_inv(t_quat q)
{
    t_re    mod;

    mod = quat_mod(q);
    return (quat_mult_num(quat_conj(q), 1.0 / mod));
}

