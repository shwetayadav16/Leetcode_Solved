# Write your MySQL query statement below
select unique_id,name from employees as emp
left join employeeuni as emp_uni
on emp.id=emp_uni.id;
