#ifndef _SDFTCKZoneNamesTest_h_
#define _SDFTCKZoneNamesTest_h_
//$ class SDFTCKZoneNamesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ID")
#undef ID

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class DateFormatSymbols;
		class NumberFormat;
		class SimpleDateFormat;
	}
}
namespace java {
	namespace util {
		class Date;
		class Locale;
	}
}

class $export SDFTCKZoneNamesTest : public ::java::lang::Object {
	$class(SDFTCKZoneNamesTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SDFTCKZoneNamesTest();
	void init$();
	virtual void SimpleDateFormat0062();
	virtual int32_t getZoneIndex($String* ID, ::java::text::DateFormatSymbols* dfs);
	static void lambda$main$0(::SDFTCKZoneNamesTest* test, ::java::util::Locale* l);
	static void main($StringArray* argv);
	virtual ::java::lang::StringBuffer* myFormat(::java::util::Date* date, ::java::text::SimpleDateFormat* sdf);
	$String* subFormat(char16_t ch, int32_t count, ::java::util::Date* date, ::java::text::SimpleDateFormat* sdf);
	virtual $String* zeroPaddingNumber(int64_t value, int32_t minDigits, int32_t maxDigits, ::java::text::NumberFormat* nf);
	static const int32_t second = 1000;
	static const int32_t minute = 60000; // 60 * ::SDFTCKZoneNamesTest::second
	static const int32_t hour = 3600000; // 60 * ::SDFTCKZoneNamesTest::minute
	static const int32_t day = 86400000; // 24 * ::SDFTCKZoneNamesTest::hour
	static const int32_t month = 0x9A7EC800; // 30 * ::SDFTCKZoneNamesTest::day
	static const int32_t year = 0x57B12C00; // 365 * ::SDFTCKZoneNamesTest::day
	static const int32_t someday = 0x792AFC80; // 30 * ::SDFTCKZoneNamesTest::year + 3 * ::SDFTCKZoneNamesTest::month + 19 * ::SDFTCKZoneNamesTest::day + 5 * ::SDFTCKZoneNamesTest::hour
};

#pragma pop_macro("ID")

#endif // _SDFTCKZoneNamesTest_h_