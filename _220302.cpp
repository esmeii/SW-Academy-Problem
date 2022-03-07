#include <stdio.h>
#include <string>

class Employee {

  std::string name;
  int age;
  std::string position; //사원의 직책
  int rank;  //직책 순위
  
  public:
    Employee(std::string name, int age, std::string position, int rank) :
      name(name), age(age), position(position), rank(rank) {}
    Employee(const Employee& employee){ //복사 생성자
      name = employee.name;
      age = employee.age;
      position = employee.position;
      rank = employee.rank;
    }
    Employee(){} //디폴트 생성자
    
    void print_info(){
      std::cout << name << "(" <<position<<","<<age<<") ==>"
                << calculate_pay()<<"만원" <<std::endl;
    }
    int calculate_pay(){return 200 + rank * 50;}
 };
 class EmployeeList {
  int alloc_employee;  //할당된 크기를 알려주느 배열
  int current_employee; // 현재 직원 수
  Employee **employee_list // 직원 데이터
  
  EmployeeList(int alloc_employee) : alloc_employee(alloc_employee){
    employee_list = new Employee*[alloc_employee];
    current_employee = 0;
   }
  void add_employee(Employee* employee){
    employee_list[current_employee] = employee;
    current_employee++;
    
   }
  ~EmployeeList(){
    for(int i=0; i<current_employee; i++){
      delete employee_list[i];
      }
    delete[] employee_list;
    
   }
   
};

int main(){

  EmployeeList emp_list(10);
  emp_list.add_employee(new Employee("eun", 33, "CEO"));
  
  return 0;



}
