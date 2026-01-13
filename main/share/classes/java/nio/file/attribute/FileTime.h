#ifndef _java_nio_file_attribute_FileTime_h_
#define _java_nio_file_attribute_FileTime_h_
//$ class java.nio.file.attribute.FileTime
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

#pragma push_macro("HOURS_PER_DAY")
#undef HOURS_PER_DAY
#pragma push_macro("MAX_SECOND")
#undef MAX_SECOND
#pragma push_macro("MICROS_PER_SECOND")
#undef MICROS_PER_SECOND
#pragma push_macro("MILLIS_PER_SECOND")
#undef MILLIS_PER_SECOND
#pragma push_macro("MINUTES_PER_HOUR")
#undef MINUTES_PER_HOUR
#pragma push_macro("MIN_SECOND")
#undef MIN_SECOND
#pragma push_macro("NANOS_PER_MICRO")
#undef NANOS_PER_MICRO
#pragma push_macro("NANOS_PER_MILLI")
#undef NANOS_PER_MILLI
#pragma push_macro("NANOS_PER_SECOND")
#undef NANOS_PER_SECOND
#pragma push_macro("SECONDS_PER_DAY")
#undef SECONDS_PER_DAY
#pragma push_macro("SECONDS_PER_HOUR")
#undef SECONDS_PER_HOUR
#pragma push_macro("SECONDS_PER_MINUTE")
#undef SECONDS_PER_MINUTE

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace time {
		class Instant;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export FileTime : public ::java::lang::Comparable {
	$class(FileTime, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	FileTime();
	void init$(int64_t value, ::java::util::concurrent::TimeUnit* unit, ::java::time::Instant* instant);
	::java::lang::StringBuilder* append(::java::lang::StringBuilder* sb, int32_t w, int32_t d);
	int32_t compareTo(::java::nio::file::attribute::FileTime* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	static ::java::nio::file::attribute::FileTime* from(int64_t value, ::java::util::concurrent::TimeUnit* unit);
	static ::java::nio::file::attribute::FileTime* from(::java::time::Instant* instant);
	static ::java::nio::file::attribute::FileTime* fromMillis(int64_t value);
	virtual int32_t hashCode() override;
	static int64_t scale(int64_t d, int64_t m, int64_t over);
	int64_t to(::java::util::concurrent::TimeUnit* unit);
	int64_t toDays();
	int64_t toExcessNanos(int64_t days);
	::java::time::Instant* toInstant();
	int64_t toMillis();
	virtual $String* toString() override;
	::java::util::concurrent::TimeUnit* unit = nullptr;
	int64_t value = 0;
	::java::time::Instant* instant = nullptr;
	$String* valueAsString = nullptr;
	static const int64_t HOURS_PER_DAY = (int64_t)24;
	static const int64_t MINUTES_PER_HOUR = (int64_t)60;
	static const int64_t SECONDS_PER_MINUTE = (int64_t)60;
	static const int64_t SECONDS_PER_HOUR = 3600; // SECONDS_PER_MINUTE * MINUTES_PER_HOUR
	static const int64_t SECONDS_PER_DAY = 86400; // SECONDS_PER_HOUR * HOURS_PER_DAY
	static const int64_t MILLIS_PER_SECOND = (int64_t)1000;
	static const int64_t MICROS_PER_SECOND = (int64_t)1000000;
	static const int64_t NANOS_PER_SECOND = (int64_t)1000000000;
	static const int32_t NANOS_PER_MILLI = 0x000F4240;
	static const int32_t NANOS_PER_MICRO = 1000;
	static const int64_t MIN_SECOND = (int64_t)0xFF8FE31014641400;
	static const int64_t MAX_SECOND = (int64_t)0x00701CD2FA9578FF;
	static const int64_t DAYS_PER_10000_YEARS = 3652425; // 146097L * 25L
	static const int64_t SECONDS_PER_10000_YEARS = 315569520000; // 146097L * 25L * 86400L
	static const int64_t SECONDS_0000_TO_1970 = 62167219200; // ((146097L * 5L) - (30L * 365L + 7L)) * 86400L
};

			} // attribute
		} // file
	} // nio
} // java

#pragma pop_macro("HOURS_PER_DAY")
#pragma pop_macro("MAX_SECOND")
#pragma pop_macro("MICROS_PER_SECOND")
#pragma pop_macro("MILLIS_PER_SECOND")
#pragma pop_macro("MINUTES_PER_HOUR")
#pragma pop_macro("MIN_SECOND")
#pragma pop_macro("NANOS_PER_MICRO")
#pragma pop_macro("NANOS_PER_MILLI")
#pragma pop_macro("NANOS_PER_SECOND")
#pragma pop_macro("SECONDS_PER_DAY")
#pragma pop_macro("SECONDS_PER_HOUR")
#pragma pop_macro("SECONDS_PER_MINUTE")

#endif // _java_nio_file_attribute_FileTime_h_