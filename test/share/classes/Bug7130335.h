#ifndef _Bug7130335_h_
#define _Bug7130335_h_
//$ class Bug7130335
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LA")
#undef LA
#pragma push_macro("LONDON")
#undef LONDON
#pragma push_macro("ZONES")
#undef ZONES
#pragma push_macro("MOSCOW")
#undef MOSCOW

namespace java {
	namespace text {
		class SimpleDateFormat;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class TimeZone;
	}
}

class $export Bug7130335 : public ::java::lang::Object {
	$class(Bug7130335, 0, ::java::lang::Object)
public:
	Bug7130335();
	void init$();
	static void main($StringArray* args);
	static void test(::java::text::SimpleDateFormat* sdf, ::java::util::Calendar* cal);
	static void test8000529($String* fmt);
	static ::java::util::TimeZone* MOSCOW;
	static ::java::util::TimeZone* LONDON;
	static ::java::util::TimeZone* LA;
	static $Array<::java::util::TimeZone>* ZONES;
};

#pragma pop_macro("LA")
#pragma pop_macro("LONDON")
#pragma pop_macro("ZONES")
#pragma pop_macro("MOSCOW")

#endif // _Bug7130335_h_