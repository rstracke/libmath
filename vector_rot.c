#include "vector_quat.h"

t_vector    vector_rot(t_vector v, t_quat rot)
{
    t_quat  q;
    
    q = quat_prod(quat_prod(rot, vector_to_quat((t_re)0.0, v)), quat_conj(rot));
    return (quat_to_vector(q));
}