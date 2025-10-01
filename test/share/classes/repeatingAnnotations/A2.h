#ifndef _repeatingAnnotations_A2_h_
#define _repeatingAnnotations_A2_h_
//$ class repeatingAnnotations.A2
//$ extends repeatingAnnotations.A1

#include <repeatingAnnotations/A1.h>

namespace repeatingAnnotations {

class A2 : public ::repeatingAnnotations::A1 {
	$class(A2, $NO_CLASS_INIT, ::repeatingAnnotations::A1)
public:
	A2();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_A2_h_