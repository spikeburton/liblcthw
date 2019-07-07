#ifndef liblcthw_list_algos_h
#define liblcthw_list_algos_h

#include <liblcthw/list.h>

typedef int (*List_compare)(const void *a, const void *b);

int List_bubble_sort(List *list, List_compare cmp);
List *List_merge_sort(List *list, List_compare cmp);

#endif
