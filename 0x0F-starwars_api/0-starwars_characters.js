#!/usr/bin/node
const req = require('request');

const args = process.argv[2];
const movieid =  'https://swapi-api.hbtn.io/api/films/' + args;

req(movieid, function(err, res, body) {
  if (err) {
    console.error(err);
  } else {
    const movie = JSON.parse(body);
    const characters = movie.characters;
    characters.forEach(characterUrl => {
      req(characterUrl, function(err, res, body) {
        if (err) {
          console.error(err);
        } else {
          const character = JSON.parse(body);
          console.log(character.name);
          resolve();
        }
      });
    });
  }
});

