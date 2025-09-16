
// function add(...a) {
//     let a = [12, 45, 67, 8];
//     let sum = 0;
//     for (let i = 0; i < a.length; i++) {
//         sum += a[i];
//     }
//     console.log("Addition of " + a.length + " numbers = " + sum);
// }
// add(...a);
// add();

function mul() {
    let count = parseInt(prompt("Enter the number of elements to multiply:"));
    let product = 1;

    for (let i = 0; i < count; i++) {
        let num = parseFloat(prompt("Enter number " + (i + 1) + ":"));
        product *= num;
    }

    console.log("Multiplication of " + count + " numbers is " + product);
}

mul();
