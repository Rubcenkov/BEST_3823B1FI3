int get_score(short sc, int start, int stop, int now){
    if (now <= start){
        return sc;}
    if (now >= stop){
        return (sc+1)/2;}
    if ((now > start) && (now < stop)){
        float res,score_half;
        int ans, res_int;
        score_half = sc/2;
        res = score_half / (stop - start) * (now - start) + 0.1;
        res_int = res; 
        ans = sc - res_int;
        return ans;}  
}