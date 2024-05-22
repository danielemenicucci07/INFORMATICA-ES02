window.onload = function () {// aspetti che si carica tuttta la pag html e poi  parte la funzione
    main()
}

function main() {
    button = document.getElementById('bottone')

    button.addEventListener("mouseover", () => {
        button.style.backgroundColor = "red";
    })

    button.addEventListener("mouseout", () => {
        button.style.backgroundColor = "";
    })
}