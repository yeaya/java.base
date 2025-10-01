#ifndef _TestAnnotation_h_
#define _TestAnnotation_h_
//$ interface TestAnnotation
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

class TestAnnotation : public ::java::lang::annotation::Annotation {
	$interface(TestAnnotation, 0, ::java::lang::annotation::Annotation)
public:
	static void lambda$static$0();
	static ::java::lang::Runnable* r;
};

#endif // _TestAnnotation_h_