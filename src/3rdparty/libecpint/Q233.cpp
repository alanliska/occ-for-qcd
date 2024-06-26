// Generated as part of Libecpint, Copyright 2017 Robert A Shaw
#include "qgen.hpp"
namespace libecpint {
namespace qgen {
void Q2_3_3(const ECP& U, const GaussianShell& shellA, const GaussianShell& shellB, const FiveIndex<double> &CA, const FiveIndex<double> &CB, const TwoIndex<double> &SA, const TwoIndex<double> &SB, const double Am, const double Bm, const RadialIntegral &radint, const AngularIntegral& angint, const RadialIntegral::Parameters& parameters, ThreeIndex<double> &values) {

	std::vector<Triple> radial_triples_A = {
		Triple{0, 3, 3},
		Triple{1, 2, 3},
		Triple{1, 3, 4},
		Triple{2, 1, 3},
		Triple{2, 2, 2},
		Triple{2, 2, 4},
		Triple{2, 3, 3},
		Triple{2, 3, 5},
		Triple{2, 4, 4},
		Triple{3, 1, 2},
		Triple{3, 1, 4},
		Triple{3, 2, 3},
		Triple{3, 2, 5},
		Triple{3, 3, 4},
		Triple{3, 3, 6},
		Triple{3, 4, 5},
		Triple{4, 1, 1},
		Triple{4, 1, 3},
		Triple{4, 1, 5},
		Triple{4, 2, 2},
		Triple{4, 2, 4},
		Triple{4, 2, 6},
		Triple{4, 3, 3},
		Triple{4, 3, 5},
		Triple{4, 4, 4},
		Triple{4, 4, 6},
		Triple{4, 5, 5},
		Triple{5, 1, 2},
		Triple{5, 1, 4},
		Triple{5, 1, 6},
		Triple{5, 3, 4},
		Triple{5, 3, 6},
		Triple{5, 5, 6}	};

	ThreeIndex<double> radials(9, 6, 7);
	radint.type2(radial_triples_A, 9, 3, U, shellA, shellB, Am, Bm, radials);

	std::vector<Triple> radial_triples_B = {
		Triple{1, 2, 3},
		Triple{1, 3, 4},
		Triple{2, 1, 3},
		Triple{2, 2, 4},
		Triple{2, 3, 5},
		Triple{3, 1, 2},
		Triple{3, 0, 3},
		Triple{3, 2, 3},
		Triple{3, 1, 4},
		Triple{3, 3, 4},
		Triple{3, 2, 5},
		Triple{3, 4, 5},
		Triple{4, 0, 2},
		Triple{4, 1, 3},
		Triple{4, 0, 4},
		Triple{4, 2, 4},
		Triple{4, 1, 5},
		Triple{4, 3, 5},
		Triple{5, 0, 1},
		Triple{5, 0, 3},
		Triple{5, 2, 3},
		Triple{5, 0, 5},
		Triple{5, 2, 5},
		Triple{5, 4, 5}	};

	ThreeIndex<double> radials_B(9, 7, 6);
	radint.type2(radial_triples_B, 9, 3, U, shellB, shellA, Bm, Am, radials_B);
	for (Triple& t : radial_triples_B) radials(std::get<0>(t), std::get<2>(t), std::get<1>(t)) = radials_B(std::get<0>(t), std::get<1>(t), std::get<2>(t));

	rolled_up(3, 2, 3, radials, CA, CB, SA, SB, angint, values);
}
}
}
