import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	for(int i=row;i>=1;i--){
		int x=i;
		for(int j=1;j<=i;j++){
			stdout.write("${x}\t");
			x=(x+row-j);
		}
		print("");
	}
}
