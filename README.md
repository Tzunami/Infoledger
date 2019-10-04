# Infoledger

# History
This is an open-source CRM I wrote many years ago and thought I lost when my drive and backup died. I came across an old drive of backups, and to my surprise...look what I found, along with a bunch of unrelated goodies. So many years later let me introduce Infoledger :)

# What is Infoledger ? First you need to understand 'CRM Math'
What is CRM Math? We will look at examples in the CRM Math Section.<br/>
But before we start we need to understand a few Principles.<br/>

# Principles
A Person and a Person are People<br/>
People = Person + Person<br/>
Note: People + People would make a "larger" People<br/>
People = People + People<br/>
People = People + Person<br/>

A Group can be a number of People or Person(s)<br/>
Group = People //(but People can not equal Group)<br/>
Group = People + People<br/>
Group = People + Person<br/>
Group = People + Person + Person + People<br/>
Group = Group + People + Person<br/>

# Sample Output
STARTING BASIC TEST...

Initializing People & Data

People ppl_1 = bob + frank + sam + alice;<br/>
Name: Bob ID: 1 Data: Knowledge<br/>
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 

People ppl_2 = sally + alice + mary;<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 

People ppl_3 = ppl_1 + ppl_2;<br/>
Name: Bob ID: 1 Data: Knowledge<br/> 
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/> 
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 

ppl_2 += pat;<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 
Name: Pat ID: 0 Data:<br/> 

ppl_2 -= pat;<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 

ppl_2 += ppl_1;<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 
Name: Bob ID: 1 Data: Knowledge<br/> 
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 

ppl_2 -= ppl_1<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 

ppl_1<br/>
Name: Bob ID: 1 Data: Knowledge<br/> 
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/> 

ppl_2 += ppl_1 + alice - bob;<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/>
Name: Alice ID: 4 Data: Knowledge<br/>

ppl_1<br/>
Name: Bob ID: 1 Data: Knowledge<br/>
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/> 
Name: Alice ID: 4 Data: Knowledge<br/>

Reset ppl_1 = alice + mary;<br/>
Name: Alice ID: 4 Data: Knowledge<br/> 
Name: Mary ID: 5 Data: Knowledge<br/> 

ppl_2 -= ppl_1 - sam;<br/>
Name: Sally ID: 6 Data: Knowledge<br/> 
Name: Frank ID: 2 Data: Knowledge<br/> 
Name: Sam ID: 3 Data: Knowledge<br/> 

ppl_1<br/>
Name: Alice ID: 4 Data: Knowledge<br/>
Name: Mary ID: 5 Data: Knowledge<br/>

People<br/>

ppl_3 = ppl_1 - ppl_2<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

Initialize Group (Requires 2 Person(s))<br/>

Group group_1(alice, mary, Group One);<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

Group group_2(sally, sam, Group Two);<br/>
Name: Sally ID: 6 Data: Knowledge <br/>
Name: Sam ID: 3 Data: Knowledge <br/>

Group group_3(bob, frank, Group Three);<br/>
Name: Bob ID: 1 Data: Knowledge <br/>
Name: Frank ID: 2 Data: Knowledge <br/>

Group & Person<br/>

group_1 = group_1 + bob;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>
Name: Bob ID: 1 Data: Knowledge <br/>

group_1 = group_1 - bob;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge<br/> 

group_1 += sam;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>
Name: Sam ID: 3 Data: Knowledge<br/> 

group_1 -= sam;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_1 = ppl_3;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

Group, Person(s), & People<br/>

group_1 += sam + bob;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>
Name: Sam ID: 3 Data: Knowledge <br/>
Name: Bob ID: 1 Data: Knowledge <br/>

group_1 -= sam + bob;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_1 = group_1 + pl_1 + sam - mary;<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Sam ID: 3 Data: Knowledge <br/>

ppl_1<br/>
Name: Alice ID: 4 Data: Knowledge<br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_1 = group_1 - bob - alice;<br/>
Name: Sam ID: 3 Data: Knowledge <br/>

