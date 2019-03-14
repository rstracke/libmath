#ifndef MATRIX_H
# define MATRIX_H

typedef struct  s_matrix
{
    int         width;
    int         height;
    double      **data;
}               t_matrix;

t_matrix        matrix_init(int width, int height);

#endif