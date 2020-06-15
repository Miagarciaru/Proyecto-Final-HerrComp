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
  //bool visited;
  double r[2];
};

void fill_randomly_locations (int seed, std::vector<city> &Cities);

int main (int argc, char **argv)
{
  int N=0;
  N = 3;
  int seed = 0;
  
  std::vector<city> Cities (N);
  fill_randomly_locations (seed, Cities);

  //std::ofstream fout("datos.txt", std::ofstream::out);
  //fout.precision(15); fout.setf(std::ios::scientific);
  
  for (auto & c : Cities) {
    std::cout << c.r[0] << "  " << c.r[1] << "\n";
    return 0;
  }
}

/*
void path_generate (int N)
{
  std::vector<city> Cities (2*N);
  fill_randomly_locations (Cities);
  
}
*/

void fill_randomly_locations (int seed, std::vector<city> &Cities)
{
  
  std::mt19937 gen (seed);
  std::uniform_real_distribution<double> d(-1.0, 1.0);

  /*  
  for (const auto & ciu : Cities)
    {
      double ciu.r[0] = d(gen);
      double ciu.r[1] = d(gen);
    }
  */

  std::fill(Cities.begin(), Cities.end(), 1.0);
  
}


