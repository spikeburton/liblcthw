#include <liblcthw/dbg.h>
#include <liblcthw/list_algos.h>

void swap(ListNode *a, ListNode *b) {
  void *tmp = a->value;
  a->value = b->value;
  b->value = tmp;
}

int List_bubble_sort(List *list, List_compare cmp) {
  int sorted = 1;

  do
  {
    sorted = 1;
    LIST_FOREACH(list, first, next, cur) {
      if (cur->next) {
        debug("current element: %s, next: %s", (char *) cur->value, (char *) cur->next->value);
        if (cmp(cur->value, cur->next->value) > 0) {
          debug("need to swap: %s, %s", (char *) cur->value, (char *)cur->next->value);
          swap(cur, cur->next);
          sorted = 0;
        }
      }
    }
    debug("-----");
  } while (!sorted);

  return 0;
}

List *List_merge_sort(List *list, List_compare cmp) {
  List *result = List_create();

  return result;
}
