
import "dart:io";

void main(){
	print("Enter The Number Of Row:");
	int row = int.parse(stdin.readLineSync()!);
	int x=1;
	for(int i = 1 ; i <= row ; i++){
		//int x = 1;
		for(int j = 1 ; j <= row ; j++){
			if((i+j)%2==1){
				stdout.write("${x}\t");
				x++;
			}else{
				stdout.write("*\t");
			}
		}
		print("");
	}

}
