type request =
  | Success
  | Error
  | Dead;

let data = Error;

let finder = day => {
  switch (day) {
  | Success => "Hello World"
  | Error => "Another Error , yikes"
  | Dead => "Wel go to bead"
  };
};

let newFinder =
  finder(data) |> String.lowercase_ascii |> String.uppercase_ascii;

Js.log(newFinder);