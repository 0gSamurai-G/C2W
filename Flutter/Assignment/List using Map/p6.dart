import "dart:io";
void main(){
	Map<String,int> user = {"Virat Kohli":18,"Rohit Sharma":45,"MS Dhoni":7,"Hardik Pandya":33};

	bool matched=false;
	print("Enter the name of player:");
	String? newName = stdin.readLineSync()!;
	for(var name in user.keys){
		if(newName == name){
			print("Jersey number: ${user[name]}");
			matched=true;
			break;
		}
	}
	if(matched==false){
		print("Player not found!");
	}
	
}
