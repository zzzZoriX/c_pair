#ifndef CPAIR_H
#define CPAIR_H

#include <stdlib.h>

#define DEFINE_PAIR(T, K)                                                   \
typedef struct {                                                            \
    T left;                                                                 \
    K right;                                                                \
} pair_##T##_##K;                                                           \
                                                                            \
pair_##T##_##K* new_pair(                                                   \
    T left,                                                                 \
    K right                                                                 \
){                                                                          \
    pair_##T##_##K* np = (pair_##T##_##K*)malloc(sizeof(pair_##T##_##K));   \
    np->left = left;                                                        \
    np->right = right;                                                      \
                                                                            \
    return np;                                                              \
}                                                                           \
                                                                            \
void delete_pair(pair_##T##_##K* pair){                                     \
    free(pair);                                                             \
}


#endif // CPAIR_H