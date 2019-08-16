const createHash = require('create-hash');

// forward search attack

function sha256 (buffer) {
  return createHash('sha256').update(buffer).digest();
}

const alice = '73DAA9289DDD08A53BA86F065DDB07BF915ABA208BEC652E999613D2A8444228';
const bob = '9197E4844ABED2FEA3569A2ACF7B0D584C979C333AB7AE10BA6C339898776F5A';

for (let i = 351; i < 366; i++) {
  const hash = sha256(i.toString()).toString('hex');
  console.log(`h(${i}): ${hash}`);
  if (hash === alice.toLowerCase()) {
    console.log(`Alice's bid found: ${i} - ${hash}`);
  }
  if (hash === bob.toLowerCase()) {
    console.log(`Bob's bid found: ${i} - ${hash}`);
  }
}
