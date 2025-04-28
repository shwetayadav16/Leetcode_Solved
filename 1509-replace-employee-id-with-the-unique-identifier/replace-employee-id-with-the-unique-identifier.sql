# Write your MySQL query statement below
select name,unique_id from employees as emp
Left Join employeeUNI as emp_uni
on emp.id=emp_uni.id;