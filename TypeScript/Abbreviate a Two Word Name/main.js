"use strict";
exports.__esModule = true;
function abbrevName(name) {
    if (!name)
        throw new Error("Invalid Input");
    var array;
    var string;
    array = name.split(" ", 2);
    string = array[0][0].toLocaleUpperCase() + "." + array[1][0].toLocaleUpperCase();
    return string;
}
exports.abbrevName = abbrevName;
console.log(abbrevName("gerhard Molin"));
