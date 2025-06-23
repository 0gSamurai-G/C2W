import "Dart:io";
void main(){
	
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	String str=String.fromCharCode(64+size);
	for(int i=1;i<=size;i++){
		for(int j=1;j<=size;j++){

			stdout.write("${j}${str}\t");
		}
		stdout.write("\n");
	}
}
