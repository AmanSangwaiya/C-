document.addEventListener("DOMContentLoaded" , function(){
    const searchButton = document.getElementById("search-btn");
    const usernameInput = document.getElementById("user-input");
    const statsContainer = document.querySelector(".stats-container");
    const easyprogressCircle = document.querySelector(".easy-progress");
    const mediumprogressCircle = document.querySelector(".medium-progress");
    const hardprogressCircle = document.querySelector(".hard-progress");
    const easyLabel = document.getElementById("easy-label");
    const mediumLabel = document.getElementById("medium-label");
    const hardLabel = document.getElementById("hard-label");
    const cardsContainer = document.querySelector(".stats-cards");



    // return true or false based on regaxif username

    function validateUsername (username){
    if(username.trim() === ""){
        alert("username should not be empty ");
        return false;
    }

    const regax = ^[a-zA-Z0-9](?!.*[_-]{2})[a-zA-Z0-9_-]{1,14}[a-zA-Z0-9]/$ ;


    const isMatching =
}

    searchButton.addEventListener('click' , function(){
        const username = usernameInput.value;
        console.log("logging username: " , username);
    })

})