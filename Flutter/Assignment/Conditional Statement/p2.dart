import "Dart:io";
void main(){
	int x;
	print("Enter a number:");
	x=int.parse(stdin.readLineSync()!);
	if(x>10){
		print("$x is greater than 10");
	}else if(x<10){
		print("$x is less than 10");
	}else{
		print("$x is equal to 10");
	}
}
