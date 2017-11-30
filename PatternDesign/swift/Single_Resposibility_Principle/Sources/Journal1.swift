//
// Created by Peter A. Kolski on 01.10.17.
//

import Foundation

class Journal1
{
    var entries = [String]()
    var counter = 0

    func addEntry(_ text: String) -> Int
    {
        counter += 1
        entries.append("\(counter): \(text)")
        return counter
    }

    func removeEntry(_ id: Int)
    {
        entries.remove(at: id)
    }

    func getEntry(_ id:Int) -> String
    {
        return entries[id]
    }

    func printAll()
    {
        for item in entries
        {
            print(item)
        }
    }
}
