# Minesweeper
Minesweeper game in C++ for class project

Assignment Objectives  
• Reinforce understanding of:  
o One-dimensional and two-dimensional arrays 
o C-strings (character arrays) 
o Control structures (loops, conditionals)  
o Basic input/output operations  

• Develop skills in:  
o Problem decomposition 
o Algorithm development  
o Modular programming using functions  

Problem Description  
You are to develop a console-based Minesweeper game where a player uncovers cells on a grid, aiming to reveal all the cells that do not contain mines. The grid contains hidden mines randomly placed based on the selected difficulty level. The game provides feedback to the player by indicating the number of mines adjacent to each revealed cell.  

Game Rules and Mechanics  
1. Game Setup:  
• The game is played on a two-dimensional grid (square board).  
• The player selects the board size and difficulty level at the start.
 
2. Objective:  
• Uncover all cells that do not contain mines.  
• Avoid uncovering any mines.

3. Gameplay:  
• The player selects a cell to reveal by entering its coordinates.  
• If the cell contains a mine, the game ends (loss).  
• If the cell does not contain a mine, reveal the number of adjacent mines.  
• The game continues until all non-mine cells are revealed (win) or a mine is uncovered (loss).
 
Requirements and Specifications  
1. Board Configuration  
• Board Size:  
• Minimum size: 3x3  
• Maximum size: 10x10  
• The player chooses the board size at the start of the game.  
• Use a fixed-size 2D array to represent the grid:  
o  Example:  
const int MAX_SIZE = 10;  bool 
mines[MAX_SIZE][MAX_SIZE]; // Mine 
locations   
• Use only the portion of the arrays corresponding to the selected board size.  
 
2. Difficulty Levels  
• Options:  
o  Easy: Mines occupy 10% of the board. 
o  Medium: Mines occupy 20% of the board.
o  Hard: Mines occupy 30% of the board.
• The player selects the difficulty level at the start of the game.  
• The number of mines is calculated based on the board size and difficulty.

3. Mine Placement  
• Random Placement  
o Initialize all elements in the mines array to false.  
o Randomly place the required number of mines on the board by setting mines[row][col] = true for mine locations.  
o Ensure that each mine is placed at a unique position.  
• No Clustering Logic  
o  You do not need to implement logic to prevent mines from clustering.  

4. Gameplay Mechanics  
• Displaying the Board
o Use the revealed array to track which cells the player has uncovered.  
o For each cell:  
o If revealed[row][col] is true:  
o If mines[row][col] is true, display a mine symbol (e.g., *).  
o If mines[row][col] is false, calculate and display the number of adjacent mines.  
o If revealed[row][col] is false, display a hidden cell symbol (e.g., #).

• Player Input:  
o Prompt the player to enter the row and column numbers of the cell they want to reveal.  
o Validate inputs to ensure they are within the board boundaries.  
o If the cell has already been revealed, prompt the player to choose a different cell.   

• Revealing Cells o  When the player selects a cell to reveal:  
o Check mines[row][col]:  
o If true (cell contains a mine):  
o Set revealed[row][col] = true. o Display the mine symbol. 
o End the game with a loss message.  
o If false (cell does not contain a mine):  
o Calculate the number of adjacent mines on demand. 
o  Display the number to the player. 
o Set revealed[row][col] = true.  

•  Calculating Adjacent Mines  
o Create a function to calculate the number of adjacent mines for a given cell by checking the surrounding cells in the mines array.  
o Perform this calculation each time a cell is revealed.  
•  Winning the Game  
o  The player wins by revealing all cells that do not contain mines.
o  Display a congratulatory message upon winning.  

End of Game Conditions  
• Loss:  
o The player reveals a cell containing a mine. 
o Display the full board with all mines revealed.  
o Offer the option to play again.  

• Win:  
o All non-mine cells are successfully revealed. 
o Display a victory message. 
o Offer the option to play again.  

Program Structure  
1. Functions  
• Initialization Functions o initializeBoard o Initialize mines and revealed arrays to false.  
o placeMines:  
o Randomly place mines on the board based on difficulty level.  
o calculateAdjacentMines:  
o Calculate the number of adjacent mines for a specific cell when needed.

• Display Function:  
o displayBoard:  
o Loop through the board and display each cell based on its state:  
o If revealed, show mine symbol or number of adjacent mines.  
o If not revealed, show hidden cell symbol.  

• Input Function:  
o getPlayerMove:  
o Prompt the player for cell coordinates. 
o Validate the input.  
o Return the valid row and column numbers.  

• Game Loop Function:  
o playGame:  
o Manage the main game loop:  
o Display the board. 
o Get the player's move. 
o  Reveal the selected cell.  
o Check for win or loss conditions.  

2. Calculating Adjacent Mines On Demand  
• Edge Conditions:  

o  Ensure that the function does not access indices outside the bounds of the array.  

Constraints  
• Language: Use C++.  
• Libraries: Only standard libraries are allowed  
• Data Structures:  
o Do not use structs or classes.  
o Use two 2D arrays:  
o bool mines[MAX_SIZE][MAX_SIZE]; o  bool revealed[MAX_SIZE][MAX_SIZE];  

• No Advanced Features:  
o Do not use pointers or dynamic memory allocation.  

• Code Style:  
o Write clean, readable code with appropriate indentation.  
o Use meaningful variable and function names. o  Include comments to explain non
trivial sections of code.  

[Optional] Implement Recursive Revealing of Adjacent Cells  
If you are looking for additional challenge do this. This is not required.   
•  Description:  
o If a revealed cell has zero adjacent mines, automatically reveal all neighboring cells.  
o Continue this process for further neighboring cells that also have zero adjacent mines.  
o The idea is to replicate original minesweeper feature where if you clicked on an empty area, the whole area would be revealed.  
o Be sure to:  
o Mark cells as revealed before to avoid infinite loops. o  Handle edge conditions to 
prevent out-of-bounds access.  
 
Tips and Advice  
• Random Number Generation:  
o Include <cstdlib> and <ctime>.  
o Seed the random number generator with srand(time(0)); in your main function.  
o Use rand() to generate random positions for mines.  

• Testing Edge Cases:  
o Test your game with the smallest and largest board sizes.  
o Verify that mines are placed correctly and that the game handles edges and corners properly.  
o You can also temporarily adjust your display function to display the mines when working on the board generation to ensure mines are correctly being setup.   

• Input Validation:  
o Check that the player's input is within the valid range.  
o Prompt the player again if they enter invalid coordinates or select an already revealed cell.  

• Modular Programming:  
o Break your code into functions to improve readability and maintainability.  
o Each function should have a clear purpose.  

• Debugging:  
o Use print statements to display the mines array during development (but remove them in the final version).  
o Step through your code with a debugger if you encounter issues. 
