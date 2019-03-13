# Reversi

 An instance of Reversi consists of an n×ngrid of cells, each of which can be either empty, black, or white. When the game begins the middle 4 cells are populated following the pattern Black-White-Black-White. Reversi is a two-player game where players take turns placing a piece of their colour in a cell. Black plays ﬁrst. The goal of Reversi is to have the most cells holding pieces of your colour at the end of the game. If a new piece A would form a line segment with an existing piece B of the same colour, such that all of the cells in between are occupied and of the opposite colour, those in-between pieces are ﬂipped to the same colour as A and B.

 ### Prerequisite

 You need to run under Linux with the support of XWindow.

 ### Make and Run

 Type

 ```
 make
 ```

 and

 ```
 ./main
 ```

 to run the program

 ### Game Play
 
 When you run your program, type the following commands: 

    • new n Creates a new n×n grid,where n ≥ 4∧n ≡ 0 (mod 2). 
    If there was already an active grid, that grid is destroyed and replaced with the new one. 
    When setting up the new grid your program should intialize the middle 4 squares following the Black-WhiteBlack-White pattern. 
    
    • play r c Within a game, plays a piece at row r, column c of the colour corresponding to the player who’s move it is. 
    If the row and column entered correspond to a cell that already has a piece, or a position outside the grid, 
    then the input is ignored and nothing is done.

The program ends when the input stream is exhausted, or when the game is over. The game is over when there are no more empty cells on the grid.
