#ifndef _java_util_EnumMap$1_h_
#define _java_util_EnumMap$1_h_
//$ class java.util.EnumMap$1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {

class EnumMap$1 : public ::java::lang::Object {
	$class(EnumMap$1, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	EnumMap$1();
	void init$();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_EnumMap$1_h_