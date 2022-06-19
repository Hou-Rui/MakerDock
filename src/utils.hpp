#ifndef SRC_UTILS_HPP
#define SRC_UTILS_HPP

#define UTILS_DEFINE_REF(ClassName) \
    using Ref = QSharedPointer<ClassName>;

namespace Utils {
template <typename Tp, typename Tq>
inline auto roundDiv(Tp p, Tq q) {
    if ((p < 0) != (q < 0)) {
        return (p - q / 2) / q;
    }
    return (p + q / 2) / q;
}
}  // namespace Utils

#endif /* SRC_UTILS_HPP */
