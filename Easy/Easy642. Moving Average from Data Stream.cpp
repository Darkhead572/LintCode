/*

requirements

642. Moving Average from Data Stream
Given a stream of integers and a window size, calculate the moving average of all integers in the sliding window.

Example
Example 1:

MovingAverage m = new MovingAverage(3);
m.next(1) = 1 // return 1.00000
m.next(10) = (1 + 10) / 2 // return 5.50000
m.next(3) = (1 + 10 + 3) / 3 // return 4.66667
m.next(5) = (10 + 3 + 5) / 3 // return 6.00000
*/

class MovingAverage {
public:
    /*
    * @param size: An integer
    */MovingAverage(int size) {
        // do intialization if necessary
        this -> size = size;
        sum = 0;
    }
    /*
     * @param val: An integer
     * @return:  
     */
    double next(int val) {
        // write your code here
        sum += val;
        q.push(val);
        int qSize = q.size();
        if (qSize <= size)
        {
            return sum / qSize;
        } 
        else
        {
            sum -= q.front();
            q.pop();
            return sum / size;
        }
    }
private:
    queue<int> q;
    int size;
    double sum;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param = obj.next(val);
 */