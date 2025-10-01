#ifndef _Bug6215962_h_
#define _Bug6215962_h_
//$ class Bug6215962
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class ChoiceFormat;
		class DateFormatSymbols;
		class MessageFormat;
	}
}

class $export Bug6215962 : public ::java::lang::Object {
	$class(Bug6215962, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Bug6215962();
	void init$();
	static void check(::java::text::MessageFormat* f1, ::java::text::MessageFormat* f2, bool expected);
	static void check(::java::text::ChoiceFormat* f1, ::java::text::ChoiceFormat* f2, bool expected);
	static void check(::java::text::DateFormatSymbols* dfs1, ::java::text::DateFormatSymbols* dfs2, bool expected);
	static void main($StringArray* args);
	static void testChoiceFormat();
	static void testDateFormatSymbols();
	static void testMessageFormat();
};

#endif // _Bug6215962_h_