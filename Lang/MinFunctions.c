#include "Core.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


u64 StrLen(const char *s) {
    const char *p = s;
    while (*p) ++p;
    return p - s;
}

u64 StrLen2(const i8 s[]) {
    const i8 *p = s;
    while (*p) ++p;
    return p - s;
}


void NewStack(Stack **stack){
  *stack = (Stack *)malloc(sizeof(Stack));
  if (!(*stack)) {
    printf("NewStack: Stack: No Memory");
    exit(1);
  }

  (*stack)->Data = (u8 *)malloc(sizeof(u8));
  if (!(*stack)->Data) {
    printf("NewStack: Stack-Data: No Memory");
    exit(1);
  }
  (*stack)->Index = -1;
  (*stack)->Length = 1;
}

void PushStack(Stack *stack, u8 Val){
  if (++stack->Index==stack->Length){
    u8 *NewData = (u8 *)malloc(sizeof(u8) * stack->Length * 2);
    if (!NewData) {
      printf("PushStack: Stack-Data: No Memory");
      exit(1);
    }
    memcpy(NewData, stack->Data, stack->Length);
    free(stack->Data);
    stack->Data = NewData;
    stack->Length *= 2;
  }
  *(stack->Data + stack->Index) = Val;
}


u8 PopStack(Stack *stack){
  if (stack->Index==-1) {
    printf("PopStack: Non-Iten");
    exit(1);
  }
  u8 val = *(stack->Data+(stack->Index--));
  return val;
}

inline void ClearIndexStack(Stack *stack){
  stack->Index = -1;
}

inline void FreeStack(Stack **stack){
  free((*stack)->Data); free(*stack);
}

void NewString(StringNode **string){
  *string = (StringNode *)malloc(sizeof(StringNode));
  if (!(*string)) {
    printf("NewString: StringNode: No Memory");
    exit(1);
  }
  (*string)->Nodes = (StringNode *)malloc(sizeof(StringNode *));
  if (!((*string)->Nodes)) {
    printf("NewString: StringNode->Nodes: No Memory");
    exit(1);
  }
  (*string)->ID = 0;
  (*string)->Len = 1;
  (*string)->BitArray = 0;
}

void PushString