#ifndef _repeatingAnnotations_B2_h_
#define _repeatingAnnotations_B2_h_
//$ class repeatingAnnotations.B2
//$ extends repeatingAnnotations.B1

#include <repeatingAnnotations/B1.h>

namespace repeatingAnnotations {

class B2 : public ::repeatingAnnotations::B1 {
	$class(B2, $NO_CLASS_INIT, ::repeatingAnnotations::B1)
public:
	B2();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_B2_h_