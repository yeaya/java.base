#ifndef _repeatingAnnotations_ExpectedAssociated_h_
#define _repeatingAnnotations_ExpectedAssociated_h_
//$ interface repeatingAnnotations.ExpectedAssociated
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace repeatingAnnotations {
	class Ann;
}

namespace repeatingAnnotations {

class ExpectedAssociated : public ::java::lang::annotation::Annotation {
	$interface(ExpectedAssociated, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::repeatingAnnotations::Ann>* value() {return nullptr;}
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_ExpectedAssociated_h_