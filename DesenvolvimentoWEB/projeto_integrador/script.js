/*const track = document.querySelector('.track');
const slides = Array.from(document.querySelectorAll('.slide'));
const nextBtn = document.querySelector('.next');
const prevBtn = document.querySelector('.prev');
const bullets = document.querySelectorAll('.bullet');

let currentIndex = 0;

function updateCarousel(index) {
    // Move o track
    track.style(transform) = `translateX(-${index * 20}%)`;
    
    // Atualiza classes active para disparar animações CSS
    slides.forEach((slide, i) => {
        slide.classList.toggle('active', i === index);
        bullets[i].classList.toggle('active', i === index);
    });
}

nextBtn.addEventListener('click', () => {
    currentIndex = (currentIndex + 1) % slides.length;
    updateCarousel(currentIndex);
});

prevBtn.addEventListener('click', () => {
    currentIndex = (currentIndex - 1 + slides.length) % slides.length;
    updateCarousel(currentIndex);
});

// Inicializa o primeiro slide
updateCarousel(0);*/
/*
const track = document.querySelector('.track');
const slides = Array.from(document.querySelectorAll('.slide'));
const nextBtn = document.querySelector('.next');
const prevBtn = document.querySelector('.prev');
const bullets = document.querySelectorAll('.bullet');

let currentIndex = 0;

function updateCarousel(index) {
    // Cálculo dinâmico: 100 dividido pelo número de slides
    const slideWidth = 100 / slides.length;
    
    // CORREÇÃO AQUI: .style.transform (com ponto e sem parênteses)
    track.style.transform = `translateX(-${index * slideWidth}%)`;
    
    // Atualiza as classes para disparar as animações de CSS (texto e overlay)
    slides.forEach((slide, i) => {
        slide.classList.toggle('active', i === index);
    });

    // Atualiza os indicadores (bullets)
    bullets.forEach((bullet, i) => {
        bullet.classList.toggle('active', i === index);
    });
}

// Eventos de clique
nextBtn.addEventListener('click', () => {
    currentIndex = (currentIndex + 1) % slides.length;
    updateCarousel(currentIndex);
});

prevBtn.addEventListener('click', () => {
    currentIndex = (currentIndex - 1 + slides.length) % slides.length;
    updateCarousel(currentIndex);
});

// Inicializa o estado do primeiro slide ao carregar
updateCarousel(0);
*/

const track = document.querySelector('.track');
const slides = document.querySelectorAll('.slide');
const nextBtn = document.querySelector('.next');
const prevBtn = document.querySelector('.prev');
const bullets = document.querySelectorAll('.bullet');

let counter = 1; // Começamos no 1 porque o 0 é o clone do último
const size = 100;

// Inicializa a posição sem animação
track.style.transform = `translateX(${-size * counter}%)`;

function moveNext() {
    if (counter >= slides.length - 1) return;
    counter++;
    track.style.transition = "transform 0.6s ease-in-out";
    track.style.transform = `translateX(${-size * counter}%)`;
    updateActiveSlide();
}

function movePrev() {
    if (counter <= 0) return;
    counter--;
    track.style.transition = "transform 0.6s ease-in-out";
    track.style.transform = `translateX(${-size * counter}%)`;
    updateActiveSlide();
}

// O pulo do gato: quando a transição termina, verificamos se estamos em um clone
track.addEventListener('transitionend', () => {
    if (slides[counter].classList.contains('clone')) {
        track.style.transition = "none"; // Remove animação para teletransporte
        if (slides[counter].innerHTML.includes("Slide 01")) {
            counter = 1; // Volta para o slide 1 real
        } else {
            counter = slides.length - 2; // Vai para o slide 5 real
        }
        track.style.transform = `translateX(${-size * counter}%)`;
    }
});

function updateActiveSlide() {
    // Lógica para bullets (0 a 4)
    let bulletIndex = counter - 1;
    if (counter === 0) bulletIndex = 4;
    if (counter === slides.length - 1) bulletIndex = 0;

    bullets.forEach((b, i) => b.classList.toggle('active', i === bulletIndex));
    
    // Ativa animação de texto apenas no slide atual
    slides.forEach((s, i) => s.classList.toggle('active', i === counter));
}

nextBtn.addEventListener('click', moveNext);
prevBtn.addEventListener('click', movePrev);