#ifndef _repeatingAnnotations_B3_h_
#define _repeatingAnnotations_B3_h_
//$ class repeatingAnnotations.B3
//$ extends repeatingAnnotations.B2

#include <repeatingAnnotations/B2.h>

namespace repeatingAnnotations {

class B3 : public ::repeatingAnnotations::B2 {
	$class(B3, $NO_CLASS_INIT, ::repeatingAnnotations::B2)
public:
	B3();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_B3_h_