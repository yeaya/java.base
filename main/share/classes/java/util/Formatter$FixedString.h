#ifndef _java_util_Formatter$FixedString_h_
#define _java_util_Formatter$FixedString_h_
//$ class java.util.Formatter$FixedString
//$ extends java.util.Formatter$FormatString

#include <java/util/Formatter$FormatString.h>

namespace java {
	namespace util {
		class Formatter;
		class Locale;
	}
}

namespace java {
	namespace util {

class Formatter$FixedString : public ::java::util::Formatter$FormatString {
	$class(Formatter$FixedString, $NO_CLASS_INIT, ::java::util::Formatter$FormatString)
public:
	Formatter$FixedString();
	void init$(::java::util::Formatter* this$0, $String* s, int32_t start, int32_t end);
	virtual int32_t index() override;
	virtual void print(Object$* arg, ::java::util::Locale* l) override;
	virtual $String* toString() override;
	::java::util::Formatter* this$0 = nullptr;
	$String* s = nullptr;
	int32_t start = 0;
	int32_t end = 0;
};

	} // util
} // java

#endif // _java_util_Formatter$FixedString_h_