#include "neurone.h"
#include <stdlib.h>

struct layer {
  struct neurone *neurone_list;
  int nb_neurone;
};

struct layer* init_layer() {

  struct layer *l = malloc(sizeof(struct layer));
  l->neurone_list = malloc(5 * sizeof(struct neurone));
  l-

}
