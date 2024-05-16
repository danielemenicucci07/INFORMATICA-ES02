window.onload = function () {
    main()
}


function main() {
    text = document.getElementById("text")

    text.addEventListener("click", () => {
        text.hidden = true
    }
)}