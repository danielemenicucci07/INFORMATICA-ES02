// Prompt the user for the coefficients m and c
const m = prompt("Enter the coefficient m of the line:");
const c = prompt("Enter the constant c of the line:");

// Calculate the coordinates of the points with x = -1 and x = 10
const y1 = m * (-1) + c;
const y2 = m * 10 + c;

// Log the coordinates of the points to the console
console.log(`The coordinates of the point with x = -1 are (${-1}, ${y1}).`);
console.log(`The coordinates of the point with x = 10 are (${10}, ${y2}).`);

// calcolo intersezioni
const interesezioneassex = -c / m;
const intersezioneassey = 0;

// Log the points of intersection to the console
console.log(`The point of intersection with the x-axis is (${interesezioneassex}, ${intersezioneassey}).`);
console.log(`The point of intersection with the y-axis is (${0}, ${intersezioneassey}).`);