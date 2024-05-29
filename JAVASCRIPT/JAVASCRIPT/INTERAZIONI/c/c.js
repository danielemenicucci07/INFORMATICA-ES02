window.onload = function () {
    main()
}


function main() {
    text = document.getElementById("textArea")

    text.addEventListener("focus", () => {// se selezioni
        text.style.backgroundColor = "rgba(204, 134, 3, .6)"
    })

    text.addEventListener("blur", () => {// se deselezioni
        text.style.backgroundColor = ""
    })
}