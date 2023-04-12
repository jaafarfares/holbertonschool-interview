# 0x0F. Star Wars API


 this task is about creating a Node.js script that retrieves and prints the character names of a specified Star Wars movie. The script takes a single argument, which is the ID of the movie whose characters need to be printed

to achieve this, the script uses the Star Wars API and the request module to make an HTTP GET request to the API endpoint for the specified movie. It then extracts the URLs for each character in the movie from the response and makes additional HTTP GET requests for each character URL to retrieve the character information. The character names are then printed in the same order as they appear in the characters list in the API response for the movie

to run the script, the user needs to open a terminal and navigate to the directory where the script is located. They then need to run the script with the node command and pass the movie ID as a command-line argument, like this: node 0-starwars_characters.js 3. The output will be a list of character names printed one per line, in the same order as the characters list in the API response for the specified movie 



### Made by [Jaafar Fares](https://github.com/jaafarfares) for [Holberton School](https://www.holbertonschool.com/)
