import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){

			if(i%2==0){
				stdout.write("${j+1}\t");
			}else{
				if(j==0){
					stdout.write("${size}\t");
				}else if(j==(size-1)){
					stdout.write("1\t");
				}else{
					stdout.write("${j+1}\t");
				}
			}
		}
		stdout.write("\n");
	}
}
