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