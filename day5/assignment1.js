function Time() {
    const now = new Date();
    const timeString = now.toLocaleTimeString();
    document.getElementById("currentTime").textContent = "The Current Time is: " + timeString;
}

setInterval(Time, 1000);
