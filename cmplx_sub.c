#include "complex.h"

t_cmplx         cmplx_sub(t_cmplx z1, t_cmplx z2)
{
    return (cmplx_init(z1.re - z2.re, z1.im - z2.im));
}

