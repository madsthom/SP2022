//
// Created by mads on 2/18/22.
//

#ifndef SP2022_NUMBER_SERIES_HPP
#define SP2022_NUMBER_SERIES_HPP

class number_series {
private:
    std::vector<int> numbers;
    int max_value = std::numeric_limits<int>::min();
    int min_value = std::numeric_limits<int>::max();
public:
    number_series() = default;
    explicit number_series(std::vector<int> input_numbers);

    void append(int number);

    size_t size() const;

    void print();

    int max() const { return max_value; }

    int min() const { return min_value; }

    static number_series make_random(int length);

    friend number_series operator+(number_series const& ns1, number_series const& ns2);
};

#endif //SP2022_NUMBER_SERIES_HPP
