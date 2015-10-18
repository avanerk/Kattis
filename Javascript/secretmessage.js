var num = readline();

for (var i = 0; i < num; i++) {
	var message = readline();

	print(encrypt(message));
}


function encrypt(message) {

	var table = "";
	var cipher_text = "";
	var cipher = [];

	var inc = (Math.ceil(Math.sqrt(message.length)) - 1);

	var inc_stat = inc;
	var table_size = Math.pow(Math.ceil(Math.sqrt(message.length)), 2);

	for (var i = 0; i < table_size; i++) {

		if (i < message.length) {
			table += message[i];
		} else {
			table += "*";
		}
	}

	for (var n = 0; n < table_size; n++) {	

		if (inc_stat > table_size) {
			inc--;
			inc_stat = inc;
		}

		cipher[n] = table[inc_stat];

		inc_stat++;
		inc_stat += (Math.ceil(Math.sqrt(message.length)) - 1);	
	}

	for (var z = cipher.length - 1; z >= 0; z--) {
		if (cipher[z] != "*")
			cipher_text+= cipher[z];
	}
	
	return cipher_text;

}