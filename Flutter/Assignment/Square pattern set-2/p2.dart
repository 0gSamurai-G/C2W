import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	for(int i=1;i<=row;i++){
		int x=row-i+1;
		for(int j=1;j<=row;j++){
			if(i>=2 && j<i){
				stdout.write("*\t");
			}else{
				stdout.write("${x}\t");
				x--;	
			}
		}
		print("");
	}
}
