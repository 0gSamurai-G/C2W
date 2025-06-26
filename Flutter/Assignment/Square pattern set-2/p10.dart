import "dart:io";
void main(){
	print("Enter the no. of rows:");
	int? row=int.parse(stdin.readLineSync()!);
	int x=1;
	for(int i=0;i<row;i++){
		int z=row-i;
		int y=z;
		for(int j=0;j<=i;j++){
			if(j==0){
				stdout.write("${x}\t");
			}else{
				stdout.write("${x-z}\t");
				z=z+(++y);
			}	
		}
		x=x+row-i;
		print("");
	}
}
