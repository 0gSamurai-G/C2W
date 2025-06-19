import "Dart:io";
void main(){
	int? x;
	print("Enter a number:");
	x=int.parse(stdin.readLineSync()!);
	switch(x){
		case 0:
			print("Zero");
			break;
		case 1:
			print("One");
			break;
		case 2:
			print("Two");
			break;
		case 3:
			print("Three");
			break;
		case 4:
			print("Four");
			break;
		case 5:
			print("Five");
			break;
		default:
			print("$x is greater than 5");
	}
}
