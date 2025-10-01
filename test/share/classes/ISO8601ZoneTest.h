#ifndef _ISO8601ZoneTest_h_
#define _ISO8601ZoneTest_h_
//$ class ISO8601ZoneTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIMESTAMP")
#undef TIMESTAMP

namespace java {
	namespace util {
		class Date;
	}
}

class $export ISO8601ZoneTest : public ::java::lang::Object {
	$class(ISO8601ZoneTest, 0, ::java::lang::Object)
public:
	ISO8601ZoneTest();
	void init$();
	static void badDataParsing($String* fmt, $String* text, int32_t expectedErrorIndex);
	static void badFormat($String* fmt);
	static void formatTest($String* fmt, $String* expected);
	static void main($StringArray* args);
	static void roundtripTest($String* fmt);
	static ::java::util::Date* TIMESTAMP;
	static $Array<::java::lang::String, 2>* formatData;
	static $StringArray* zones;
	static $StringArray* isoZoneFormats;
	static $Array<::java::lang::String, 2>* badData;
	static $StringArray* badFormats;
};

#pragma pop_macro("TIMESTAMP")

#endif // _ISO8601ZoneTest_h_