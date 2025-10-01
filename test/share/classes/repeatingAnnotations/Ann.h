#ifndef _repeatingAnnotations_Ann_h_
#define _repeatingAnnotations_Ann_h_
//$ interface repeatingAnnotations.Ann
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace repeatingAnnotations {

class Ann : public ::java::lang::annotation::Annotation {
	$interface(Ann, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int32_t value() {return 0;}
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_Ann_h_