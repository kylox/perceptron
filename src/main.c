#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct neurone 
{
  float input;
  float weight;
};


struct perceptron
{
  struct layer *layer_list;
  int nb_layer;
};

struct neurone* init_neurone() {
  srand(time(NULL));
  struct neurone *n = malloc(sizeof(struct neurone));
  n->input = 0;
  n->weight = (float)rand() / (float)RAND_MAX;

  return n;
}


void free_neurone(struct neurone* n) {
  free(n);
}

void free_layer(struct layer* l) {
  for (int i = 0; i < l.nb_neurone; ++i)
    free_neurone(l.neurone_list[i])
  free(l);
}

int main(int argc, char **argv)
{
  struct neurone n1;
  struct neurone n2;
  n1.weight =
  n2.weight = (float)rand() / (float)RAND_MAX;

  struct layer l1;
  l1.neurone_list = malloc(2 * sizeof(struct neurone));
  l1.neurone_list[0] = n1;
  l1.neurone_list[1] = n2;


  printf("%f\n", l1.neurone_list[0].weight);

  

  return 0;
}
