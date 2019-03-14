#ifndef VECTOR_H
#define VECTOR_H

typedef long double t_re;
typedef long double t_im;

typedef struct  s_vector
{
    t_re        x;
    t_re        y;
    t_re        z;
}               t_vector;

t_vector		vector_init(t_re x, t_re y, t_re z);
t_re			vector_mod(t_vector v);
t_vector		vector_map(t_vector v, t_re (*f)(t_re));
t_vector		vector_mult_num(t_vector v, t_re a);
t_vector		vector_unit(t_vector v);

t_vector		vector_add(t_vector u, t_vector v);
t_vector		vector_cross(t_vector u, t_vector v);
t_re			vector_dot(t_vector u, t_vector v);

#endif