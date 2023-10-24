int get_time(long long angl) {
    int min, ch, sec;
    if (angl<360){
        return angl/6;}
    else if(angl>=360 && angl<3600){
        min = angl/360;
        sec = (angl-(min*360))/6;
        return min*100+sec;}
    else{
        chas = angl/3600;
        min = (angl-(ch*3600))/360;
        sec = (angl-(ch*3600)-(min*360))/6;
        return ((ch*10)+min)*100+sec;}
}