import "Dart:io";
void main(){
	print("Enter the size:");
	int? size = int.parse(stdin.readLineSync()!);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){

			if(i%2==0){
				if(j%2==0){
					stdout.write("0\t");
				}else{
					stdout.write("1\t");
				}	
			}else{

				if(j%2==0){
					stdout.write("1\t");
				}else{
					stdout.write("0\t");
				}
			}
		}
		stdout.write("\n");
	}
}
