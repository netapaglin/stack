#ifndef __STACK_H__
#define __STACK_H__

Typedef struct Stack Stack;
Stack* StackCreate (size_t _size, size_t _blockSize);
void StackDestroy(Stack* _stack);
ADTErr StackPush (Stack* _stack, int _item);
ADTErr StackPop (Stack* _stack, int* _item);
ADTErr StackTop (Stack* _stack, int* _item);
int StackIsEmpty(Stack* _stack);
void StackPrint (Stack *_stack);


#endif /* __STACK__ */
