#pragma once

typedef signed char i8;
typedef unsigned char u8;

typedef signed short i16;
typedef unsigned short u16;

typedef signed long int i32;
typedef unsigned long int u32;

typedef signed long long int i64;
typedef unsigned long long int u64;

typedef struct Stack{
  u8 *Data;
  i64 Index;
  u64 Length;
} Stack;


typedef struct StringNode{
  struct StringNode* Nodes;
  u64 BitArray;
  u32 ID; // End = This a String
  u8 Len;
} StringNode;