import "dart:io";

void main(){
	print("Enter The Number Of Row:");
	int row = int.parse(stdin.readLineSync()!);
	for(int i = 1 ; i <= row ; i++){
		for(int j = 1 ; j <= row ; j++){
			if(i >= j){
				stdout.write("${i}\t");
			}else{
				stdout.write("${j}\t");
			}
		}
		print("");
	}

}
