var seq1 = "AAAAA";
var seq2 = "AGCGAA";

var num1 = { 'A' : 0, 'G' : 0, 'C' : 0, 'T' : 0};
var num2 = { 'A' : 0, 'G' : 0, 'C' : 0, 'T' : 0};

var hi = 0;
var l = "";

for (var i = 0; i < seq1.length; i++)
	if (seq1[i] in num1)
		num1[seq1[i]]++;

for (var i = 0; i < seq2.length; i++)
	if (seq2[i] in num2)
		num2[seq2[i]]++;

for (var n in num1) {

	if (num1[n] !== 0)
		hi += Math.abs(num1[n] - num2[n]);

}

hi += Math.abs(seq1.length - seq2.length);


console.log(num1);
console.log(num2);
console.log(hi);