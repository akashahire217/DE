create database de;
use de;
create table students(id int,name varchar(20),age int,grade varchar(10));
insert into students values(101, "roman",20,"A"),(102,"john",18,"B"),(103,"chintu",19,"B"),(104,"alexa",21,"C"),
(105,"smith",22,"C"),(106,"cathrine",20,"B"),(107,"allu",21,"B"),(108,"keerthy",18,"A"),(109,"anushka",20,"B"),(110,"anushka",20,"B");

select name,age from students;
 select name,grade from students where age>16;
select name,age from students where grade="A";
delete from students where age<20;
alter table students add gender char(20);