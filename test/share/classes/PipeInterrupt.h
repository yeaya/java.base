#ifndef _PipeInterrupt_h_
#define _PipeInterrupt_h_
//$ class PipeInterrupt
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

class $export PipeInterrupt : public ::java::lang::Object {
	$class(PipeInterrupt, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PipeInterrupt();
	void init$();
	static void main($StringArray* args);
	virtual void test();
	::java::lang::Exception* exc = nullptr;
};

#endif // _PipeInterrupt_h_