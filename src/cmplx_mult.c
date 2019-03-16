#include "complex.h"

t_cmplx         cmplx_mult(t_cmplx z1, t_cmplx z2)
{
    t_cmplx z;
    z.re = (z1.re * z2.re) - (z1.im * z2.im);
    z.im = (z1.re * z2.im) + (z1.im * z2.re);
    return (z);
}

