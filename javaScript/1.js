function changeText(){
    let fpara = document.getElementById('fpara');
    fpara.textContent = "hello aman"
}

let fpara = document.getElementById('fpara');
fpara.addEventListener('click' , changeText);   