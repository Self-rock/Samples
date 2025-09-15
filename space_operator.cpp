
struct Time1 {
    int hours;
    int minutes;
    int seconds;
// Один оператор вместо шести!
    auto operator<=>(const Time1& other) const = default;
    };


struct Time {
    int hours;
    int minutes;
    int seconds;
    //вместо шести этих
    bool operator<(const Time& other) const = default;
    bool operator==(const Time& other) const = default;
    bool operator<=(const Time& other) const = default;
    bool operator>(const Time& other) const = default;
    bool operator>=(const Time& other) const = default;
    bool operator!=(const Time& other) const = default;

    };