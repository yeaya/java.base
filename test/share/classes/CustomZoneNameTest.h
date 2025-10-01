#ifndef _CustomZoneNameTest_h_
#define _CustomZoneNameTest_h_
//$ class CustomZoneNameTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace time {
		class Instant;
		class ZoneId;
		class ZonedDateTime;
	}
}
namespace java {
	namespace util {
		class Map;
		class Map$Entry;
	}
}

class $export CustomZoneNameTest : public ::java::lang::Object {
	$class(CustomZoneNameTest, 0, ::java::lang::Object)
public:
	CustomZoneNameTest();
	void init$();
	static bool lambda$testFormatting$0(::java::time::ZonedDateTime* customZDT, ::java::util::Map$Entry* e);
	static void lambda$testFormatting$1(::java::util::Map$Entry* e);
	static bool lambda$testParsing$2(::java::util::Map$Entry* e);
	static void lambda$testParsing$3(::java::util::Map$Entry* e);
	static void main($StringArray* args);
	static void testFormatting();
	static void testParsing();
	static const int64_t now = (int64_t)0x0000016EDD3FBD94;
	static ::java::time::Instant* instant;
	static ::java::time::ZoneId* customZone;
	static ::java::util::Map* formats;
};

#endif // _CustomZoneNameTest_h_