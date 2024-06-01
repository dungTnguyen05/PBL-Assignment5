# PBL-Assignment5
Assignment 5 covers Probability and Simulation. 

This assignment provides a more challenging dice game called "Can't Stop".  Note this assignment has no assumptions (the dice are fair, and the rules are clear). Hence, the report should focus on how you model or simulate the game and the results that you obtain from that model. 

Problem description
"Can't Stop" is a strategy and luck game.  The game rules are provided here. Links to an external site. You can find examples and descriptions of the game online.

Start the assignments by becoming familiar with the rules.  You may ask for clarification on the discussion board. 

At each turn, there are two decisions that need to be made:
How should you divide up the four dice you've rolled into two pairs?
And after you've moved the white runners, should you stop? or throw the four dice again? 

Once you have placed the 3 white runners on the board, the chances of busting increase.  To know what is the risk of keeping playing, we want to calculate the probability of advancing (or busting) given the current 3 locations of the white runners: columns c1, c2 and c3. 

Part 1 (70% marks)
Validate the following probabilities of losing the white runners (busting) for the following two situations:

        When columns are (3, 8, 11), the chance of advancing is 76% and the chance of busting is 24%.  (or 0.24151 to be exact)

        When columns are columns are (2, 4, 11) the chance of advancing is 63% and the chance of busting is 37%. (or 0.36574 to be exact)

Part 2 (30% marks)
We want to understand the "ideal" number of throws, by working out the chance of busting after 1,2,3 or 4 throws. Simulate the game from the starting positions a large number of times to provide a reasonable approximation for these values. 