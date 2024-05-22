window.onload = function () {
    main()
}


function main() {
    text = document.getElementById("textArea")

    text.addEventListener("focus", () => {
        text.style.backgroundColor = "rgba(204, 134, 3, .6)"
    })

    text.addEventListener("blur", () => {
        text.style.backgroundColor = ""
    })
}