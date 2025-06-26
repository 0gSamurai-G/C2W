import "dart:io";
void main(){
	Map<String,int> user = {"Alice":85,"Bob":78,"Charlie":92};

	bool matched=false;
	print("Enter name:");
	String? newName = stdin.readLineSync()!;
	for(var name in user.keys){
		if(newName == name){
			print("Enter the marks of the student:");
			user[name]=int.parse(stdin.readLineSync()!);
			matched=true;
			break;
		}
	}
	if(matched==false){
		print("Enter the marks for the new entry ${newName}:");
		user[newName]=int.parse(stdin.readLineSync()!);
		print("Updated list: ${user}");
	}else{
		print("Updated marks list: ${user}");
	}
	
}
