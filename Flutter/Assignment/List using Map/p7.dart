import "dart:io";
void main(){
	List<Map> employees=[];
	
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
	print("Employee data: ${employees}");
	
}
