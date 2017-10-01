class Journal
{
    var entries = [String]()
    var count = 0

    func addEntry(_ text: String) -> Int
    {
        count += 1
        entries.append("\(count): \(text)")
        return count - 1
    }

    func removeEntry(_ id: Int)
    {
        entries.remove(at: id)
    }

    func getEntry(_ id: Int) -> String
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

func main()
{
    let j = Journal1()
    let _ = j.addEntry("I love my iPad")        //TODO What does that mean?
    let bug = j.addEntry("Noone is in Lacuna")

    print(j.getEntry(0))
    print(j.getEntry(1))
    print("======")

    j.removeEntry(1)
    j.printAll()
}

main()
