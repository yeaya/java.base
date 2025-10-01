#ifndef _ReferenceRefersTo_h_
#define _ReferenceRefersTo_h_
//$ class ReferenceRefersTo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}

class $export ReferenceRefersTo : public ::java::lang::Object {
	$class(ReferenceRefersTo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReferenceRefersTo();
	void init$();
	static void fail($String* msg);
	static void main($StringArray* args);
	static void test(::java::lang::ref::Reference* ref, Object$* expectedValue, Object$* unexpectedValue, $String* kind);
};

#endif // _ReferenceRefersTo_h_