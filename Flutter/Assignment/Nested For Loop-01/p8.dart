import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	for(int i=4;i>0;i--){
		for(int j=0;j<size;j++){

			stdout.write("$i\t");
		}
		stdout.write("\n");
	}
}
