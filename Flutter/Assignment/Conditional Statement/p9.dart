import "Dart:io";
void main(){
	int? x;
	print("Enter a number:");
	x=int.parse(stdin.readLineSync()!);
	switch(x){
		case 1:
			print("pay 2000");
		case 2:
			print("pay 3000");
		case 3:
			print("pay 7000");
		default:
			print("pay 2500");
	}
}
