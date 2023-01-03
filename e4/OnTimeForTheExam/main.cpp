#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    int hour_exam, min_exam, hour_came, min_came, time_hour, time_min, time;
    int time_came, time_exam;

    cin >> hour_exam >> min_exam >> hour_came >> min_came;

    time_came = hour_came * 60 + min_came;
    time_exam = hour_exam * 60+ min_exam;
    time = time_exam - time_came;
    time_hour = time / 60;
    time_min = time % 60;



    if (time_came == time_exam || (time_exam - time_came) <= 30 && time > 0) {
        if (time == 0) {
        cout << "On time" << endl;
        } else {
            cout << "On time" << endl;
            cout << time << " minutes before the start" << endl;
        }
    } else if (time >= 30) {
        cout << "Early" << endl;
        if (time < 60) {
            cout << time_min << " minutes before the start" << endl;
        } else {
            if (time_min < 10) {
                    cout << time_hour << ":0" << time_min << " hours before the start" << endl;
                } else {
                    cout << time_hour << ":" << time_min << " hours before the start" << endl;
                }
        }
    } else {
        cout << "Late" << endl;
        time = abs(time);
        if (time <60 ) {
            cout << time << " minutes after the start" << endl;
        } else if (time >= 60) {
            if (abs(time_min) < 10) {
                cout << abs(time_hour) << ":0" << abs(time_min) << " hours after the start" << endl;
            } else {
                cout << abs(time_hour) << ":" << abs(time_min) << " hours after the start" << endl;
            }
        }
    }



    return 0;
}