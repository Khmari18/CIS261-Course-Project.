// CIS261 Course Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	cout << "Hello, World!" << endl;
	return 0;
}

def get_employee_name():
	return input("Enter employee name (or type 'END' to quit):")

	def get_total_hours():
	while True:
		try:
		return float(input("Enter total hours worked: "))
		except ValueError:
print("INvalid input. Please enter a number.")

def get_hourly_rate():
	while True:
		try:
		return float(input("Enter hourly rate: "))
		except ValueError:
print("Invalid input. Please enter a number.")

def get_tax_rate():
	while True:
		try:
		return float(input("Enter income tax rate (as a precentage, e.g., 15 for 15%): ")) / 100
		except ValueError:
print("Invalid input. Please enter a number.")

def calculate_payroll(hours, hourly_rate, tax_rate):
	gross_pay = hours * hourly_rate
	income_tax = gross_pay * tax_rate
	net_pay = gross_pay - income_tax
	return gross_pay, income_tax, net_pay
	
	def display_employee_details(name, hours, rate, gross, tax_rate, income_tax, net_pay):
	print("\nPayroll Details for:", name)
	print(f"Total Hours Worked: {hours}")
	print(f"Hourly Rate: ${rate:.2f}")
	print(f"Gross Pay: ${gross:.2f}")
	print(f"Income Tax Rate: {tax_rate * 100:.2f}%")
	print(f"Income Tax: ${income_tax:.2f}")
	print(f"Net Pay: ${net_pay:.2f}\n")
	
	def display_summary(total_employees, total_hours, total_gross, total_tax, total_net):
	print("\nPayroll Summary")
	print(f"Total Employees: {total_employees}")
	print(f"Total Hours Worked: {total_hours}")
	print(f"Total Gross Pay: ${total_gross:.2f}")
	print(f"Total Income Tax: ${total_tax:.2f}")
	print(f"Total Net Pay: ${total_net:.2f}\n")
	
	#Main function to run the payroll system
	def main():
	total_employees = 0
	total_hours = 0
	total_gross = 0
	total_tax = 0
	total_net = 0
	
	while True:
name = get_employee_name()
if name.lower() == 'end':
	break
	
	hours = get_total_hours()
	rate = get_hourly_rate()
	tax_rate = get_tax_rate()
	
	gross, tax, net = calculate_payroll(hours, rate, tax_rate)
	
	display_employee_details(name, hours, rate, gross, tax_rate, tax, net)
	
	# Accumulate totals
	total_employees += 1
	total_hours += hours
	total_gross += gross
	total_tax += tax
	total_net += net

	if total_employees > 0:
display_summary(total_employees, total_hours, total_gross, total_tax, total_net)

# Run the program
if __name__ == "__main__":
main()









   

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
