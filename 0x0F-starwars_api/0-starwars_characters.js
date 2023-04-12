#!/usr/bin/node
const req = require('request');

const args = process.argv[2];
const movieid =  'https://swapi-api.hbtn.io/api/films/' + args;

req(movieid, async function(err, res, body) {
  if (err) {
    console.error(err);
  } 
  for (const id of JSON.parse(body).characters) {
    await new Promise((resolve, reject) => {
      request(id, (err, res, body) => {
        if (err) {
          reject(err);
        }
        const character = JSON.parse(body);
        console.log(character.name);
        resolve();
      });
    });
  }
});

