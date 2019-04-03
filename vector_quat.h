#ifndef VECTOR_QUAT_H
#define VECTOR_QUAT_H

#include "vector.h"
#include "quaternion.h"

t_quat      vector_to_quat(t_re s, t_vector v);
t_quat      quat_rot(t_vector axis, t_re angle);
t_vector    quat_to_vector(t_quat q);
t_vector    vector_rot(t_vector, t_quat rot);

#endif