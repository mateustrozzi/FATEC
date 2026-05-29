#!/usr/bin/env python3
import math

def engrenagem_vetorizada(num_dentes, raio_externo, raio_interno, nome_arquivo="engrenagem_final.svg"):
    pontos = []

    # Ângulo total que cada dente ocupa no círculo
    angulo_por_dente = (2 * math.pi) / num_dentes

    # Proporções para definir o formato do trapézio do dente:
    # 25% subindo o dente, 50% no topo plano, 25% descendo o dente.
    # Isso deixa o topo plano e o vão plano com larguras bem equilibradas.
    p1_frac = 0.05   # Início da subida (alinhamento da base)
    p2_frac = 0.25   # Chegada no topo (quina superior esquerda)
    p3_frac = 0.75   # Fim do topo (quina superior direita)
    p4_frac = 0.95   # Fim da descida (chegada na base)

    for i in range(num_dentes):
        # Ângulo de partida do bloco do dente atual
        inicio_bloco = i * angulo_por_dente

        # Ponto 1: Base esquerda (Antes de começar a subir o dente)
        a1 = inicio_bloco + (angulo_por_dente * p1_frac)
        x1 = 200 + raio_interno * math.cos(a1)
        y1 = 200 + raio_interno * math.sin(a1)
        pontos.append(f"{x1},{y1}")

        # Ponto 2: Quina Superior Esquerda (Topo do dente)
        a2 = inicio_bloco + (angulo_por_dente * p2_frac)
        x2 = 200 + raio_externo * math.cos(a2)
        y2 = 200 + raio_externo * math.sin(a2)
        pontos.append(f"{x2},{y2}")

        # Ponto 3: Quina Superior Direita (Topo do dente)
        a3 = inicio_bloco + (angulo_por_dente * p3_frac)
        x3 = 200 + raio_externo * math.cos(a3)
        y3 = 200 + raio_externo * math.sin(a3)
        pontos.append(f"{x3},{y3}")

        # Ponto 4: Base direita (Final da descida do dente)
        a4 = inicio_bloco + (angulo_por_dente * p4_frac)
        x4 = 200 + raio_interno * math.cos(a4)
        y4 = 200 + raio_interno * math.sin(a4)
        pontos.append(f"{x4},{y4}")

    caminho_dentes = "M " + " L ".join(pontos) + " Z"

    # Criação do SVG limpo com quinas vivas (miter) para preservar os ângulos
    svg_conteudo = f"""<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 400 400" width="400" height="400">
  <path d="{caminho_dentes}" fill="#24292e" stroke="#24292e" stroke-width="1" stroke-linejoin="miter" />
</svg>"""

    with open(nome_arquivo, "w") as f:
        f.write(svg_conteudo)
    print(f"🚀 Geometria gerada com sucesso em: '{nome_arquivo}'")

# =====================================================================
# PARÂMETROS AJUSTADOS PARA COMPATIBILIDADE COM O SEU VETOR:
# =====================================================================
engrenagem_vetorizada(
    num_dentes=12,       # Ajuste para o número total de dentes que deseja no círculo completo
    raio_externo=160,   # Distância do centro até a ponta de cima do dente
    raio_interno=125    # Distância do centro até a base de baixo do dente
)
