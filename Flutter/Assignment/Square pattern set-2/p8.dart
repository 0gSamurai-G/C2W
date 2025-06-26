import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	int y=1;
	for(int i=1;i<=row;i++){
		int x=1;
		for(int j=1;j<=y;j++){
			if(j%2==0){
				stdout.write("*\t");
			}else{
				stdout.write("${x}\t");
				x++;
			}
		}
		y+=2;
		print("");
	}
}
