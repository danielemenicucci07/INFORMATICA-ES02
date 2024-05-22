window.onload = function () {// aspetti che si carica tuttta la pag html e poi  parte la funzione
    main()
}

function main() {
    button = document.getElementById('bottone')

    button.addEventListener("mouseover", () => {//quando ci sono sopra 
        button.style.backgroundColor = "red";//diventa rosso
    })

    button.addEventListener("mouseout", () => {// quando vado via
        button.style.backgroundColor = "";//torna come prima
    })
}