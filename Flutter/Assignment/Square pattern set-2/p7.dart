import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	int x=1;
	for(int i=1;i<=row;i++){
		int y=1;
		for(int j=1;j<=x;j++){
			stdout.write("${y}\t");
			y++;
		}
		x+=2;
		print("");
	}
}
