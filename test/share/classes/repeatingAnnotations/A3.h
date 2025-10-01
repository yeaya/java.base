#ifndef _repeatingAnnotations_A3_h_
#define _repeatingAnnotations_A3_h_
//$ class repeatingAnnotations.A3
//$ extends repeatingAnnotations.A2

#include <repeatingAnnotations/A2.h>

namespace repeatingAnnotations {

class A3 : public ::repeatingAnnotations::A2 {
	$class(A3, $NO_CLASS_INIT, ::repeatingAnnotations::A2)
public:
	A3();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_A3_h_