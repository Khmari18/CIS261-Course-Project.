
def get_employee_name():
    return input("Enter employee name: ")
    
def get_total_hours():
    return float(input("Enter total hours worked: "))

def get_hourly_rate():
    return float(input("Enter hourly rate: "))

def get_tax_rate():
    return float(input("enter income tax rate (as decimal, e.g. 0.2): "))

def calculate_pay(total_hours, hourly_rate, tax_rate):
    gross_pay = total_hours * hourly_rate
    income_tax = gross_pay * tax_rate
    net_pay = gross_pay - income_tax
    return gross_pay, income_tax, net_pay

def display_employee_info(name, total_hours, hourly_rate, gross_pay, tax_rate, income_tax, net_pay):
    print(f"\nEmployee: {name}")
    print(f"Total Hours: {total_hours}")
    print(f"Hourly Rate: ${hourly_rate:.2f}")
    print(f"Gross Pay: ${gross_pay:.2f}")
    print(f"Income Tax Rate: {tax_rate:.2%}")
    print(f"Income Tax: ${income_tax:.2f}")
    print(f"Net Pay: ${net_pay:.2f}")
    
def display_totals(employee_count, total_hours, total_gross, total_tax, total_net):
    print(f"\nTotal Employees: {employee_count}")
    print(f"Total Hours: {total_hours}")
    print(f"Total Gross Pay: ${total_gross:.2f}")
    print(f"Total Income Tax: ${total_tax:.2f}")
    print(f"Total Net Pay: ${total_net:.2f}")
    
# Main loop
employee_count = 0
accumulated_hours = 0
accumulated_gross = 0
accumulated_tax = 0
accumulated_net = 0

while True:
    name = get_employee_name()
    if name.lower() == "end":
        break

total_hours = get_total_hours()
hourly_rate = get_hourly_rate()
tax_rate = get_tax_rate()

gross_pay, income_tax, net_pay = calculate_pay(total_hours, hourly_rate, tax_rate)

display_employee_info(name, total_hours, hourly_rate, income_tax, net_pay)

employee_count += 1
accumulated_hours += total_hours
accumulated_gross += gross_pay
accumulated_tax += income_tax
accumulated_net += net_pay

# Display totals
display_totals(employee_count, accumulated_hours, accumulated_gross, accumulated_tax, accumulated_net)

          
    

               