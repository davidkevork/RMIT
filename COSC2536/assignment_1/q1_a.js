const ciphertext = 'NZXMTYLETZYD';

// Decode Caesars Cipher

for (let i = 0; i < 26; i++) {
  let plaintextForward = '';
  let plaintextBackward = '';
  for (let j = 0; j < ciphertext.length; j++) {
    plaintextForward += String.fromCharCode(ciphertext.charCodeAt(j) + i);
    plaintextBackward += String.fromCharCode(ciphertext.charCodeAt(j) - i);
  }
  console.log(i + 1, plaintextForward, plaintextBackward);
}

