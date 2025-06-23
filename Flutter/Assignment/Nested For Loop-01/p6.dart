import "Dart:io";
void main(){
	int x=1;
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){

			stdout.write("$x\t");
			x+=2;
		}
		stdout.write("\n");
	}
}
