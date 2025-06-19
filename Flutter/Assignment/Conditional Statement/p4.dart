import "Dart:io";
void main(){
	int? x;
	print("Enter a number:");
	x=int.parse(stdin.readLineSync()!);
	if(x>=0){
		print("$x is a positive number");
	}else{
		print("$x is a negative number");
	}
}
