#include "chunk.h"

jit_chunk chunk_table[] = {
  { ins_const   , 5 ,  1, -1, "\x68\xdd\xcc\xbb\xaa" },
  { ins_getl    , 7 ,  2, -1, "\x8b\x85\xdd\xcc\xbb\xaa\x50" },
  { ins_setl    , 7 ,  3, -1, "\x58\x89\x85\xdd\xcc\xbb\xaa" },
  { inst_add    , 7 , -1, -1, "\x58\x03\x04\x24\x89\x04\x24" },
  { ins_sub     , 7 , -1, -1, "\x58\x2b\x04\x24\x89\x04\x24" },
  { ins_mul     , 7 , -1, -1, "\x58\xf7\x24\x24\x89\x04\x24" },
  { ins_div     , 7 , -1, -1, "\x58\xf7\x34\x24\x89\x04\x24" },
  { ins_lt      , 10, -1, -1, "\x59\x5a\x31\xc0\x39\xd1\x0f\x9c\xc0\x50" },
  { ins_lte     , 10, -1, -1, "\x59\x5a\x31\xc0\x39\xd1\x0f\x9e\xc0\x50" },
  { ins_gt      , 10, -1, -1, "\x59\x5a\x31\xc0\x39\xd1\x0f\x9f\xc0\x50" },
  { ins_gte     , 10, -1, -1, "\x59\x5a\x31\xc0\x39\xd1\x0f\x9d\xc0\x50" },
  { ins_eq      , 10, -1, -1, "\x59\x5a\x31\xc0\x39\xd1\x0f\x94\xc0\x50" },
  { ins_neq     , 10, -1, -1, "\x59\x5a\x31\xc0\x39\xd1\x0f\x95\xc0\x50" },
  { ins_andl    , 5 , -1, -1, "\x58\x5b\x20\xd8\x50" },
  { ins_orl     , 5 , -1, -1, "\x58\x5b\x08\xd8\x50" },
  { ins_notl    , 4 , -1, -1, "\x58\xf6\xd0\x50" },
  { ins_drop    , 6 ,  2, -1, "\x81\xc4\xdd\xcc\xbb\xaa" },
  { ins_frame   , 9 ,  5, -1, "\x55\x89\xe5\x81\xec\xdd\xcc\xbb\xaa" },
  { ins_ret     , 8 ,  4, -1, "\x58\x5d\x81\xc4\xdd\xcc\xbb\xaa" },
  { ins_call    , 6 , -1,  1, "\xe8\x48\xcc\xbb\xaa\x50" },
  { ins_jnz     , 10, -1,  6, "\x58\x83\xf8\x00\x0f\x85\x3d\xcc\xbb\xaa" },
  { ins_jz      , 10, -1,  6, "\x58\x83\xf8\x00\x0f\x84\x33\xcc\xbb\xaa" },
  { ins_jmp     , 5 , -1,  1, "\xe9\x2e\xcc\xbb\xaa" },
};