#ifndef _repeatingAnnotations_D2_h_
#define _repeatingAnnotations_D2_h_
//$ class repeatingAnnotations.D2
//$ extends repeatingAnnotations.D1

#include <repeatingAnnotations/D1.h>

namespace repeatingAnnotations {

class D2 : public ::repeatingAnnotations::D1 {
	$class(D2, $NO_CLASS_INIT, ::repeatingAnnotations::D1)
public:
	D2();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_D2_h_