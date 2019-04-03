#include "complex.h"

t_cmplx         cmplx_scalar(t_cmplx z, t_re k)
{
    return (cmplx_init(k * z.re, k * z.im));
}