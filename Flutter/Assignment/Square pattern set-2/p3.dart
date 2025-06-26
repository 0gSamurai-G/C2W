import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	for(int i=1;i<=row;i++){
		int x=1;
		for(int j=1;j<=row;j++){
			if(j==(row-i+1)){
				stdout.write("*\t");
				x++;
			}else{
				stdout.write("${x}\t");
				x++;
			}
		}
		print("");
	}
}
