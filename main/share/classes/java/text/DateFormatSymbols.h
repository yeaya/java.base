#ifndef _java_text_DateFormatSymbols_h_
#define _java_text_DateFormatSymbols_h_
//$ class java.text.DateFormatSymbols
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("PATTERN_DAY_OF_WEEK")
#undef PATTERN_DAY_OF_WEEK
#pragma push_macro("PATTERN_ERA")
#undef PATTERN_ERA
#pragma push_macro("PATTERN_WEEK_OF_YEAR")
#undef PATTERN_WEEK_OF_YEAR
#pragma push_macro("PATTERN_HOUR_OF_DAY0")
#undef PATTERN_HOUR_OF_DAY0
#pragma push_macro("PATTERN_WEEK_OF_MONTH")
#undef PATTERN_WEEK_OF_MONTH
#pragma push_macro("PATTERN_HOUR_OF_DAY1")
#undef PATTERN_HOUR_OF_DAY1
#pragma push_macro("PATTERN_ZONE_VALUE")
#undef PATTERN_ZONE_VALUE
#pragma push_macro("PATTERN_DAY_OF_MONTH")
#undef PATTERN_DAY_OF_MONTH
#pragma push_macro("PATTERN_ISO_DAY_OF_WEEK")
#undef PATTERN_ISO_DAY_OF_WEEK
#pragma push_macro("PATTERN_MILLISECOND")
#undef PATTERN_MILLISECOND
#pragma push_macro("PATTERN_WEEK_YEAR")
#undef PATTERN_WEEK_YEAR
#pragma push_macro("PATTERN_ISO_ZONE")
#undef PATTERN_ISO_ZONE
#pragma push_macro("PATTERN_ZONE_NAME")
#undef PATTERN_ZONE_NAME
#pragma push_macro("PATTERN_MONTH")
#undef PATTERN_MONTH
#pragma push_macro("PATTERN_DAY_OF_WEEK_IN_MONTH")
#undef PATTERN_DAY_OF_WEEK_IN_MONTH
#pragma push_macro("PATTERN_MINUTE")
#undef PATTERN_MINUTE
#pragma push_macro("PATTERN_SECOND")
#undef PATTERN_SECOND
#pragma push_macro("ID")
#undef ID
#pragma push_macro("PATTERN_MONTH_STANDALONE")
#undef PATTERN_MONTH_STANDALONE
#pragma push_macro("PATTERN_YEAR")
#undef PATTERN_YEAR
#pragma push_macro("PATTERN_AM_PM")
#undef PATTERN_AM_PM
#pragma push_macro("PATTERN_HOUR0")
#undef PATTERN_HOUR0
#pragma push_macro("PATTERN_DAY_OF_YEAR")
#undef PATTERN_DAY_OF_YEAR
#pragma push_macro("PATTERN_HOUR1")
#undef PATTERN_HOUR1

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace text {

class $export DateFormatSymbols : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(DateFormatSymbols, 0, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	DateFormatSymbols();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(::java::util::Locale* locale);
	void init$(bool flag);
	virtual $Object* clone() override;
	void copyMembers(::java::text::DateFormatSymbols* src, ::java::text::DateFormatSymbols* dst);
	virtual bool equals(Object$* obj) override;
	virtual $StringArray* getAmPmStrings();
	static $Array<::java::util::Locale>* getAvailableLocales();
	virtual $StringArray* getEras();
	static ::java::text::DateFormatSymbols* getInstance();
	static ::java::text::DateFormatSymbols* getInstance(::java::util::Locale* locale);
	static ::java::text::DateFormatSymbols* getInstanceRef(::java::util::Locale* locale);
	virtual $String* getLocalPatternChars();
	virtual $StringArray* getMonths();
	static ::java::text::DateFormatSymbols* getProviderInstance(::java::util::Locale* locale);
	virtual $StringArray* getShortMonths();
	virtual $StringArray* getShortWeekdays();
	virtual $StringArray* getWeekdays();
	int32_t getZoneIndex($String* ID);
	virtual $Array<::java::lang::String, 2>* getZoneStrings();
	$Array<::java::lang::String, 2>* getZoneStringsImpl(bool needsCopy);
	$Array<::java::lang::String, 2>* getZoneStringsWrapper();
	virtual int32_t hashCode() override;
	void initializeData(::java::util::Locale* locale);
	bool isSubclassObject();
	virtual void setAmPmStrings($StringArray* newAmpms);
	virtual void setEras($StringArray* newEras);
	virtual void setLocalPatternChars($String* newLocalPatternChars);
	virtual void setMonths($StringArray* newMonths);
	virtual void setShortMonths($StringArray* newShortMonths);
	virtual void setShortWeekdays($StringArray* newShortWeekdays);
	virtual void setWeekdays($StringArray* newWeekdays);
	virtual void setZoneStrings($Array<::java::lang::String, 2>* newZoneStrings);
	static $StringArray* toOneBasedArray($StringArray* src);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* stream);
	$StringArray* eras = nullptr;
	$StringArray* months = nullptr;
	$StringArray* shortMonths = nullptr;
	$StringArray* weekdays = nullptr;
	$StringArray* shortWeekdays = nullptr;
	$StringArray* ampms = nullptr;
	$Array<::java::lang::String, 2>* zoneStrings = nullptr;
	bool isZoneStringsSet = false;
	static $String* patternChars;
	static const int32_t PATTERN_ERA = 0;
	static const int32_t PATTERN_YEAR = 1;
	static const int32_t PATTERN_MONTH = 2;
	static const int32_t PATTERN_DAY_OF_MONTH = 3;
	static const int32_t PATTERN_HOUR_OF_DAY1 = 4;
	static const int32_t PATTERN_HOUR_OF_DAY0 = 5;
	static const int32_t PATTERN_MINUTE = 6;
	static const int32_t PATTERN_SECOND = 7;
	static const int32_t PATTERN_MILLISECOND = 8;
	static const int32_t PATTERN_DAY_OF_WEEK = 9;
	static const int32_t PATTERN_DAY_OF_YEAR = 10;
	static const int32_t PATTERN_DAY_OF_WEEK_IN_MONTH = 11;
	static const int32_t PATTERN_WEEK_OF_YEAR = 12;
	static const int32_t PATTERN_WEEK_OF_MONTH = 13;
	static const int32_t PATTERN_AM_PM = 14;
	static const int32_t PATTERN_HOUR1 = 15;
	static const int32_t PATTERN_HOUR0 = 16;
	static const int32_t PATTERN_ZONE_NAME = 17;
	static const int32_t PATTERN_ZONE_VALUE = 18;
	static const int32_t PATTERN_WEEK_YEAR = 19;
	static const int32_t PATTERN_ISO_DAY_OF_WEEK = 20;
	static const int32_t PATTERN_ISO_ZONE = 21;
	static const int32_t PATTERN_MONTH_STANDALONE = 22;
	$String* localPatternChars = nullptr;
	::java::util::Locale* locale = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xACE671C9351717C2;
	static const int32_t millisPerHour = 3600000; // 60 * 60 * 1000
	static ::java::util::concurrent::ConcurrentMap* cachedInstances;
	int32_t lastZoneIndex = 0;
	$volatile(int32_t) cachedHashCode = 0;
};

	} // text
} // java

#pragma pop_macro("PATTERN_DAY_OF_WEEK")
#pragma pop_macro("PATTERN_ERA")
#pragma pop_macro("PATTERN_WEEK_OF_YEAR")
#pragma pop_macro("PATTERN_HOUR_OF_DAY0")
#pragma pop_macro("PATTERN_WEEK_OF_MONTH")
#pragma pop_macro("PATTERN_HOUR_OF_DAY1")
#pragma pop_macro("PATTERN_ZONE_VALUE")
#pragma pop_macro("PATTERN_DAY_OF_MONTH")
#pragma pop_macro("PATTERN_ISO_DAY_OF_WEEK")
#pragma pop_macro("PATTERN_MILLISECOND")
#pragma pop_macro("PATTERN_WEEK_YEAR")
#pragma pop_macro("PATTERN_ISO_ZONE")
#pragma pop_macro("PATTERN_ZONE_NAME")
#pragma pop_macro("PATTERN_MONTH")
#pragma pop_macro("PATTERN_DAY_OF_WEEK_IN_MONTH")
#pragma pop_macro("PATTERN_MINUTE")
#pragma pop_macro("PATTERN_SECOND")
#pragma pop_macro("ID")
#pragma pop_macro("PATTERN_MONTH_STANDALONE")
#pragma pop_macro("PATTERN_YEAR")
#pragma pop_macro("PATTERN_AM_PM")
#pragma pop_macro("PATTERN_HOUR0")
#pragma pop_macro("PATTERN_DAY_OF_YEAR")
#pragma pop_macro("PATTERN_HOUR1")

#endif // _java_text_DateFormatSymbols_h_