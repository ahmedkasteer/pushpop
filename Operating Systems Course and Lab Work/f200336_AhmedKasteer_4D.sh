#!/bin/bash
printf " Enter Player1 name : "
read player1
printf "\nEnter Player2 name : "
read player2
echo -e
player_1=0 
player_2=0 
printf " --------------------------------------------\n"
printf " Snake at Position   |    Ladder at Position \n"
printf " --------------------------------------------\n"
printf " from 91 to 28       |    from 8  to 26\n"
printf " from 92 to 51       |    from 21 to 82\n"
printf " from 83 to 19       |    from 41 to 77\n"
printf " from 69 to 33       |    from 50 to 91\n"
printf " from 59 to 17       |    from 62 to 96\n"
printf " from 49 to 9        |    from 66 to 97\n"
printf " from 46 to 5        |    from 89 to 100\n"
while((100))
do
printf "\t\t"
printf $player1
printf " Press any key to continue\n"
read a

dice=$(($RANDOM % 6 +1))  #random value in dice
printf "Dice value is "
echo $dice

player_1=$(($dice+$player_1))

if(($player_1>101))     #if p1 greater than 101
then
player_1=$(($player_1-$dice))
printf "Dice value is not competible\n"
fi
if(($player_1==101))     #if p1 greater == 101
then
echo $player_1
printf $player1
printf " wins the game\n"
break
fi
if(($player_1==98))      #conditions for snake and ladder
then 
player_1=$(($player_1-70))
printf "Snake\n"
elif(($player_1==92))
then 
player_1=$(($player_1-41))
printf "Snake\n"
elif(($player_1==83))
then 
player_1=$(($player_1-64))
printf "Snake\n"
elif(($player_1==69))
then 
player_1=$(($player_1-36))
printf "Snake\n"
elif(($player_1==59))
then 
player_1=$(($player_1-44))
printf "Snake\n"
elif(($player_1==49))
then 
player_1=$(($player_1-40))
printf "Snake\n"
elif(($player_1==46))
then 
player_1=$(($player_1-41))
printf "Snake\n"
elif(($player_1==8))
then
player_1=$(($player_1+18))
printf "Ladder\n"
elif(($player_1==21))
then
player_1=$(($player_1+61))
printf "Ladder\n"
elif(($player_1==43))
then
player_1=$(($player_1+34))
printf "Ladder\n"
elif(($player_1==50))
then
player_1=$(($player_1+41))
printf "Ladder\n"
elif(($player_1==62))
then
player_1=$(($player_1+34))
printf "Ladder\n"
elif(($player_1==66))
then
player_1=$(($player_1+31))
printf "Ladder\n"
elif(($player_1==89))
then
player_1=$(($player_1+11))
printf "Ladder\n"
fi

for i in {1..100}    #loop to form table
do
if(($i==$player_1))
then
printf "P1"
elif(($i==$player_2))
then
printf "P2"
else
printf $i 
fi
printf "  "
 if (($i%10 == 0))
  then
  echo -e
 fi
done
printf "Player 1 is at Position: "      #player1 score after dice role
echo $player_1
printf "\n"

#player2's turn

printf "\t\t"
printf $player2
printf " Press any key to continue\n"
read a


dice=$(($RANDOM % 6 +1))
printf "Dice value is "
echo $dice

player_2=$(($dice+$player_2))

if(($player_2>101))
then
player1=$(($player_2-$dice))
printf "Dice value is not competible\n"
fi
if(($player_2==101))
then
echo $player_2
printf $player2
printf " wins the game\n"
 break
fi
if(($player_2==98))
then 
player_1=$(($player_2-70))
printf "Snake\n"
elif(($player_2==92))
then 
player_1=$(($player_2-41))
printf "Snake\n"
elif(($player_2==83))
then 
player_1=$(($player_1-64))
printf "Snake\n"
elif(($player_2==69))
then 
player_1=$(($player_2-36))
printf "Snake\n"
elif(($player_2==59))
then 
player_1=$(($player_2-44))
printf "Snake\n"
elif(($player_2==49))
then 
player_1=$(($player_2-40))
printf "Snake\n"
elif(($player_2==46))
then 
player_1=$(($player_2-41))
printf "Snake\n"
elif(($player_2==8))
then
player_1=$(($player_2+18))
printf "Ladder\n"
elif(($player_2==21))
then
player_1=$(($player_2+61))
printf "Ladder\n"
elif(($player_2==43))
then
player_1=$(($player_2+34))
printf "Ladder\n"
elif(($player_2==50))
then
player_1=$(($player_2+41))
printf "Ladder\n"
elif(($player_2==62))
then
player_1=$(($player_2+34))
printf "Ladder\n"
elif(($player_2==66))
then
player_1=$(($player_2+31))
printf "Ladder\n"
elif(($player_2==89))
then
player_1=$(($player_2+11))
printf "Ladder\n"
fi

echo -e
for i in {1..100}
do
if(($i==$player_1))
then
printf "P1"
elif(($i==$player_2))
then
printf "P2"
else
printf $i 
fi
printf "  "
 if (($i%10 == 0))
  then
  echo -e
 fi
done
printf "Player 2 is at position: "
echo $player_2
printf "\n"

done
