#ifndef _java_util_JapaneseImperialCalendar_h_
#define _java_util_JapaneseImperialCalendar_h_
//$ class java.util.JapaneseImperialCalendar
//$ extends java.util.Calendar

#include <java/lang/Array.h>
#include <java/util/Calendar.h>

#pragma push_macro("BEFORE_MEIJI")
#undef BEFORE_MEIJI
#pragma push_macro("BEFORE_MEIJI_ERA")
#undef BEFORE_MEIJI_ERA
#pragma push_macro("EPOCH_OFFSET")
#undef EPOCH_OFFSET
#pragma push_macro("HEISEI")
#undef HEISEI
#pragma push_macro("LEAST_MAX_VALUES")
#undef LEAST_MAX_VALUES
#pragma push_macro("MAX_VALUES")
#undef MAX_VALUES
#pragma push_macro("MEIJI")
#undef MEIJI
#pragma push_macro("MIN_VALUES")
#undef MIN_VALUES
#pragma push_macro("ONE_DAY")
#undef ONE_DAY
#pragma push_macro("ONE_HOUR")
#undef ONE_HOUR
#pragma push_macro("ONE_MINUTE")
#undef ONE_MINUTE
#pragma push_macro("ONE_SECOND")
#undef ONE_SECOND
#pragma push_macro("REIWA")
#undef REIWA
#pragma push_macro("SHOWA")
#undef SHOWA
#pragma push_macro("TAISHO")
#undef TAISHO

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class CalendarDate;
			class Era;
			class Gregorian;
			class LocalGregorianCalendar;
			class LocalGregorianCalendar$Date;
		}
	}
}

namespace java {
	namespace util {

class JapaneseImperialCalendar : public ::java::util::Calendar {
	$class(JapaneseImperialCalendar, 0, ::java::util::Calendar)
public:
	JapaneseImperialCalendar();
	void init$(::java::util::TimeZone* zone, ::java::util::Locale* aLocale);
	void init$(::java::util::TimeZone* zone, ::java::util::Locale* aLocale, bool flag);
	int32_t actualMonthLength();
	virtual void add(int32_t field, int32_t amount) override;
	virtual $Object* clone() override;
	virtual void computeFields() override;
	int32_t computeFields(int32_t fieldMask, int32_t tzMask);
	virtual void computeTime() override;
	virtual bool equals(Object$* obj) override;
	virtual int32_t getActualMaximum(int32_t field) override;
	virtual int32_t getActualMinimum(int32_t field) override;
	static ::sun::util::calendar::LocalGregorianCalendar$Date* getCalendarDate(int64_t fd);
	virtual $String* getCalendarType() override;
	virtual $String* getDisplayName(int32_t field, int32_t style, ::java::util::Locale* locale) override;
	virtual ::java::util::Map* getDisplayNames(int32_t field, int32_t style, ::java::util::Locale* locale) override;
	static int32_t getEraIndex(::sun::util::calendar::LocalGregorianCalendar$Date* date);
	int64_t getFixedDate(int32_t era, int32_t year, int32_t fieldMask);
	int64_t getFixedDateJan1(::sun::util::calendar::LocalGregorianCalendar$Date* date, int64_t fixedDate);
	int64_t getFixedDateMonth1(::sun::util::calendar::LocalGregorianCalendar$Date* date, int64_t fixedDate);
	virtual int32_t getGreatestMinimum(int32_t field) override;
	virtual int32_t getLeastMaximum(int32_t field) override;
	virtual int32_t getMaximum(int32_t field) override;
	virtual int32_t getMinimum(int32_t field) override;
	::java::util::JapaneseImperialCalendar* getNormalizedCalendar();
	static int32_t getRolledValue(int32_t value, int32_t amount, int32_t min, int32_t max);
	virtual ::java::util::TimeZone* getTimeZone() override;
	static int32_t getTransitionEraIndex(::sun::util::calendar::LocalGregorianCalendar$Date* date);
	int32_t getWeekNumber(int64_t fixedDay1, int64_t fixedDate);
	int64_t getYearOffsetInMillis(::sun::util::calendar::CalendarDate* date);
	virtual int32_t hashCode() override;
	int32_t internalGetEra();
	bool isTransitionYear(int32_t normalizedYear);
	int32_t monthLength(int32_t month, int32_t gregorianYear);
	int32_t monthLength(int32_t month);
	void pinDayOfMonth(::sun::util::calendar::LocalGregorianCalendar$Date* date);
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void roll(int32_t field, bool up) override;
	virtual void roll(int32_t field, int32_t amount) override;
	virtual void setTimeZone(::java::util::TimeZone* zone) override;
	static bool $assertionsDisabled;
	static const int32_t BEFORE_MEIJI = 0;
	static const int32_t MEIJI = 1;
	static const int32_t TAISHO = 2;
	static const int32_t SHOWA = 3;
	static const int32_t HEISEI = 4;
	static const int32_t REIWA = 5;
	static const int32_t EPOCH_OFFSET = 0x000AF93B;
	static const int32_t ONE_SECOND = 1000;
	static const int32_t ONE_MINUTE = 60000; // 60 * ONE_SECOND
	static const int32_t ONE_HOUR = 3600000; // 60 * ONE_MINUTE
	static const int64_t ONE_DAY = 86400000; // 24 * ONE_HOUR
	static ::sun::util::calendar::LocalGregorianCalendar* jcal;
	static ::sun::util::calendar::Gregorian* gcal;
	static ::sun::util::calendar::Era* BEFORE_MEIJI_ERA;
	static $Array<::sun::util::calendar::Era>* eras;
	static $longs* sinceFixedDates;
	static int32_t currentEra;
	static $ints* MIN_VALUES;
	static $ints* LEAST_MAX_VALUES;
	static $ints* MAX_VALUES;
	static const int64_t serialVersionUID = (int64_t)0xD14EA2DA1E3A65E7;
	::sun::util::calendar::LocalGregorianCalendar$Date* jdate = nullptr;
	$ints* zoneOffsets = nullptr;
	$ints* originalFields = nullptr;
	int64_t cachedFixedDate = 0;
};

	} // util
} // java

#pragma pop_macro("BEFORE_MEIJI")
#pragma pop_macro("BEFORE_MEIJI_ERA")
#pragma pop_macro("EPOCH_OFFSET")
#pragma pop_macro("HEISEI")
#pragma pop_macro("LEAST_MAX_VALUES")
#pragma pop_macro("MAX_VALUES")
#pragma pop_macro("MEIJI")
#pragma pop_macro("MIN_VALUES")
#pragma pop_macro("ONE_DAY")
#pragma pop_macro("ONE_HOUR")
#pragma pop_macro("ONE_MINUTE")
#pragma pop_macro("ONE_SECOND")
#pragma pop_macro("REIWA")
#pragma pop_macro("SHOWA")
#pragma pop_macro("TAISHO")

#endif // _java_util_JapaneseImperialCalendar_h_