int get_time(long long angle) {
    return (angle / 360) * 100 + (angle - ((angle / 360) * 360))/6;
}