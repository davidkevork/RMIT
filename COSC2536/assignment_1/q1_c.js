const ciphertext = 'MDUNPWV UF IYR PEUQUIV BK PT UTLUNULSPQ BD JDBSM IB FRWQSLR IYRZFRQNRF, BD UTKBDZPIUBT PEBSI IYRZFRQNRF, PTL IYRDREV RHMDRFF IYRZFRQNRF FRQRWIUNRQV. IYR EBSTLPDURF PTL WBTIRTI BK AYPI UF WBTFULRDRL MDUNPIR LUKKRD PZBTJ WSQISDRF PTL UTLUNULSPQF. AYRT FBZRIYUTJ UF MDUNPIR IB P MRDFBT, UI SFSPQQV ZRPTF IYPI FBZRIYUTJ UF UTYRDRTIQV FMRWUPQ BD FRTFUIUNR IB IYRZ. IYR LBZPUT BK MDUNPWV MPDIUPQQV BNRDQPMF AUIY FRWSDUIV, AYUWY WPT UTWQSLR IYR WBTWRMIF BK PMMDBMDUPIR SFR, PF ARQQ PF MDBIRWIUBT BK UTKBDZPIUBT. MDUNPWV ZPV PQFB IPCR IYR KBDZ BK EBLUQV UTIRJDUIV. IYR DUJYI TBI IB ER FSEXRWIRL IB STFPTWIUBTRL UTNPFUBTF BK MDUNPWV EV IYR JBNRDTZRTI, WBDMBDPIUBTF BD UTLUNULSPQF UF MPDI BK ZPTV WBSTIDURF\' MDUNPWV QPAF, PTL UT FBZR WPFRF, WBTFIUISIUBTF.';

const frequency = {};

for (let i = 0; i < ciphertext.length; i++) {
  const char = ciphertext.charAt(i);
  if (frequency[char] == undefined) {
    frequency[char] = 1;
  } else {
    frequency[char] += 1;
  }
}

function substitue(letter) {
  const list = {
    'R': 'e',
    'U': 'i',
    'I': 't',
    'B': 'o',
    'F': 's',
    'P': 'a',
    'T': 'n',
    'D': 'r',
    'W': 'c',
    'Q': 'l',
    'Y': 'h',
    'M': 'p',
    'L': 'd',
    'N': 'v',
    'S': 'u',
    'V': 'y',
    'Z': 'm',
    'K': 'f',
    'E': 'b',
    'J': 'g',
    'A': 'w',
    'H': 'x',
    'C': 'k',
    'X': 'j',
  };
  return list[letter] || letter;
}
const frequencyCount = Object.keys(frequency).sort(function(a,b) { return frequency[b]-frequency[a]; });

console.log(frequency);

frequencyCount.forEach(el =>  console.log(`${el} => ${frequency[el]} => ${substitue(el)}`));

let plaintext = '';
for (let i = 0; i < ciphertext.length; i++) {
  plaintext += substitue(ciphertext.charAt(i));
}

console.log(plaintext);
