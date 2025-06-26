import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	for(int i=1;i<=row;i++){
		int x=i;
		for(int j=1;j<=i;j++){
			if(i%2!=0){
				stdout.write("${j}\t");
			}else{
				stdout.write("${x}\t");
				x--;
			}
		}
		print("");
	}
}
