import "dart:io";

void main(){
	print("Enter The Number Of Row:");
	int row = int.parse(stdin.readLineSync()!);
	double k=(row*(row+1))/2;
	int k1=k.toInt();
	int k2=1;
	for(int i = 1 ; i <= row ; i++){
		for(int j = 1 ; j <= row ; j++){
			if((i+j)%2==0){
				stdout.write("${k1}\t");
				k1--;
			}else{
				stdout.write("${k2}\t");
				k2++;
			}
		}
		print("");
	}

}
