#ifndef _Bug8072099_h_
#define _Bug8072099_h_
//$ class Bug8072099
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class SimpleDateFormat;
	}
}

class $export Bug8072099 : public ::java::lang::Object {
	$class(Bug8072099, 0, ::java::lang::Object)
public:
	Bug8072099();
	void init$();
	static void main($StringArray* args);
	static void parseDateTimeInput(::java::text::SimpleDateFormat* format, $String* inputString);
	static $Array<::java::lang::String, 2>* shouldPass;
};

#endif // _Bug8072099_h_