// Entetes //---------------------------------------------------------------------------------------
#include <iostream>
#include <complexe.hpp>

// Fonction principale //---------------------------------------------------------------------------
int main(void) {
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c1(1,2);" << std::endl;
 complexe_t c1(1,2); //Constructeur ad hoc
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c2(3,4);" << std::endl;
 complexe_t c2(3,4); //Constructeur ad hoc
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c3(c1);" << std::endl;
 complexe_t c3(c1); // Constructeur copie
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c4(std::move(c2));" << std::endl;
 complexe_t c4(std::move(c2)); // Constructeur mouvement
 complexe_t::stats();

 std::cout << std::endl << "c3=c1;" << std::endl;
 c3=c1; // Affectation copie
 complexe_t::stats();

 std::cout << std::endl << "c4=complexe_t(5,6);" << std::endl;
 c4=complexe_t(5,6); // Constructeur had oc puis Affectation par mouvement
 complexe_t::stats();

 return 0;
}

// Fin //-------------------------------------------------------------------------------------------
