import "Dart:io";
void main(){
	
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	for(int i=1;i<=size;i++){
		int x=0;
		for(int j=0;j<size;j++){

			stdout.write("${i+x}\t");
			x+=2;
		}
		stdout.write("\n");
	}
}
