#include "../includes/complex.h"

t_re         cmplx_mod(t_cmplx z)
{
    return (sqrt((z.re * z.re) + (z.im * z.im)));
}