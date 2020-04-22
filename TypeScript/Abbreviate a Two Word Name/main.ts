export function abbrevName(name: string): string {
	if (!name)
	  throw new Error ("Invalid Input");
	let array: Array<string>;
	let string: string;
	array = name.split(" ", 2);
	string = array[0][0].toLocaleUpperCase() + "." + array[1][0].toLocaleUpperCase();
	return string;
  }

console.log(abbrevName("gerhard Molin"));