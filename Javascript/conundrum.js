var cipher = "SECRET";
var name = "per";

var matches = 0;

for (var i = 0; i < cipher.length; i++) {

	if (cipher[i].toLowerCase() == name[i % name.length].toLowerCase()) {
		matches++;
	}

}

console.log("It takes " + (cipher.length - matches) + " days");