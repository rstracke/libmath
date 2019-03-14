#include "../includes/complex.h"

t_cmplx         cmplx_init(t_re re, t_im im)
{
    t_cmplx z;
    z.re = re;
    z.im = im;
    return (z);
}