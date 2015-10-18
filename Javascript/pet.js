var contestants = [[],[],[],[],[]];

for (var i = 0; i < 5; i++) {

	var nums = readline().split(' ');

	for (var n = 0; n < nums.length; n++) {

		contestants[i][n] = nums[n];
	}

}

var contestant;
var amount = 0;

for (var i = 1; i <= contestants.length; i++) {

	var temp_sum = 0;

	for (var n = 0; n < contestants[i - 1].length; n++) {		
		temp_sum += parseInt(contestants[i - 1][n]);
	}

	if (temp_sum > amount) {
		amount = temp_sum;
		contestant = i;
	}
	
}

print(contestant + " "+ amount);