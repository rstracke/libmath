#include "../includes/vector.h"

t_re    vector_mod(t_vector v)
{
    return (v.x * v.x + v.y * v.y + v.z * v.z);
}