/* Write your PL/SQL query statement below */
select e.name,b.bonus from employee e
full outer join bonus b
on e.empId=b.empId
where bonus<1000 or bonus is null;