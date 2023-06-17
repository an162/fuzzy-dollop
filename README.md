# fuzzy-dollop
coin toss game
Objective
The objective of the Coin Toss Game is to accumulate a balance of exactly 100.0DA
by tossing different coins.

Game Rules:
• The game uses three types of coins: coin10, coin20, and coin50.
• Each coin has a specific value: coin10 worth DA10, coin20 worth DA20, and
coin50 worth DA50.
• At the beginning of the game, your balance is set to 0.
• During each round of the game, all three coins are tossed simultaneously.
• If a coin lands heads-up, its value is added to your balance. If it lands tails-up,
no change occurs.
• The game continues until your balance reaches or exceeds DA100.0.
• If your balance exactly equals DA100.0, you win the game.
• If your balance exceeds DA100.0, you lose the game.

Gameplay
• The game starts with a balance of DA0.0.
• The program will simulate the tossing of each coin (con10, coin20, and coin50)
in every round.

• After each coin toss, the program will display the result: whether the coin
landed heads-up or tails-up.
• If a coin lands heads-up, its value will be added to the balance, and the
updated balance will be displayed.
• If the balance reaches or exceeds 100.0, the game ends. If the balance equals
100.0, a message will be displayed, indicating that you have won the game.
• If the balance exceeds 100.0, a message will be displayed, indicating that you
have lost the game.

The program uses dynamic casting and polymorphism to handle the differ-
ent types of coins and their specific behaviors during the coin toss.
