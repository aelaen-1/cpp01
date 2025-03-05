#include <iostream>
#include <string>

// la reference declaree "type&" nom, est un alias qui possede toutes
//les caracteristiques de l'objet auquel elle fait reference, c'est 
// exactement le meme objet (pas une copie) : meme adresse, meme valeur
// si je modifie la valeur de la reference, l'objet vise change aussi de valeur
// le "&" fait partie du nom du type, ne pas confondre avec l'adresse

// ex : int a = 10;
// int b = 42;
// int&ref = a; // on declare une reference sur a
// ref = b -> a = 42 desormais

// UTILITE : passage par reference pour modifier une valeur
//dans une autre fonction, permet de modifier sa valeur sans dereferencer
// evite le passage par copie qui prend des ressources 
// Par rapport au pointeur qui peut pointer sur une variable qui n'existe plus,
//  la reference n'existe plus si la variable est detruite(évite aussi d'oubler de free).
// Permet donc d'eviter les erreurs sur les pointeurs quand 
// on a la possibilite d'utiliser des references : a privilegier
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str; 

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringPTR: " << stringREF << std::endl;
    
    return (0);
}