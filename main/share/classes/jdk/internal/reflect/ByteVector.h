#ifndef _jdk_internal_reflect_ByteVector_h_
#define _jdk_internal_reflect_ByteVector_h_
//$ interface jdk.internal.reflect.ByteVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class ByteVector : public ::java::lang::Object {
	$interface(ByteVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void add(int8_t value) {}
	virtual int8_t get(int32_t index) {return 0;}
	virtual $bytes* getData() {return nullptr;}
	virtual int32_t getLength() {return 0;}
	virtual void put(int32_t index, int8_t value) {}
	virtual void trim() {}
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ByteVector_h_