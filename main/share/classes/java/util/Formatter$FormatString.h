#ifndef _java_util_Formatter$FormatString_h_
#define _java_util_Formatter$FormatString_h_
//$ interface java.util.Formatter$FormatString
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace util {

class Formatter$FormatString : public ::java::lang::Object {
	$interface(Formatter$FormatString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t index() {return 0;}
	virtual void print(Object$* arg, ::java::util::Locale* l) {}
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_Formatter$FormatString_h_