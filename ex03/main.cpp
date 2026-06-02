#include "Fixed.hpp"
#include "Point.hpp"
void testBSP(void)
{
    std::cout << "\n=== TESTES DE GEOMETRIA BSP (EX03) ===" << std::endl;

    // Criar um triângulo clássico com vértices em (0,0), (10,0) e (5,10)
    Point const t_a(0.0f, 0.0f);
    Point const t_b(10.0f, 0.0f);
    Point const t_c(5.0f, 10.0f);

    // Caso 1: Ponto claramente dentro do triângulo
    Point const dentro(5.0f, 3.0f);
    std::cout << "Ponto (5, 3) dentro: " << (bsp(t_a, t_b, t_c, dentro) ? "TRUE" : "FALSE") 
              << " (Esperado: TRUE)" << std::endl;

    // Caso 2: Ponto claramente fora do triângulo
    Point const fora(12.0f, 5.0f);
    std::cout << "Ponto (12, 5) dentro: " << (bsp(t_a, t_b, t_c, fora) ? "TRUE" : "FALSE") 
              << " (Esperado: FALSE)" << std::endl;

    // Caso 3: Ponto exatamente em cima de uma aresta (borda) 
    Point const na_aresta(5.0f, 0.0f); // Linha da base entre (0,0) e (10,0)
    std::cout << "Ponto (5, 0) na aresta: " << (bsp(t_a, t_b, t_c, na_aresta) ? "TRUE" : "FALSE") 
              << " (Esperado: FALSE)" << std::endl;

    // Caso 4: Ponto exatamente em cima de um vértice 
    Point const no_vertice(0.0f, 0.0f); // Vértice A
    std::cout << "Ponto (0, 0) no vértice: " << (bsp(t_a, t_b, t_c, no_vertice) ? "TRUE" : "FALSE") 
              << " (Esperado: FALSE)" << std::endl;
}
int main( void ) {
    testBSP();
}