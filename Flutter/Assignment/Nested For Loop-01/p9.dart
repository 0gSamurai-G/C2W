import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	for(int i=1;i<=size;i++){
		for(int j=0;j<size;j++){

			stdout.write("${i+j}\t");
		}
		stdout.write("\n");
	}
}