ppl_1<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_1 += bob + frank;<br/>
Name: Sam ID: 3 Data: Knowledge <br/>
Name: Bob ID: 1 Data: Knowledge <br/>
Name: Frank ID: 2 Data: Knowledge <br/>

ppl_1<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_1 -= bob + frank;<br/>
Name: Sam ID: 3 Data: Knowledge <br/>

ppl_1<br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_2 = bob + frank;<br/>
Name: Bob ID: 1 Data: Knowledge <br/>
Name: Frank ID: 2 Data: Knowledge <br/>

group_1<br/>
Name: Sam ID: 3 Data: Knowledge <br/>

group_3 = group_2 + alice - group_1 + bob + mary;<br/>
Name: Bob ID: 1 Data: Knowledge <br/>
Name: Frank ID: 2 Data: Knowledge <br/>
Name: Alice ID: 4 Data: Knowledge <br/>
Name: Mary ID: 5 Data: Knowledge <br/>

group_1 += group_2 - bob - alice;<br/>
Name: Sam ID: 3 Data: Knowledge <br/>
Name: Frank ID: 2 Data: Knowledge <br/>

group_2<br/>
Name: Bob ID: 1 Data: Knowledge <br/>
Name: Frank ID: 2 Data: Knowledge <br/>

group_1 -= group_2 - bob - alice;<br/>
Name: Sam ID: 3 Data: Knowledge <br/>

END BASIC TEST...<br/>

------------------------------------- STARTING TEST PROCESS...<br/>

Initializing Person(s) Type B<br/>

Initializing People NOT Type A<br/>
People #1<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data:<br/> 
Name: Sam ID: 28 Data: <br/>
Name: Alice ID: 29 Data: <br/>
People #2<br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>
People #3<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data: <br/>
Name: Sam ID: 28 Data: <br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>

Initializing Groups Type B<br/>

Group A<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data: <br/>
Name: Sam ID: 28 Data: <br/>
Name: Alice ID: 29 Data: <br/>

Group B<br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>

Group C<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data: <br/>
Name: Sam ID: 28 Data: <br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>

Creating Data, Process, Output <br/>
Creating Infoledge (Information + Knowledge) Type D <br/>

Infoledge il_1(pat, group_A);<br/>
Person:<br/>
Name: Pat ID: 25 Data: <br/>
Group:<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data: <br/>
Name: Sam ID: 28 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Result: <br/>
database.Save(il_1);<br/>

Infoledge il_2(frank, group_B, process);<br/>
Person:<br/>
Name: Frank ID: 27 Data: <br/>
Group:<br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>
Result: <br/>

il_2.RunProcess()<br/>
MyProcess with Person & Group<br/>
process result:<br/>
Person:<br/>
Name: Frank ID: 27 Data: <br/>
Group:<br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>
Result: Knowledge <br/>
database.Save(il_2);<br/>

database.Print<br/>
#: 0<br/>
Person:<br/>
Name: Pat ID: 25 Data: <br/>
Group:<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data: <br/>
Name: Sam ID: 28 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Result: <br/>
#: 1<br/>
Person:<br/>
Name: Frank ID: 27 Data: <br/>
Group:<br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>
Result: Knowledge <br/>

il_1 = database.Get(0); <br/>
Person:<br/>
Name: Pat ID: 25 Data: <br/>
Group:<br/>
Name: Bob ID: 26 Data: <br/>
Name: Frank ID: 27 Data: <br/>
Name: Sam ID: 28 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Result: <br/>

il_1 = database.Get(1); <br/>
Person:<br/>
Name: Frank ID: 27 Data: <br/>
Group:<br/>
Name: Sally ID: 31 Data: <br/>
Name: Alice ID: 29 Data: <br/>
Name: Mary ID: 30 Data: <br/>
Result: Knowledge <br/>

END TEST PROCESS...<br/>


