import "dart:io";
void main(){
	List<Map> employees=[];
	bool matched=false;
	print("Enter the no. of employees:");
	int? emp_count = int.parse(stdin.readLineSync()!);
	for(int i=0;i<emp_count;i++){
		print("Enter the employee id${i+1}:");
		int? id=int.parse(stdin.readLineSync()!);
		print("Enter the employee name${i+1}:");
		String? name=stdin.readLineSync()!;
		print("Enter the employee age${i+1}:");
		int? age=int.parse(stdin.readLineSync()!);
		print("Enter the employee salary${i+1}:");
		double? salary=double.parse(stdin.readLineSync()!);
		
		Map<String,dynamic> emp={
		"id":id,
		"name":name,
		"age":age,
		"salary":salary
		};
		employees.add(emp);
	}
	print("Enter a name of employee to search:");
	String? name=stdin.readLineSync()!;
	for(var emp in employees){
		if(emp["name"]==name){
			print("Employee data: ${emp}");
			matched=true;
			break;
		}
	}
	if(matched==false){
		print("Employee ot found!");
	}	
}
