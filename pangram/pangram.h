#if !defined(PANGRAM_H)
#define PANGRAM_H

#include <string>

namespace pangram {
    bool is_pangram(const std::string& text);
}  // namespace pangram

#endif // PANGRAM_H