const ciphertext = 'NAGEIDVTATLNIITYNDFAOICENHANICTICPRTEYHTPTOSMRIAAYPORHGI';
const rows = 7;
const columns = 8;
const matrix = [];

let start = 0;
for (let i = 0; i < rows; i++) {
  matrix[i] = [];
  for (let j = 0; j < columns; j++) {
    matrix[i].push(ciphertext.charAt(start++));
  }
}

function display() {
  for (let a = 0; a < matrix.length; a++) {
    let matrixText = "";
    for (let b = 0; b < matrix[a].length; b++) {
      matrixText += `${matrix[a][b]}, `;
    }
    console.log(matrixText);
  }
}

function displayAsString() {
  let matrixText = "";
  for (let a = 0; a < matrix.length; a++) {
    for (let b = 0; b < matrix[a].length; b++) {
      matrixText += matrix[a][b];
    }
  }
  console.log(matrixText);
}

function shiftByRow(rowA, rowB) {
  const tempRow = matrix[rowA];
  matrix[rowA] = matrix[rowB];
  matrix[rowB] = tempRow;
}

function shiftByColumn(colA, colB) {
  if (colA > matrix.length || colB > matrix.length) {
    throw new Error('Index out of range');
  }
  for (let a = 0; a < matrix.length; a++) {
    const tempCol = matrix[a][colA];
    matrix[a][colA] = matrix[a][colB];
    matrix[a][colB] = tempCol;
  }
}

shiftByColumn(3, 0);
shiftByColumn(6, 1);
shiftByColumn(4, 2);

shiftByRow(4, 0);
shiftByRow(6, 1);
shiftByRow(5, 2);

display();

displayAsString();
