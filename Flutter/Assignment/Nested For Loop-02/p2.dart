import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	int x=size*size;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){

			stdout.write("$x\t");
			x--;
		}
		stdout.write("\n");
	}
}
