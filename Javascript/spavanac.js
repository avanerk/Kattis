var input = "00 00";

var hours = parseInt(input.split(" ")[0]);
var mins = parseInt(input.split(" ")[1]);

var answer = "";

if (mins - 45 < 0) {
	if (hours - 1 == - 1) {
		answer += "23 ";
	} else {
		answer += hours - 1 + " ";
	}
} else {
	answer += hours + " ";	
}

if (mins - 45 < 0) {
	answer += 60 - (Math.abs((mins - 45)));
} else {
	answer += mins - 45;
}

console.log(answer);