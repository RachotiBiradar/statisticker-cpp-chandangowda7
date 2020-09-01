#include <vector>

namespace Statistics {
    struct Stats
{
 float average;
 float max;
 float min;
};
 Stats ComputeStatistics(const std::vector<float>& a);
 float maxElement(const std::vector<float>& a);
 float minElement(const std::vector<float>& a);
}
