#ifndef _repeatingAnnotations_C3_h_
#define _repeatingAnnotations_C3_h_
//$ class repeatingAnnotations.C3
//$ extends repeatingAnnotations.C2

#include <repeatingAnnotations/C2.h>

namespace repeatingAnnotations {

class C3 : public ::repeatingAnnotations::C2 {
	$class(C3, $NO_CLASS_INIT, ::repeatingAnnotations::C2)
public:
	C3();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_C3_h_