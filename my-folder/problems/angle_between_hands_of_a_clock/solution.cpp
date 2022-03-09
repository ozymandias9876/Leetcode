class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourm=hour+minutes*1.0/60;
        hourm=hourm*30;
        //hourm=int(hourm);
        hourm=fmod(hourm,360);
        
        
        minutes=((minutes)*6)%360;
        double angle=abs(hourm-minutes);
        angle=min(abs(360-angle),angle);
        //cout<<hourm<<endl;
        
        
        return fmod(angle,360);
        
        
    }
};