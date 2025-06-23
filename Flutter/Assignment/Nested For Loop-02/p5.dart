import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	int x=1;
	for(int i=1;i<=size;i++){
		for(int j=0;j<size;j++){

			stdout.write("${x}\t");
			x+=2;
		}
		stdout.write("\n");
		x=(i*2)+1;
	}
}
