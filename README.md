# Save-your-beloved

You have to save your beloved from the clutches of an evil chimpanzee. 
The chimpanzee has N monkeys in his army and you need to find a way to fight your way through his army.
The monkeys are arranged in a single file (pun intended). Each monkey has a number assigned to it, which represents the amount of damage it can suffer before you defeat it in the battle. You have to then fight the monkey immediately next in line (again pun intended).

You begins with a Health = 2000 and Injuries = 1 and the maximum Injuries that you can sustain is 1000000.

Lets say you fight a monkey who can deal 'D' damage. Then your health decreases by D and your total injuries get multiplied by D.

You can initially strategically position yourself anywhere in the line. You need to find the maximum number of monkeys that you can defeat. You assume that after this feat of great skill, the evil chimp will return your beloved safe and sound. 

We reiterate that you don't need to necessarily reach the evil chimpanzee to win. Nor, do you have to defeat all the monkeys. You just need to defeat the maximum possible, starting anywhere. 

Oh and also, we need you to be alive after your battle! 

 Hint: You are alive only if your Health > 0 AND Injuries < MAX Injuries

Assume:
Once beaten, the monkeys do not return to battle.
The monkeys cannot turn back and hence those behind you cannot fight.
You can choose to start fighting wherever and choose to stop fighting whenever. 
input size:1000000.

My solution to the problem is
number of possiblities is 4
number of monkeys is 19
