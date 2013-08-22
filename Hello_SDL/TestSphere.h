#pragma once
#include <iostream>

class TestSphere {
    public:
    void display();
    
    private:
    float spherevertexes[482][3] = { {-0.1950903, 0, 0.9807853}, {-0.3826835, 0, 0.9238795}, {-0.5555703, 0, 0.8314696}, {-0.7071068, 0, 0.7071068}, {-0.8314697, 0, 0.5555702}, {-0.9238795, 0, 0.3826834}, {-0.9807853, 0, 0.1950903}, {-1, 0, 0}, {-0.9807853, 0, -0.1950902}, {-0.9238796, 0, -0.3826833}, {-0.8314697, 0, -0.5555702}, {-0.7071068, 0, -0.7071068}, {-0.5555702, 0, -0.8314697}, {-0.3826833, 0, -0.9238796}, {-0.1950901, 0, -0.9807853}, {-0.1913417, 0.03806024, 0.9807853}, {-0.3753303, 0.07465785, 0.9238795}, {-0.5448951, 0.1083864, 0.8314695}, {-0.6935199, 0.1379497, 0.7071068}, {-0.8154932, 0.1622117, 0.5555701}, {-0.9061274, 0.18024, 0.3826834}, {-0.9619397, 0.1913418, 0.1950902}, {-0.9807853, 0.1950904, 1.19209e-7}, {-0.9619398, 0.1913418, -0.1950901}, {-0.9061275, 0.18024, -0.3826833}, {-0.8154932, 0.1622117, -0.5555702}, {-0.6935199, 0.1379497, -0.7071068}, {-0.5448951, 0.1083864, -0.8314697}, {-0.3753301, 0.07465785, -0.9238796}, {-0.1913415, 0.03806024, -0.9807853}, {-0.1802399, 0.07465791, 0.9807853}, {-0.3535534, 0.1464467, 0.9238795}, {-0.5132799, 0.2126076, 0.8314695}, {-0.6532814, 0.2705982, 0.7071068}, {-0.7681777, 0.3181897, 0.5555701}, {-0.8535533, 0.3535535, 0.3826834}, {-0.9061273, 0.3753304, 0.1950902}, {-0.9238795, 0.3826836, 1.19209e-7}, {-0.9061273, 0.3753304, -0.1950901}, {-0.8535534, 0.3535535, -0.3826833}, {-0.7681777, 0.3181897, -0.5555702}, {-0.6532814, 0.2705982, -0.7071068}, {-0.5132799, 0.2126076, -0.8314697}, {-0.3535532, 0.1464467, -0.9238796}, {-0.1802397, 0.07465785, -0.9807853}, {-0.1622115, 0.1083865, 0.9807853}, {-0.3181896, 0.2126077, 0.9238795}, {-0.4619396, 0.3086584, 0.8314695}, {-0.5879377, 0.3928477, 0.7071068}, {-0.6913416, 0.4619399, 0.5555701}, {-0.7681776, 0.5132801, 0.3826834}, {-0.8154929, 0.5448952, 0.1950902}, {-0.8314695, 0.5555704, 1.19209e-7}, {-0.815493, 0.5448952, -0.1950901}, {-0.7681777, 0.5132802, -0.3826833}, {-0.6913416, 0.4619399, -0.5555702}, {-0.5879377, 0.3928477, -0.7071068}, {-0.4619396, 0.3086584, -0.8314697}, {-0.3181895, 0.2126076, -0.9238796}, {-0.1622114, 0.1083864, -0.9807853}, {-0.1379495, 0.1379499, 0.9807853}, {-0.2705979, 0.2705983, 0.9238795}, {-0.3928473, 0.3928477, 0.8314695}, {-0.4999998, 0.5000002, 0.7071068}, {-0.5879376, 0.587938, 0.5555701}, {-0.6532813, 0.6532816, 0.3826834}, {-0.6935196, 0.6935201, 0.1950902}, {-0.7071067, 0.707107, 1.19209e-7}, {-0.6935197, 0.6935201, -0.1950901}, {-0.6532813, 0.6532817, -0.3826833}, {-0.5879376, 0.587938, -0.5555702}, {-0.4999998, 0.5000002, -0.7071068}, {-0.3928472, 0.3928477, -0.8314697}, {-0.2705978, 0.2705982, -0.9238796}, {-0.1379494, 0.1379497, -0.9807853}, {-0.1083862, 0.1622119, 0.9807853}, {-0.2126073, 0.3181899, 0.9238795}, {-0.3086581, 0.46194, 0.8314695}, {-0.3928472, 0.587938, 0.7071068}, {-0.4619395, 0.6913418, 0.5555701}, {-0.5132797, 0.7681779, 0.3826834}, {-0.5448948, 0.8154933, 0.1950902}, {-0.5555701, 0.8314698, 1.19209e-7}, {-0.5448948, 0.8154933, -0.1950901}, {-0.5132798, 0.768178, -0.3826833}, {-0.4619395, 0.6913418, -0.5555702}, {-0.3928472, 0.587938, -0.7071068}, {-0.308658, 0.4619399, -0.8314697}, {-0.2126072, 0.3181898, -0.9238796}, {-0.108386, 0.1622117, -0.9807853}, {-0.07465755, 0.1802402, 0.9807853}, {-0.1464463, 0.3535536, 0.9238795}, {-0.2126072, 0.5132802, 0.8314695}, {-0.2705977, 0.6532817, 0.7071068}, {-0.3181893, 0.7681778, 0.5555701}, {-0.3535531, 0.8535535, 0.3826834}, {-0.3753298, 0.9061275, 0.1950902}, {-0.3826832, 0.9238798, 1.19209e-7}, {-0.3753298, 0.9061275, -0.1950901}, {-0.3535531, 0.8535536, -0.3826833}, {-0.3181893, 0.7681778, -0.5555702}, {-0.2705977, 0.6532817, -0.7071068}, {-0.2126072, 0.5132802, -0.8314697}, {-0.1464463, 0.3535535, -0.9238796}, {-0.07465749, 0.18024, -0.9807853}, {-0.03805994, 0.1913419, 0.9807853}, {-0.07465749, 0.3753305, 0.9238795}, {-0.108386, 0.5448954, 0.8314695}, {-0.1379493, 0.6935201, 0.7071068}, {-0.1622112, 0.8154932, 0.5555701}, {-0.1802396, 0.9061276, 0.3826834}, {-0.1913412, 0.9619398, 0.1950902}, {-0.19509, 0.9807855, 1.19209e-7}, {-0.1913412, 0.9619398, -0.1950901}, {-0.1802396, 0.9061276, -0.3826833}, {-0.1622112, 0.8154932, -0.5555702}, {-0.1379493, 0.6935201, -0.7071068}, {-0.108386, 0.5448953, -0.8314697}, {-0.07465749, 0.3753304, -0.9238796}, {-0.03805989, 0.1913417, -0.9807853}, {3.44468e-7, 0.1950905, 0.9807853}, {3.63094e-7, 0.3826836, 0.9238795}, {3.63094e-7, 0.5555705, 0.8314695}, {4.00347e-7, 0.707107, 0.7071068}, {4.15248e-7, 0.8314696, 0.5555701}, {3.70545e-7, 0.9238796, 0.3826834}, {4.74853e-7, 0.9807853, 0.1950902}, {3.40743e-7, 1, 1.19209e-7}, {4.74853e-7, 0.9807853, -0.1950901}, {3.40743e-7, 0.9238798, -0.3826833}, {4.15248e-7, 0.8314696, -0.5555702}, {4.00347e-7, 0.707107, -0.7071068}, {3.92897e-7, 0.5555704, -0.8314697}, {3.55644e-7, 0.3826835, -0.9238796}, {3.14666e-7, 0.1950904, -0.9807853}, {0.0380606, 0.1913419, 0.9807853}, {0.07465821, 0.3753305, 0.9238795}, {0.1083868, 0.5448954, 0.8314695}, {0.1379501, 0.6935201, 0.7071068}, {0.1622121, 0.8154931, 0.5555701}, {0.1802403, 0.9061275, 0.3826834}, {0.1913422, 0.9619397, 0.1950902}, {0.1950907, 0.9807854, 1.19209e-7}, {0.1913422, 0.9619397, -0.1950901}, {0.1802403, 0.9061276, -0.3826833}, {0.1622121, 0.8154931, -0.5555702}, {0.1379501, 0.6935201, -0.7071068}, {0.1083868, 0.5448952, -0.8314697}, {0.07465821, 0.3753304, -0.9238796}, {0.03806054, 0.1913417, -0.9807853}, {0.07465827, 0.1802402, 0.9807853}, {0.146447, 0.3535535, 0.9238795}, {0.2126079, 0.5132802, 0.8314695}, {0.2705985, 0.6532816, 0.7071068}, {0.31819, 0.7681776, 0.5555701}, {0.3535538, 0.8535534, 0.3826834}, {0.3753307, 0.9061273, 0.1950902}, {0.3826838, 0.9238796, 1.19209e-7}, {0.3753307, 0.9061273, -0.1950901}, {0.3535538, 0.8535535, -0.3826833}, {0.31819, 0.7681776, -0.5555702}, {0.2705985, 0.6532816, -0.7071068}, {0.2126079, 0.51328, -0.8314697}, {0.146447, 0.3535535, -0.9238796}, {0.07465815, 0.18024, -0.9807853}, {0.1083868, 0.1622118, 0.9807853}, {0.2126079, 0.3181897, 0.9238795}, {0.3086588, 0.4619399, 0.8314695}, {0.392848, 0.5879379, 0.7071068}, {0.4619401, 0.6913416, 0.5555701}, {0.5132803, 0.7681778, 0.3826834}, {0.5448955, 0.815493, 0.1950902}, {0.5555706, 0.8314696, 1.19209e-7}, {0.5448955, 0.815493, -0.1950901}, {0.5132803, 0.7681779, -0.3826833}, {0.4619401, 0.6913416, -0.5555702}, {0.392848, 0.5879379, -0.7071068}, {0.3086587, 0.4619398, -0.8314697}, {0.2126079, 0.3181897, -0.9238796}, {0.1083867, 0.1622117, -0.9807853}, {0.1379502, 0.1379498, 0.9807853}, {0.2705985, 0.2705981, 0.9238795}, {0.392848, 0.3928476, 0.8314695}, {0.5000004, 0.5, 0.7071068}, {0.5879381, 0.5879377, 0.5555701}, {0.6532819, 0.6532815, 0.3826834}, {0.6935203, 0.6935198, 0.1950902}, {0.7071071, 0.7071067, 1.19209e-7}, {0.6935203, 0.6935198, -0.1950901}, {0.6532819, 0.6532816, -0.3826833}, {0.5879381, 0.5879377, -0.5555702}, {0.5000004, 0.5, -0.7071068}, {0.392848, 0.3928475, -0.8314697}, {0.2705984, 0.2705981, -0.9238796}, {0.13795, 0.1379497, -0.9807853}, {0.1622121, 0.1083865, 0.9807853}, {0.3181901, 0.2126075, 0.9238795}, {0.4619403, 0.3086583, 0.8314695}, {0.5879382, 0.3928474, 0.7071068}, {0.691342, 0.4619396, 0.5555701}, {0.7681782, 0.5132799, 0.3826834}, {0.8154934, 0.5448949, 0.1950902}, {0.83147, 0.5555701, 1.19209e-7}, {0.8154934, 0.5448949, -0.1950901}, {0.7681782, 0.51328, -0.3826833}, {0.691342, 0.4619396, -0.5555702}, {0.5879382, 0.3928474, -0.7071068}, {0.4619402, 0.3086583, -0.8314697}, {0.31819, 0.2126075, -0.9238796}, {0.162212, 0.1083863, -0.9807853}, {0.1802405, 0.07465785, 0.9807853}, {0.3535538, 0.1464466, 0.9238795}, {0.5132805, 0.2126075, 0.8314695}, {0.6532818, 0.270598, 0.7071068}, {0.768178, 0.3181895, 0.5555701}, {0.8535538, 0.3535533, 0.3826834}, {0.9061276, 0.3753301, 0.1950902}, {0.9238798, 0.3826833, 1.19209e-7}, {0.9061276, 0.3753301, -0.1950901}, {0.8535538, 0.3535534, -0.3826833}, {0.768178, 0.3181895, -0.5555702}, {0.6532818, 0.270598, -0.7071068}, {0.5132803, 0.2126075, -0.8314697}, {0.3535538, 0.1464466, -0.9238796}, {0.1802403, 0.07465779, -0.9807853}, {0.1913422, 0.03806024, 0.9807853}, {0.3753308, 0.07465779, 0.9238795}, {0.5448956, 0.1083863, 0.8314695}, {0.6935203, 0.1379496, 0.7071068}, {0.8154934, 0.1622115, 0.5555701}, {0.9061278, 0.1802398, 0.3826834}, {0.9619399, 0.1913415, 0.1950902}, {0.9807855, 0.1950902, 1.19209e-7}, {0.9619399, 0.1913415, -0.1950901}, {0.9061279, 0.1802399, -0.3826833}, {0.8154934, 0.1622115, -0.5555702}, {0.6935203, 0.1379496, -0.7071068}, {0.5448955, 0.1083863, -0.8314697}, {0.3753306, 0.07465779, -0.9238796}, {0.191342, 0.03806018, -0.9807853}, {0.1950908, 0, 0.9807853}, {0.3826839, 0, 0.9238795}, {0.5555707, 0, 0.8314695}, {0.7071071, 0, 0.7071068}, {0.8314698, 0, 0.5555701}, {0.9238799, -1.49012e-7, 0.3826834}, {0.9807854, -1.49012e-7, 0.1950902}, {1, 0, 1.19209e-7}, {0.9807854, -1.49012e-7, -0.1950901}, {0.9238799, 0, -0.3826833}, {0.8314698, 0, -0.5555702}, {0.7071071, 0, -0.7071068}, {0.5555706, 0, -0.8314697}, {0.3826838, 0, -0.9238796}, {0.1950906, 0, -0.9807853}, {3.25841e-7, 0, -1}, {0.1913422, -0.0380603, 0.9807853}, {0.3753307, -0.07465791, 0.9238795}, {0.5448955, -0.1083865, 0.8314695}, {0.6935202, -0.1379497, 0.7071068}, {0.8154933, -0.1622117, 0.5555701}, {0.9061278, -0.1802401, 0.3826834}, {0.9619399, -0.1913418, 0.1950902}, {0.9807854, -0.1950904, 1.19209e-7}, {0.9619399, -0.1913418, -0.1950901}, {0.9061278, -0.18024, -0.3826833}, {0.8154933, -0.1622117, -0.5555702}, {0.6935202, -0.1379497, -0.7071068}, {0.5448954, -0.1083865, -0.8314697}, {0.3753306, -0.07465785, -0.9238796}, {0.191342, -0.03806018, -0.9807853}, {0.1802404, -0.07465791, 0.9807853}, {0.3535538, -0.1464467, 0.9238795}, {0.5132803, -0.2126076, 0.8314695}, {0.6532817, -0.2705981, 0.7071068}, {0.7681779, -0.3181897, 0.5555701}, {0.8535537, -0.3535535, 0.3826834}, {0.9061275, -0.3753303, 0.1950902}, {0.9238796, -0.3826835, 1.19209e-7}, {0.9061275, -0.3753303, -0.1950901}, {0.8535537, -0.3535535, -0.3826833}, {0.7681779, -0.3181897, -0.5555702}, {0.6532817, -0.2705981, -0.7071068}, {0.5132802, -0.2126076, -0.8314697}, {0.3535538, -0.1464466, -0.9238796}, {0.1802402, -0.07465779, -0.9807853}, {0.1622121, -0.1083865, 0.9807853}, {0.31819, -0.2126076, 0.9238795}, {0.4619401, -0.3086584, 0.8314695}, {0.587938, -0.3928475, 0.7071068}, {0.6913418, -0.4619398, 0.5555701}, {0.768178, -0.5132801, 0.3826834}, {0.8154932, -0.5448952, 0.1950902}, {0.8314696, -0.5555702, 1.19209e-7}, {0.8154932, -0.5448952, -0.1950901}, {0.7681781, -0.51328, -0.3826833}, {0.6913418, -0.4619398, -0.5555702}, {0.587938, -0.3928475, -0.7071068}, {0.46194, -0.3086584, -0.8314697}, {0.31819, -0.2126075, -0.9238796}, {0.162212, -0.1083863, -0.9807853}, {0.1379501, -0.1379498, 0.9807853}, {0.2705984, -0.2705982, 0.9238795}, {0.3928478, -0.3928476, 0.8314695}, {0.5000002, -0.5, 0.7071068}, {0.5879379, -0.5879377, 0.5555701}, {0.6532817, -0.6532816, 0.3826834}, {0.69352, -0.6935199, 0.1950902}, {0.7071068, -0.7071067, 1.19209e-7}, {0.69352, -0.6935199, -0.1950901}, {0.6532818, -0.6532816, -0.3826833}, {0.5879379, -0.5879377, -0.5555702}, {0.5000002, -0.5, -0.7071068}, {0.3928477, -0.3928475, -0.8314697}, {0.2705984, -0.2705981, -0.9238796}, {0.13795, -0.1379497, -0.9807853}, {0.1083868, -0.1622118, 0.9807853}, {0.2126078, -0.3181897, 0.9238795}, {0.3086585, -0.4619399, 0.8314695}, {0.3928477, -0.5879378, 0.7071068}, {0.4619399, -0.6913416, 0.5555701}, {0.5132802, -0.7681778, 0.3826834}, {0.5448951, -0.8154931, 0.1950902}, {0.5555703, -0.8314694, 1.19209e-7}, {0.5448951, -0.8154931, -0.1950901}, {0.5132802, -0.7681779, -0.3826833}, {0.4619399, -0.6913416, -0.5555702}, {0.3928477, -0.5879378, -0.7071068}, {0.3086585, -0.4619398, -0.8314697}, {0.2126078, -0.3181897, -0.9238796}, {0.1083866, -0.1622116, -0.9807853}, {0.07465815, -0.1802401, 0.9807853}, {0.1464469, -0.3535535, 0.9238795}, {0.2126078, -0.51328, 0.8314695}, {0.2705982, -0.6532815, 0.7071068}, {0.3181898, -0.7681776, 0.5555701}, {0.3535535, -0.8535534, 0.3826834}, {0.3753303, -0.9061273, 0.1950902}, {0.3826835, -0.9238793, 1.19209e-7}, {0.3753303, -0.9061273, -0.1950901}, {0.3535536, -0.8535535, -0.3826833}, {0.3181898, -0.7681776, -0.5555702}, {0.2705982, -0.6532815, -0.7071068}, {0.2126077, -0.51328, -0.8314697}, {0.1464469, -0.3535534, -0.9238796}, {0.07465809, -0.1802399, -0.9807853}, {0.03806054, -0.1913418, 0.9807853}, {0.07465809, -0.3753304, 0.9238795}, {0.1083866, -0.5448952, 0.8314695}, {0.1379499, -0.6935199, 0.7071068}, {0.1622118, -0.8154929, 0.5555701}, {0.1802401, -0.9061274, 0.3826834}, {0.1913418, -0.9619395, 0.1950902}, {0.1950904, -0.980785, 1.19209e-7}, {0.1913418, -0.9619395, -0.1950901}, {0.1802401, -0.9061275, -0.3826833}, {0.1622118, -0.8154929, -0.5555702}, {0.1379499, -0.6935199, -0.7071068}, {0.1083866, -0.5448951, -0.8314697}, {0.07465815, -0.3753303, -0.9238796}, {0.03806048, -0.1913416, -0.9807853}, {2.77413e-7, -0.1950904, 0.9807853}, {2.51336e-7, -0.3826835, 0.9238795}, {2.28984e-7, -0.5555703, 0.8314695}, {2.21533e-7, -0.7071067, 0.7071068}, {2.21533e-7, -0.8314694, 0.5555701}, {1.47027e-7, -0.9238795, 0.3826834}, {0, -0.980785, 0.1950902}, {1.61929e-7, -0.9999996, 1.19209e-7}, {0, -0.980785, -0.1950901}, {1.7683e-7, -0.9238796, -0.3826833}, {2.21533e-7, -0.8314694, -0.5555702}, {2.21533e-7, -0.7071067, -0.7071068}, {2.14083e-7, -0.5555701, -0.8314697}, {3.1094e-7, -0.3826835, -0.9238796}, {3.14666e-7, -0.1950902, -0.9807853}, {-0.03805994, -0.1913418, 0.9807853}, {-0.07465755, -0.3753303, 0.9238795}, {-0.1083861, -0.5448951, 0.8314695}, {-0.1379494, -0.6935198, 0.7071068}, {-0.1622114, -0.8154929, 0.5555701}, {-0.1802397, -0.9061273, 0.3826834}, {-0.1913415, -0.9619393, 0.1950902}, {-0.1950901, -0.9807848, 1.19209e-7}, {-0.1913415, -0.9619393, -0.1950901}, {-0.1802397, -0.9061275, -0.3826833}, {-0.1622114, -0.8154929, -0.5555702}, {-0.1379494, -0.6935198, -0.7071068}, {-0.1083861, -0.544895, -0.8314697}, {-0.07465749, -0.3753303, -0.9238796}, {-0.03805989, -0.1913416, -0.9807853}, {-0.07465755, -0.18024, 0.9807853}, {-0.1464464, -0.3535534, 0.9238795}, {-0.2126073, -0.5132799, 0.8314695}, {-0.2705978, -0.6532813, 0.7071068}, {-0.3181893, -0.7681775, 0.5555701}, {-0.3535532, -0.8535532, 0.3826834}, {-0.37533, -0.906127, 0.1950902}, {-0.3826831, -0.923879, 1.19209e-7}, {-0.37533, -0.906127, -0.1950901}, {-0.3535532, -0.8535534, -0.3826833}, {-0.3181893, -0.7681775, -0.5555702}, {-0.2705978, -0.6532813, -0.7071068}, {-0.2126072, -0.5132798, -0.8314697}, {-0.1464463, -0.3535534, -0.9238796}, {-0.07465749, -0.1802399, -0.9807853}, {-0.1083861, -0.1622117, 0.9807853}, {-0.2126073, -0.3181897, 0.9238795}, {-0.308658, -0.4619397, 0.8314695}, {-0.3928472, -0.5879377, 0.7071068}, {-0.4619393, -0.6913414, 0.5555701}, {-0.5132797, -0.7681775, 0.3826834}, {-0.5448948, -0.8154927, 0.1950902}, {-0.5555698, -0.831469, 1.19209e-7}, {-0.5448948, -0.8154927, -0.1950901}, {-0.5132798, -0.7681777, -0.3826833}, {-0.4619393, -0.6913414, -0.5555702}, {-0.3928472, -0.5879377, -0.7071068}, {-0.308658, -0.4619396, -0.8314697}, {-0.2126072, -0.3181896, -0.9238796}, {-0.108386, -0.1622115, -0.9807853}, {0, -2.30404e-7, 1}, {-0.1379495, -0.1379497, 0.9807853}, {-0.2705978, -0.2705981, 0.9238795}, {-0.3928472, -0.3928474, 0.8314695}, {-0.4999997, -0.4999998, 0.7071068}, {-0.5879373, -0.5879375, 0.5555701}, {-0.6532812, -0.6532812, 0.3826834}, {-0.6935195, -0.6935195, 0.1950902}, {-0.7071062, -0.7071062, 1.19209e-7}, {-0.6935195, -0.6935195, -0.1950901}, {-0.6532813, -0.6532814, -0.3826833}, {-0.5879373, -0.5879375, -0.5555702}, {-0.4999997, -0.4999998, -0.7071068}, {-0.3928471, -0.3928472, -0.8314697}, {-0.2705978, -0.270598, -0.9238796}, {-0.1379493, -0.1379496, -0.9807853}, {-0.1622114, -0.1083863, 0.9807853}, {-0.3181894, -0.2126075, 0.9238795}, {-0.4619395, -0.3086582, 0.8314695}, {-0.5879375, -0.3928473, 0.7071068}, {-0.6913412, -0.4619395, 0.5555701}, {-0.7681775, -0.5132797, 0.3826834}, {-0.8154926, -0.5448947, 0.1950902}, {-0.8314689, -0.5555697, 1.19209e-7}, {-0.8154926, -0.5448947, -0.1950901}, {-0.7681775, -0.5132799, -0.3826833}, {-0.6913412, -0.4619395, -0.5555702}, {-0.5879375, -0.3928473, -0.7071068}, {-0.4619394, -0.3086581, -0.8314697}, {-0.3181893, -0.2126075, -0.9238796}, {-0.1622112, -0.1083863, -0.9807853}, {-0.1802397, -0.07465779, 0.9807853}, {-0.3535531, -0.1464465, 0.9238795}, {-0.5132797, -0.2126074, 0.8314695}, {-0.6532812, -0.2705979, 0.7071068}, {-0.7681771, -0.3181894, 0.5555701}, {-0.8535531, -0.3535531, 0.3826834}, {-0.9061268, -0.3753299, 0.1950902}, {-0.9238787, -0.3826829, 1.19209e-7}, {-0.9061268, -0.3753299, -0.1950901}, {-0.8535531, -0.3535532, -0.3826833}, {-0.7681771, -0.3181894, -0.5555702}, {-0.6532812, -0.2705979, -0.7071068}, {-0.5132796, -0.2126073, -0.8314697}, {-0.3535531, -0.1464465, -0.9238796}, {-0.1802395, -0.07465773, -0.9807853}, {-0.1913415, -0.03806018, 0.9807853}, {-0.37533, -0.07465779, 0.9238795}, {-0.5448948, -0.1083862, 0.8314695}, {-0.6935195, -0.1379495, 0.7071068}, {-0.8154925, -0.1622115, 0.5555701}, {-0.906127, -0.1802396, 0.3826834}, {-0.961939, -0.1913414, 0.1950902}, {-0.9807844, -0.1950899, 1.19209e-7}, {-0.961939, -0.1913414, -0.1950901}, {-0.9061271, -0.1802397, -0.3826833}, {-0.8154925, -0.1622115, -0.5555702}, {-0.6935195, -0.1379495, -0.7071068}, {-0.5448946, -0.1083862, -0.8314697}, {-0.37533, -0.07465779, -0.9238796}, {-0.1913412, -0.03806018, -0.9807853} } ;
};