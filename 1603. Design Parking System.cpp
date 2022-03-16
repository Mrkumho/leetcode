// Runtime: 70 ms, faster than 65.65% of C++ online submissions for Design Parking System.
// Memory Usage: 33.1 MB, less than 35.85% of C++ online submissions for Design Parking System.

class ParkingSystem {
private:
    int bLen,mLen,sLen;
public:
    ParkingSystem(int big, int medium, int small) {
        this->bLen = big;
        this->mLen = medium;
        this->sLen = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case(1):
                return --bLen >=0;
            case(2):
                return --mLen >= 0;
            case(3):
                return --sLen >=0;
            default:
                return false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */