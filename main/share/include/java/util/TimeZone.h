#ifndef _java_util_TimeZone_h_
#define _java_util_TimeZone_h_
//$ class java.util.TimeZone
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("ONE_HOUR")
#undef ONE_HOUR
#pragma push_macro("GMT_ID")
#undef GMT_ID
#pragma push_macro("NO_TIMEZONE")
#undef NO_TIMEZONE
#pragma push_macro("ID")
#undef ID
#pragma push_macro("GMT_ID_LENGTH")
#undef GMT_ID_LENGTH
#pragma push_macro("ONE_DAY")
#undef ONE_DAY
#pragma push_macro("ONE_MINUTE")
#undef ONE_MINUTE
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("LONG")
#undef LONG

namespace java {
	namespace time {
		class ZoneId;
	}
}
namespace java {
	namespace util {
		class Date;
		class Locale;
	}
}

namespace java {
	namespace util {

class $import TimeZone : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(TimeZone, 0, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	TimeZone();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	static $StringArray* getAvailableIDs(int32_t rawOffset);
	static $StringArray* getAvailableIDs();
	virtual int32_t getDSTSavings();
	static ::java::util::TimeZone* getDefault();
	static ::java::util::TimeZone* getDefaultRef();
	$String* getDisplayName();
	$String* getDisplayName(::java::util::Locale* locale);
	$String* getDisplayName(bool daylight, int32_t style);
	virtual $String* getDisplayName(bool daylight, int32_t style, ::java::util::Locale* locale);
	static $StringArray* getDisplayNames($String* id, ::java::util::Locale* locale);
	virtual $String* getID();
	virtual int32_t getOffset(int32_t era, int32_t year, int32_t month, int32_t day, int32_t dayOfWeek, int32_t milliseconds) {return 0;}
	virtual int32_t getOffset(int64_t date);
	virtual int32_t getOffsets(int64_t date, $ints* offsets);
	virtual int32_t getRawOffset() {return 0;}
	static $String* getSystemGMTOffsetID();
	static $String* getSystemTimeZoneID($String* javaHome);
	static ::java::util::TimeZone* getTimeZone($String* ID);
	static ::java::util::TimeZone* getTimeZone(::java::time::ZoneId* zoneId);
	static ::java::util::TimeZone* getTimeZone($String* ID, bool fallback);
	virtual bool hasSameRules(::java::util::TimeZone* other);
	virtual bool inDaylightTime(::java::util::Date* date) {return false;}
	virtual bool observesDaylightTime();
	static ::java::util::TimeZone* parseCustomTimeZone($String* id);
	static void setDefault(::java::util::TimeZone* zone);
	static ::java::util::TimeZone* setDefaultZone();
	virtual void setID($String* ID);
	virtual void setRawOffset(int32_t offsetMillis) {}
	virtual $String* toString() override;
	virtual ::java::time::ZoneId* toZoneId();
	::java::time::ZoneId* toZoneId0();
	virtual bool useDaylightTime() {return false;}
	static bool $assertionsDisabled;
	static const int32_t SHORT = 0;
	static const int32_t LONG = 1;
	static const int32_t ONE_MINUTE = 60000; // 60 * 1000
	static const int32_t ONE_HOUR = 3600000; // 60 * ONE_MINUTE
	static const int32_t ONE_DAY = 86400000; // 24 * ONE_HOUR
	static const int64_t serialVersionUID = (int64_t)0x31B3E9F57744ACA1;
	static ::java::util::TimeZone* NO_TIMEZONE;
	$String* ID = nullptr;
	::java::time::ZoneId* zoneId = nullptr;
	static $volatile(::java::util::TimeZone*) defaultTimeZone;
	static $String* GMT_ID;
	static const int32_t GMT_ID_LENGTH = 3;
};

	} // util
} // java

#pragma pop_macro("ONE_HOUR")
#pragma pop_macro("GMT_ID")
#pragma pop_macro("NO_TIMEZONE")
#pragma pop_macro("ID")
#pragma pop_macro("GMT_ID_LENGTH")
#pragma pop_macro("ONE_DAY")
#pragma pop_macro("ONE_MINUTE")
#pragma pop_macro("SHORT")
#pragma pop_macro("LONG")

#endif // _java_util_TimeZone_h_