class ParkingSystem {
    int big,medium,small;
public:
    ParkingSystem(int big, int medium, int small) {
       this->big=big;
       this->medium=medium;
       this->small=small;
    }
    
    bool addCar(int cartype) {
         if(cartype==1)
        {
            if(this->big)
            {this->big--;
            return true;
            }
            else
                return false;
        }
        
        if(cartype==2)
        {
            if(this->medium)
                {this->medium--;
                return true;
                }
            else
                return false;
            
        }
        if(cartype==3)
        {
            if(this->small)
            {this->small--;
            return true;
            }
            else
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