window.onload = function () {
    main()
}


function main() {
    text = document.getElementById("textArea")

    text.addEventListener("focus", () => {
        text.style.backgroundColor = "rgba(220, 125, 0, .5)"
    })

    text.addEventListener("blur", () => {
        text.style.backgroundColor = ""
    })
}