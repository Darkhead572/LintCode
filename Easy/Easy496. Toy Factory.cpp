/*

reuqirements

496. Toy Factory
Factory is a design pattern in common usage. Please implement a ToyFactory which can generate proper toy based on the given type.

Example
Example 1：

Input：
ToyFactory tf = ToyFactory();
Toy toy = tf.getToy('Dog');
toy.talk(); 
Output:
Wow
Example 2:

Input:
ToyFactory tf = ToyFactory();
toy = tf.getToy('Cat');
toy.talk();
Output：
Meow

*/

/**
 * Your object will be instantiated and called as such:
 * ToyFactory* tf = new ToyFactory();
 * Toy* toy = tf->getToy(type);
 * toy->talk();
 */
class Toy {
public:
    virtual void talk() const = 0;
};

class Dog: public Toy {
    // Write your code here
public:
    void talk() const
    {
        cout << "Wow" << endl;
    }
};

class Cat: public Toy {
    // Write your code here
public:
    void talk() const
    {
        cout << "Meow" << endl;
    }
};

class ToyFactory {
public:
    /**
     * @param type a string
     * @return Get object of the type
     */
    Toy* getToy(string& type) {
        // Write your code here
        Toy* pobj = nullptr;
        if (type == "Dog")
        {
            pobj = new Dog();
        }
        else
        {
            pobj = new Cat();
        }
        return pobj;
    }
};