import "dart:io";
void main(){
	Map<String,dynamic> user = {};
	print("Enter name:");
	user["name"]= stdin.readLineSync()!;
	print("Enter college");
	user["college"]=stdin.readLineSync()!;
	print("Address:");
	user["address"]=stdin.readLineSync()!;
	print("${user}");
	print("\nEnter new address:");
	user["address"]=stdin.readLineSync()!;
	print("updated details: ${user}");
}
