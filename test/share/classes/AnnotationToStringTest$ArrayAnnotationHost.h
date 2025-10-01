#ifndef _AnnotationToStringTest$ArrayAnnotationHost_h_
#define _AnnotationToStringTest$ArrayAnnotationHost_h_
//$ class AnnotationToStringTest$ArrayAnnotationHost
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace annotation {
			class RetentionPolicy;
		}
	}
}

class $export AnnotationToStringTest$ArrayAnnotationHost : public ::java::lang::Object {
	$class(AnnotationToStringTest$ArrayAnnotationHost, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnnotationToStringTest$ArrayAnnotationHost();
	void init$();
	$booleans* f0 = nullptr;
	$floats* f1 = nullptr;
	$doubles* f2 = nullptr;
	$bytes* f3 = nullptr;
	$shorts* f4 = nullptr;
	$chars* f5 = nullptr;
	$ints* f6 = nullptr;
	$longs* f7 = nullptr;
	$StringArray* f8 = nullptr;
	$ClassArray* f9 = nullptr;
	$Array<::java::lang::annotation::RetentionPolicy>* f10 = nullptr;
};

#endif // _AnnotationToStringTest$ArrayAnnotationHost_h_