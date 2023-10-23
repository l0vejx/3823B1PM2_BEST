int get_years(int seconds) {
    return 1970 + seconds / 32140800;
}

int get_month(int seconds) {
    return 0 + (seconds / 2678400) % 12;
}

int get_day(int seconds) {
    return 0 + (seconds / 86400) % 31;
}

int get_hours(int seconds) {
    return 0 + (seconds / 3600) % 24;
}

int get_minutes(int seconds) {
    return 0 + (seconds / 60) % 60;
}

int get_seconds(int seconds) {
    return 0 + seconds % 60;
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    return ;
    }