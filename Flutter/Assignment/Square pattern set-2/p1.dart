import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if(j<=i){
				stdout.write("${i}\t");
			}else{
				stdout.write("*\t");
			}
		}
		print("");
	}
}
