const track = document.querySelector('.track');
const slides = document.querySelectorAll('.slide');
const nextBtn = document.querySelector('.next');
const prevBtn = document.querySelector('.prev');
const bullets = document.querySelectorAll('.bullet');

let counter = 1; // Começamos no 1 porque o 0 é o clone do último
const size = 100;
let textAnimationTimeout; // Nova variável para controlar o tempo do texto

// Inicializa a posição sem animação
track.style.transform = `translateX(${-size * counter}%)`;
updateActiveSlide(false); // Garante que o primeiro slide comece ativo

function moveNext() {
    if (counter >= slides.length - 1) return;
    counter++;
    track.style.transition = "transform 0.6s ease-in-out";
    track.style.transform = `translateX(${-size * counter}%)`;
    updateActiveSlide(true); // Passamos 'true' porque a faixa começou a se mover
}

function movePrev() {
    if (counter <= 0) return;
    counter--;
    track.style.transition = "transform 0.6s ease-in-out";
    track.style.transform = `translateX(${-size * counter}%)`;
    updateActiveSlide(true); // Passamos 'true' porque a faixa começou a se mover
}

// O pulo do gato: quando a transição termina, verificamos se estamos em um clone
track.addEventListener('transitionend', () => {
    if (slides[counter].classList.contains('clone')) {
        track.style.transition = "none"; // Remove animação para teletransporte
        
        if (slides[counter].innerHTML.includes("Slide 01")) {
            counter = 1; // Volta para o slide 1 real
        } else {
            counter = slides.length - 2; // Vai para o slide real anterior ao clone
        }
        track.style.transform = `translateX(${-size * counter}%)`;

        // Força o navegador a computar o teletransporte antes de mexer nas classes
        track.offsetHeight; 
        
        // Ativa o texto no slide real IMEDIATAMENTE após o pulo, sem delay
        updateActiveSlide(false); 
    }
});

function updateActiveSlide(isMoving) {
    // Limpa o timer anterior para não encavalar animações se o usuário clicar rápido
    clearTimeout(textAnimationTimeout);

    // Lógica para bullets (0 a 4) - Mantida idêntica à sua
    let bulletIndex = counter - 1;
    if (counter === 0) bulletIndex = 4;
    if (counter === slides.length - 1) bulletIndex = 0;

    bullets.forEach((b, i) => b.classList.toggle('active', i === bulletIndex));
    
    // Removemos o 'active' de todos para o texto sumir enquanto a faixa corre
    slides.forEach(s => s.classList.remove('active'));

    if (isMoving) {
        // Se está se movendo, esperamos os 0.6s (600ms) da faixa parar para só então
        // disparar a subida do texto. Isso elimina o engasgo de renderização!
        textAnimationTimeout = setTimeout(() => {
            if (slides[counter]) slides[counter].classList.add('active');
        }, 600); 
    } else {
        // Se foi o teletransporte invisível, bota o texto ativo na hora
        if (slides[counter]) slides[counter].classList.add('active');
    }
}

nextBtn.addEventListener('click', moveNext);
prevBtn.addEventListener('click', movePrev);