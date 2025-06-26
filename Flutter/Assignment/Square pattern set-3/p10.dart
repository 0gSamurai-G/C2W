import "dart:io";

void main(){
	print("Enter The Number Of Row:");
	int row = int.parse(stdin.readLineSync()!);
	int x = 1;
	int y = 1;
	for(int i = 1 ; i <= row ; i++){
		for(int j = 1 ; j <= row ; j++){
			stdout.write("${x}\t");
			y++;
			x=x*y;
		}
		print("");
	}

}
