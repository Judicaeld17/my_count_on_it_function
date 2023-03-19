
// Description
// Count the size of each elements in an array.

// Create a function my_count_on_it that receives a string array as a parameter and returns an array with the length of each string.
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

int str_count(char* str){
    char* temp =str;
    int i=0;
    while(*temp!='\0'){
     i++;
     temp++;
    }
    return i;
}
integer_array* my_count_on_it(string_array* str_arr)
{  int len= str_arr->size;
   int array[len];
   
   integer_array* r_arr=(integer_array*)malloc(sizeof(integer_array));
   r_arr->size=len;
   r_arr->array=(int*)malloc(len*sizeof(int));
   for(int i=0;i<len;i++){

     r_arr->array[i]=str_count(str_arr->array[i]);
   }
   return r_arr;
}