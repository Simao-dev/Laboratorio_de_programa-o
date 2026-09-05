const pai = document.getElementById('slide');
const filho = document.querySelectorAll("#slide img")

let index = 0;

function slide() {
    index++;
    if (index > filho.length - 1) {
        index = 0;
    }
    pai.style.transform = `translateX(${-index * 500}px)`;
}

setInterval(slide, 3000);