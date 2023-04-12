#!/usr/bin/node
const req = require('request');

const args = process.argv.slice(2);
const movieid = args[0];

req(`https://swapi.dev/api/films/${movieid}/`, function(err, response, body) {
  if (err) {
    console.error(err);
  } else {
    const movie = JSON.parse(body);
    const characters = movie.characters;
    characters.forEach(characterUrl => {
      req(characterUrl, function(err, response, body) {
        if (err) {
          console.error(err);
        } else {
          const character = JSON.parse(body);
          console.log(character.name);
        }
      });
    });
  }
});

