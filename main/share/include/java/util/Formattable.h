#ifndef _java_util_Formattable_h_
#define _java_util_Formattable_h_
//$ interface java.util.Formattable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Formatter;
	}
}

namespace java {
	namespace util {

class $import Formattable : public ::java::lang::Object {
	$interface(Formattable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void formatTo(::java::util::Formatter* formatter, int32_t flags, int32_t width, int32_t precision) {}
};

	} // util
} // java

#endif // _java_util_Formattable_h_