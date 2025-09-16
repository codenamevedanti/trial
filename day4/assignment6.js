function addition(n1, n2, callback) {
    let result = Number(n1) + Number(n2);
    callback(result);
}

function multiplication(n1, n2, callback) {
    let result = Number(n1) * Number(n2);
    callback(result);
}

function subtraction(n1, n2, callback) {
    let result = Number(n1) - Number(n2);
    callback(result);
}

function result(n1, n2, operationCallback) {
    operationCallback(n1, n2, display);
}

function display(result) {
    alert("Result: " + result);
}

// Get user input
let n1 = prompt("Enter the first number:");
let n2 = prompt("Enter the second number:");
let operator = prompt("Enter the operation (addition, subtraction, multiplication):").trim().toLowerCase();

// Choose operation
switch (operator) {
    case "addition":
    case "+":
        result(n1, n2, addition);
        break;

    case "subtraction":
    case "-":
        result(n1, n2, subtraction);
        break;

    case "multiplication":
    case "*":
        result(n1, n2, multiplication);
        break;

    default:
        alert("Invalid operation selected.");
}
