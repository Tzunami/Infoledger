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

People ppl_1 = bob + frank + sam + alice;
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 

People ppl_2 = sally + alice + mary;
Name: Sally ID: 6 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

People ppl_3 = ppl_1 + ppl_2;
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Sally ID: 6 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

ppl_2 += pat;
Name: Sally ID: 6 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 
Name: Pat ID: 0 Data: 

ppl_2 -= pat;
Name: Sally ID: 6 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

ppl_2 += ppl_1;
Name: Sally ID: 6 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 

ppl_2 -= ppl_1
Name: Sally ID: 6 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

ppl_1
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 

ppl_2 += ppl_1 + alice - bob;
Name: Sally ID: 6 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 

ppl_1
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 

Reset ppl_1 = alice + mary;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

ppl_2 -= ppl_1 - sam;
Name: Sally ID: 6 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 

ppl_1
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

People

ppl_3 = ppl_1 - ppl_2
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

Initialize Group (Requires 2 Person(s))

Group group_1(alice, mary, Group One);
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

Group group_2(sally, sam, Group Two);
Name: Sally ID: 6 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 

Group group_3(bob, frank, Group Three);
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 

Group & Person

group_1 = group_1 + bob;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 
Name: Bob ID: 1 Data: Knowledge 

group_1 = group_1 - bob;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 += sam;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 

group_1 -= sam;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 = ppl_3;;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

Group, Person(s), & People

group_1 += sam + bob;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 
Name: Bob ID: 1 Data: Knowledge 

group_1 -= sam + bob;
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 = group_1 + pl_1 + sam - mary;
Name: Alice ID: 4 Data: Knowledge 
Name: Sam ID: 3 Data: Knowledge 

ppl_1
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 = group_1 - bob - alice;
Name: Sam ID: 3 Data: Knowledge 

ppl_1
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 += bob + frank;
Name: Sam ID: 3 Data: Knowledge 
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 

ppl_1
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 -= bob + frank;
Name: Sam ID: 3 Data: Knowledge 

ppl_1
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_2 = bob + frank;
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 

group_1
Name: Sam ID: 3 Data: Knowledge 

group_3 = group_2 + alice - group_1 + bob + mary;
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 
Name: Alice ID: 4 Data: Knowledge 
Name: Mary ID: 5 Data: Knowledge 

group_1 += group_2 - bob - alice;
Name: Sam ID: 3 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 

group_2
Name: Bob ID: 1 Data: Knowledge 
Name: Frank ID: 2 Data: Knowledge 

group_1 -= group_2 - bob - alice;
Name: Sam ID: 3 Data: Knowledge 

END BASIC TEST...

------------------------------------- STARTING TEST PROCESS...

Initializing Person(s) Type B

Initializing People NOT Type A
People #1
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Alice ID: 29 Data: 
People #2
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 
People #3
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 

Initializing Groups Type B

Group A
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Alice ID: 29 Data: 

Group B
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 

Group C
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 

Creating Data, Process, Output 
Creating Infoledge (Information + Knowledge) Type D

Infoledge il_1(pat, group_A);
Person:
Name: Pat ID: 25 Data: 
Group:
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Alice ID: 29 Data: 
Result: 
database.Save(il_1);

Infoledge il_2(frank, group_B, process);
Person:
Name: Frank ID: 27 Data: 
Group:
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 
Result: 

il_2.RunProcess()
MyProcess with Person & Group
process result:
Person:
Name: Frank ID: 27 Data: 
Group:
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 
Result: Knowledge 
database.Save(il_2);

database.Print
#: 0
Person:
Name: Pat ID: 25 Data: 
Group:
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Alice ID: 29 Data: 
Result: 
#: 1
Person:
Name: Frank ID: 27 Data: 
Group:
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 
Result: Knowledge 

il_1 = database.Get(0);
Person:
Name: Pat ID: 25 Data: 
Group:
Name: Bob ID: 26 Data: 
Name: Frank ID: 27 Data: 
Name: Sam ID: 28 Data: 
Name: Alice ID: 29 Data: 
Result: 

il_1 = database.Get(1);
Person:
Name: Frank ID: 27 Data: 
Group:
Name: Sally ID: 31 Data: 
Name: Alice ID: 29 Data: 
Name: Mary ID: 30 Data: 
Result: Knowledge 

END TEST PROCESS...

Press <RETURN> to close this window...


