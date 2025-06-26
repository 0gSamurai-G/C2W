import "Dart:io";
void main(){
	print("Enter the size of the list:");
	int? size=int.parse(stdin.readLineSync()!);
	List<String> num=[];
	for(int i=0;i<size;i++){
		String x=stdin.readLineSync()!;
		num.add(x);
	}
	print("Enter a city to search:");
	String city=stdin.readLineSync()!;
	bool flag=false;
	for(int i=0;i<size;i++){
		if(num[i]==city){
			print("city removed");
			num.removeAt(i);
			flag=true;
			break;
		}
	}
	
	for(int i=0;i<(num.length);i++){
		print(num[i]);
	}
	
}
