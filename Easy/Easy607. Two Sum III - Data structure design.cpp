/*

requirements

607. Two Sum III - Data structure design
Design and implement a TwoSum class. It should support the following operations: add and find.

add - Add the number to an internal data structure.
find - Find if there exists any pair of numbers which sum is equal to the value.

Example
Example 1:

add(1); add(3); add(5);
find(4) // return true
find(7) // return false
*/

class TwoSum {
public:
    /**
     * @param number: An integer
     * @return: nothing
     */
    void add(int number) {
        // write your code here
        if (elements.find(number) == elements.end())
            elements[number] = 1;
        else
            elements[number] += 1;
    }

    /**
     * @param value: An integer
     * @return: Find if there exists any pair of numbers which sum is equal to the value.
     */
    bool find(int value) {
        // write your code here
        for (auto it = elements.begin(); it != elements.end(); ++it)
        {
            int tmp = it->first;
            int tmpSize = it->second;
            if ((tmp * 2 == value) && tmpSize > 1)
                return true;
            else if ((tmp * 2 != value) && elements.find(value - tmp) != elements.end())
                return true;
        }
        return false;
    }
private:
    unordered_map<int, size_t> elements;
};