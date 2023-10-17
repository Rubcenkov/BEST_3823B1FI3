int monthday(int month, int year){
    switch(month){
        case 1: return 31; 
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
    }
    if (year%4 == 0){
        if (year%100 == 0){
            if (year%400 == 0){
                return 29;}
            return 28;}
        return 29;}
    return 28;
}
