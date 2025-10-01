#ifndef _jdk_internal_reflect_SignatureIterator_h_
#define _jdk_internal_reflect_SignatureIterator_h_
//$ class jdk.internal.reflect.SignatureIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class SignatureIterator : public ::java::lang::Object {
	$class(SignatureIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureIterator();
	void init$($String* sig);
	virtual bool atEnd();
	virtual $String* next();
	virtual void reset();
	virtual $String* returnType();
	$String* sig = nullptr;
	int32_t idx = 0;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_SignatureIterator_h_