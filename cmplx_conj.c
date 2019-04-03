#include "complex.h"

t_cmplx         cmplx_conj(t_cmplx z)
{
    return (cmplx_init(z.re, -z.im));
}