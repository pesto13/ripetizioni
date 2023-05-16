// Constants
const PLAYER_X = 'x';
const PLAYER_O = 'o';
const EMPTY = '';

// Variables
let currentPlayer = PLAYER_X;
let gameStatus = '';

// Selectors
const board = document.getElementById('board');

const resetButton = document.querySelector('#reset');

// Event Listeners
board.addEventListener('click', handleMove);
resetButton.addEventListener('click', resetGame);

// Functions
function handleMove(event) {
  const cell = event.target;
  if (cell.tagName === 'TD' && cell.textContent === EMPTY) {
    cell.textContent = currentPlayer;
    checkGameStatus();
    switchPlayer();
  }
}

function switchPlayer() {
  currentPlayer = currentPlayer === PLAYER_X ? PLAYER_O : PLAYER_X;
}

function checkGameStatus() {
  gameStatus = checkWin() || checkTie();
  if (gameStatus !== '') {
    endGame();
  }
}

function checkWin() {
  const winningCombinations = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
  ];

  for (let combination of winningCombinations) {
    if (
      board.rows[combination[0]].cells[0].textContent === currentPlayer &&
      board.rows[combination[1]].cells[0].textContent === currentPlayer &&
      board.rows[combination[2]].cells[0].textContent === currentPlayer
    ) {
      return currentPlayer;
    }
  }
  return '';
}

function checkTie() {
  for (let row of board.rows) {
    for (let cell of row.cells) {
      if (cell.textContent === EMPTY) {
        return '';
      }
    }
  }
  return 'tie';
}

function endGame() {
  if (gameStatus === 'tie') {
    message.textContent = "It's a tie!";
  } else {
    message.textContent = `Player ${currentPlayer} wins!`;
  }
  board.removeEventListener('click', handleMove);
}

function resetGame() {
  for (let row of board.rows) {
    for (let cell of row.cells) {
      cell.textContent = EMPTY;
    }
  }
  currentPlayer = PLAYER_X;
  gameStatus = '';
  message.textContent = '';
  board.addEventListener('click', handleMove);
}
