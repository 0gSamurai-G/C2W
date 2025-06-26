import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	int x=1;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			if((j+i)%2==0){
				stdout.write("*\t");
			}else{
				stdout.write("${x}\t");
				x++;
			}
		}
		print("");
	}
}
