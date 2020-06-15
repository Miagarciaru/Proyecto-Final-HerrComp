/*
1- Hacer una estructura que represente las coordenadas de la ciudad
2- Hacer una función que calcule la distancia en función del camino y las posiciones de las ciudades
Consideraciones: El mensajero debe pasar por cada ciudad una sola vez (Hacer permutaciones)

El mensajero debe llegar a la ciudad de la cual partió.

El mensajero sabe cual es la distancia entre determinadas ciudades y por lo tanto escogerá la de menor camino.

3- 
 */


#include <iostream>
#include <random>
#include <cmath>


struct city {
  bool visited;
  double r[2];
};

void initial_conditions(int N, std::vector<city> & cities);
void fill_randomly_locations (int seed, std::vector<city> &Cities);

int main (int argc, char **argv)
{
  int N=3;

  int seed = 0;

  
  std::vector<city> Cities(N);
  initial_conditions (N, Cities);
  
  // std::mt19937 gen (seed);
  //std::uniform_real_distribution<double> d(-1.0, 1.0);

  for(int ii=0; ii<N; ++ii){
    std::cout<<ii<<Cities[ii].r[0]<<"  "<<Cities[ii].r[1]<<"\n";
  }

  
  
  return 0;
}

void initial_conditions(int N, std::vector<city> & cities)
{
  /*
    z
    |
    |____ y
   /
  x  
  */
  for (int ii=0; ii<N; ++ii){
    cities[ii].r[0] = 1.5;
    cities[ii].r[1] = 2.0;
    cities[ii].visited=false;
  }
}
