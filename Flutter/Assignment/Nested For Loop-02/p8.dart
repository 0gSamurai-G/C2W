import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	int x=1;
	for(int i=1;i<=size;i++){
		for(int j=1;j<=size;j++){

			if(j==size){
				x++;
				stdout.write("${x}\t");
			}else{
				stdout.write("${x}\t");
			}
		}
		stdout.write("\n");
	}
}
