#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).
    int left_index = 0;
    int right_index = data.size() - 1;
    while (left_index <= right_index) {
      int index_med = (left_index + right_index) / 2;
      if (data[index_med] == search_element) {
        return index_med;
      }
      if (data[index_med] < search_element) {
        left_index++;
      } else {
        right_index--;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment