#ifndef _Bug4944439_h_
#define _Bug4944439_h_
//$ class Bug4944439
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class DecimalFormat;
	}
}

class $export Bug4944439 : public ::java::lang::Object {
	$class(Bug4944439, 0, ::java::lang::Object)
public:
	Bug4944439();
	void init$();
	static void check_Double($String* s);
	static void check_Long($String* s);
	static void main($StringArray* args);
	static void test(int64_t from, int64_t to);
	static bool err;
	static ::java::text::DecimalFormat* df;
};

#endif // _Bug4944439_h_