#include <iostream>
#include <locale>

int main() {
    // Configurar la localizaci�n para usar UTF-8
    std::setlocale(LC_ALL, "en_US.UTF-8");

    // Imprimir los s�mbolos de cartas usando c�digos Unicode
    std::wcout.imbue(std::locale("en_US.UTF-8"));
    std::wcout << "S�mbolos de cartas: \u2666 \u2665 \u2663 \u2660" << std::endl;

    return 0;
}
