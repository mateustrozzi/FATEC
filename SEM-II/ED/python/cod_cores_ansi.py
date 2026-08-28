print("--- Códigos ANSI para copiar e usar ---")

for i in range(256):
    # O código exato que você usará na string
    codigo_texto = f"\\033[38;5;{i}m"
    
    # Aplica a cor real apenas para a exibição no terminal
    print(f"\033[38;5;{i}m{codigo_texto:<14} -> Texto nesta cor\033[0m")
