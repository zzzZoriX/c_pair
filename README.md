# c_pair
C realization of std::pair&lt;T, K> from C++ based on macroses

how to use?
1. call the define-function: DEFINE_PAIR(T, K) and give it 2 types for pair. this function will create a pair with the specified types
2. use type pair_T_K for variables and insert your specified types in define function instead of T and K
3. use new_pair(T, K) to create a variables with your pair type
4. use delete_pair(pair_T_K*) to delete a pair variable
