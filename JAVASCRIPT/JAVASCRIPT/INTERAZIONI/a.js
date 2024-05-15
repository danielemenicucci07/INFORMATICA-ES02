window.onload = function () {
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