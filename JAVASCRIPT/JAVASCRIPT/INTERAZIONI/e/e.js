window.onload = function () {
    main()
}


function main() {
    password = document.getElementById("password")
    password2 = document.getElementById("ripetiPassword")

    password2.addEventListener("change", () => {
        if (password.value !== password2.value) {// se le due password sono diverse 
            alert("Password diverse tra di loro")// stampa questa frase
        }
    })
    
}