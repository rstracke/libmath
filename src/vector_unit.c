#include "vector.h"

t_vector    vector_unit(t_vector v)
{
    t_re mod;

    mod = vector_mod(v);
    return (vector_mult_num(v, 1.0/mod));
}

