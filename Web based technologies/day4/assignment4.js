
function add(...a) {
    let a = [12, 45, 67, 8];
    let sum = 0;
    for (let i = 0; i < a.length; i++) {
        sum += a[i];
    }
    console.log("Addition of " + a.length + " numbers = " + sum);
}
add(...a);
add();

function mul(m1, m2) {
    let mul = m1 * m2;
    console.log("Multiplication of " + m1 + " and " + m2 + " is " + mul);
}
mul(2, 6);
