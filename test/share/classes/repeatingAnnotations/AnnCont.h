#ifndef _repeatingAnnotations_AnnCont_h_
#define _repeatingAnnotations_AnnCont_h_
//$ interface repeatingAnnotations.AnnCont
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace repeatingAnnotations {
	class Ann;
}

namespace repeatingAnnotations {

class AnnCont : public ::java::lang::annotation::Annotation {
	$interface(AnnCont, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $Array<::repeatingAnnotations::Ann>* value() {return nullptr;}
};

} // repeatingAnnotations

#endif // _repeatingAnnotations_AnnCont_h_