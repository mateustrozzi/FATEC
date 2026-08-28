import sys

print("--- Tabela de 256 Cores (Foreground) ---")

for i in range(256):
    # Formata o código ANSI: \033[38;5;[NÚMERO]m
    # O end="" serve para não pular linha a cada número
    print(f"\033[38;5;{i}m{i:<4}\033[0m", end="")
    
    # Quebra a linha a cada 16 cores para organizar em blocos
    if (i + 1) % 16 == 0:
        print()
