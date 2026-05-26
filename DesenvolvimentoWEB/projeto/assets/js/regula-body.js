window.addEventListener("DOMContentLoaded", () => {
    // Verifica se a largura da tela é de dispositivo móvel (ex: < 768px)
    if (window.innerWidth <= 768) {
        // Pega a altura total da página
        const alturaTotal = document.documentElement.scrollHeight - window.innerHeight;
        
        // Define o percentual de rolagem (50% = 0.5)
        const percentual = 0.08;
        
        // Calcula o valor em pixels
        const posicaoDesejada = alturaTotal * percentual;
        
        // Rola a tela para a posição calculada
        window.scrollTo({
            top: posicaoDesejada,
            behavior: 'smooth' // ou 'auto' para rolagem instantânea
        });
    }
});
