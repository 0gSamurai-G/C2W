import "Dart:io";
void main(){
	int? x;
	print("Enter a number:");
	x = int.parse(stdin.readLineSync()!);
	if(x%2==0){
		print("$x is an even number");
	}else{
		print("$x is an odd number");
	}
}
