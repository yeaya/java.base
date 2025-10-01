#ifndef _foo_MyAnnotation_h_
#define _foo_MyAnnotation_h_
//$ interface foo.MyAnnotation
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace foo {

class $export MyAnnotation : public ::java::lang::annotation::Annotation {
	$interface(MyAnnotation, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
};

} // foo

#endif // _foo_MyAnnotation_h_