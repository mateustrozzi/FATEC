#!/usr/bin/env python3
import math

def engrenagem_vetorizada(num_dentes, raio_externo, raio_interno, nome_arquivo="engrenagem_final.svg"):
    pontos = []

    # Ângulo total que cada dente ocupa no círculo
    angulo_por_dente = (2 * math.pi) / num_dentes

    # DISTRIBUIÇÃO PERFEITAMENTE SIMÉTRICA (25% para cada etapa):
    # Passo 1 (0.00 a 0.25): Sobe até o topo
    # Passo 2 (0.25 a 0.50): Caminha pelo topo plano
    # Passo 3 (0.50 to 0.75): Desce até a base
    # Passo 4 (0.75 to 1.00): Caminha pelo vão plano (completa o ciclo no próximo dente)
    p1_frac = 0.00   # Início da subida
    p2_frac = 0.25   # Chegada no topo (quina superior esquerda)
    p3_frac = 0.50   # Fim do topo (quina superior direita)
    p4_frac = 0.75   # Fim da descida (chegada na base)

    for i in range(num_dentes):
        # Ângulo de partida do bloco do dente atual
        inicio_bloco = i * angulo_por_dente

        # Ponto 1: Base esquerda (Início da subida do dente)
        a1 = inicio_bloco + (angulo_por_dente * p1_frac)
        x1 = 200 + raio_interno * math.cos(a1)
        y1 = 200 + raio_interno * math.sin(a1)
        pontos.append(f"{x1:.4f},{y1:.4f}")

        # Ponto 2: Quina Superior Esquerda (Topo do dente)
        a2 = inicio_bloco + (angulo_por_dente * p2_frac)
        x2 = 200 + raio_externo * math.cos(a2)
        y2 = 200 + raio_externo * math.sin(a2)
        pontos.append(f"{x2:.4f},{y2:.4f}")

        # Ponto 3: Quina Superior Direita (Topo do dente)
        a3 = inicio_bloco + (angulo_por_dente * p3_frac)
        x3 = 200 + raio_externo * math.cos(a3)
        y3 = 200 + raio_externo * math.sin(a3)
        pontos.append(f"{x3:.4f},{y3:.4f}")

        # Ponto 4: Base direita (Final da descida do dente)
        a4 = inicio_bloco + (angulo_por_dente * p4_frac)
        x4 = 200 + raio_interno * math.cos(a4)
        y4 = 200 + raio_interno * math.sin(a4)
        pontos.append(f"{x4:.4f},{y4:.4f}")

    caminho_dentes = "M " + " L ".join(pontos) + " Z"

    # SVG com viewBox quadrado perfeito e centralizado
    svg_conteudo = f"""<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 400 400" width="400" height="400">
  <path d="{caminho_dentes}" fill="#24292e" stroke="#24292e" stroke-width="1" stroke-linejoin="miter" />
</svg>"""

    with open(nome_arquivo, "w") as f:
        f.write(svg_conteudo)
    print(f"🚀 Geometria gerada com sucesso em: '{nome_arquivo}'")

# Parâmetros mantidos
engrenagem_vetorizada(
    num_dentes=12,
    raio_externo=160,
    raio_interno=125
)
