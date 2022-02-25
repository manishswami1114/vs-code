// Let's import our albums 
import { albums } from "./albums.js"

// Code goes here 
albums.forEach(function(album) {
  let image = new Image();
  image.src = album.cover;
  
  document.querySelector(".albums"). appendChild(image)
  
  })
