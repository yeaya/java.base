#ifndef _repeatingAnnotations_C2_h_
#define _repeatingAnnotations_C2_h_
//$ class repeatingAnnotations.C2
//$ extends repeatingAnnotations.C1

#include <repeatingAnnotations/C1.h>

namespace repeatingAnnotations {

class C2 : public ::repeatingAnnotations::C1 {
	$class(C2, $NO_CLASS_INIT, ::repeatingAnnotations::C1)
public:
	C2();
	void init$();
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_C2_h_