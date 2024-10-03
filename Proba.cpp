#include <iostream>
#include <locale>

int main() {
    // Configurar la localización para usar UTF-8
    std::setlocale(LC_ALL, "en_US.UTF-8");

    // Imprimir los símbolos de cartas usando códigos Unicode
    std::wcout.imbue(std::locale("en_US.UTF-8"));
    std::wcout << "Símbolos de cartas: \u2666 \u2665 \u2663 \u2660" << std::endl;

    return 0;
}
