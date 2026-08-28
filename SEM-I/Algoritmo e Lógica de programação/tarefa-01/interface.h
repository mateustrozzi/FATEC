#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include <cstdlib> // chamadas de cls ou clear

// --- pegar o tamanho da tela ---
#ifdef _WIN32
    #include <windows.h>
    #include <clocale>
#else
    #include <sys/ioctl.h>
    #include <unistd.h>
#endif

// Função que retorna a largura atual do terminal
inline int larguraTerminal() {
    #ifdef _WIN32
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        return csbi.srWindow.Right - csbi.srWindow.Left + 1;
    #else
        struct winsize w;
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
        return w.ws_col;
    #endif
}

// texto centralizado
inline void center(std::string texto) {
    int largura = larguraTerminal();
    
    if (texto.length() >= largura) {
        std::cout << texto << std::endl;
        return;
    }
    
    int padding = (largura - texto.length()) / 2;
    std::cout << std::string(padding, ' ') << texto << std::endl;
}

inline int margem(std::string texto){
    int largura = larguraTerminal();
    int padding = (largura - texto.length()) / 2;
    return padding;
}

// Função para limpar a tela
inline void limparTela() {
    #ifdef _WIN32
        std::system("cls");
    #else
        std::system("clear");
    #endif
}

#endif // INTERFACE_H