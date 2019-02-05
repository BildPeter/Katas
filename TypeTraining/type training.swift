
var dict = [ String : String ]()

// --- dictionary
dict["LHR"] = "London" // --- adding
dict["LHR"] = nil // --- remove
for key in dict.keys {}
for value in dict.values {}

// --- Array of keys/values
let _ = Array( dict.keys )
let _ = Array( dict.values )

// --- Closures
dict = dict.mapValues { $0 + ".jpg" } // --- change the values of a dictionary
dict = dict.filter { $0 != "Three" } // --- Filter elements


