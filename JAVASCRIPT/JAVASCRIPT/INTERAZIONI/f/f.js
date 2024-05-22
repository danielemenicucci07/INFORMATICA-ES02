window.onload = function () {
    setPage()
}

function setPage() {

    setInputField()
    setPannello()

}


function setInputField() {
    password = document.getElementById("password")
    password2 = document.getElementById("ripetiPassword")

    errText = document.createElement("h4")
    errText.id = "errText"
    errText.hidden = true
    errText.style.color = "red"
    errText.innerHTML = "Password diverse tra di loro"
    document.body.appendChild(errText)

    pannelloControllo = document.getElementById("pannelloControllo")
    

    password2.addEventListener("change", () => {

        if (password.value !== password2.value) {
            errText.hidden = false// non lo nasconde
            pannelloControllo.hidden = true//lo nasconde
        }

        else if (!controllaPassword()) {// se non rispetta i parametri esce il quadrato

            errText.hidden = true
            pannelloControllo.hidden = false

        }
        else {

            errText.hidden = true
            pannelloControllo.hidden = true

        }
    })
    
}

function controllaPassword() {
    text = document.getElementById("password").value
    
    const myRegex = /^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[!@#$%&_\-+?/]).{5,}$/;//controllare che ci siano i parametri
    const result = myRegex.test(text)// 0 se non corrisponde e 1 se corrisponde
    return result
    
}

function setPannello() {
    pannelloControllo = document.createElement("div")
    pannelloControllo.id = "pannelloControllo"
    pannelloControllo.hidden = true

    /*styles
    width: 1000px;
    height: auto;
    padding: 20px;
    margin: 50px auto;
    border: 3px solid black;
    border - radius: 10px;
    font - size: 16px;
    font - weight: bold;
    background - color: rgba(255, 0, 0, .5);*/
    pannelloControllo.style.width = "1000px"
    pannelloControllo.style.height = "auto"
    pannelloControllo.style.padding = "20px"
    pannelloControllo.style.margin = "50px auto"
    pannelloControllo.style.border = "3px solid black"
    pannelloControllo.style.borderRadius = "10px"
    pannelloControllo.style.fontSize = "16px"
    pannelloControllo.style.fontWeight = "bold"
    pannelloControllo.style.backgroundColor = "rgba(255, 0, 0,.5)"



    //crea lista
    listaControllo = document.createElement("ul")


    requisitiPassword = [
        "La password deve essere di almeno 5 caratteri",
        "La password deve contenere almeno un numero",
        "La password deve contenere almeno un carattere speciale",
        "La password deve contenere almeno un carattere maiuscolo",
        "La password deve contenere almeno un carattere minuscolo"
    ]


    for (i of requisitiPassword) {

        elemento = document.createElement("li")// tag html che rappresenta ogni frase
        elemento.innerHTML = i// scorre le frasi
        elemento.style.textAlign = "left"//metti a sinistra
        listaControllo.appendChild(elemento)//aggiunge elemento alla lista
    }

    pannelloControllo.appendChild(listaControllo)

    document.body.appendChild(pannelloControllo)
}