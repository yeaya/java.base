#ifndef _java_text_DateFormat_h_
#define _java_text_DateFormat_h_
//$ class java.text.DateFormat
//$ extends java.text.Format

#include <java/lang/Array.h>
#include <java/text/Format.h>

#pragma push_macro("AM_PM_FIELD")
#undef AM_PM_FIELD
#pragma push_macro("DATE_FIELD")
#undef DATE_FIELD
#pragma push_macro("DAY_OF_WEEK_FIELD")
#undef DAY_OF_WEEK_FIELD
#pragma push_macro("DAY_OF_WEEK_IN_MONTH_FIELD")
#undef DAY_OF_WEEK_IN_MONTH_FIELD
#pragma push_macro("DAY_OF_YEAR_FIELD")
#undef DAY_OF_YEAR_FIELD
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("ERA_FIELD")
#undef ERA_FIELD
#pragma push_macro("FULL")
#undef FULL
#pragma push_macro("HOUR0_FIELD")
#undef HOUR0_FIELD
#pragma push_macro("HOUR1_FIELD")
#undef HOUR1_FIELD
#pragma push_macro("HOUR_OF_DAY0_FIELD")
#undef HOUR_OF_DAY0_FIELD
#pragma push_macro("HOUR_OF_DAY1_FIELD")
#undef HOUR_OF_DAY1_FIELD
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("MEDIUM")
#undef MEDIUM
#pragma push_macro("MILLISECOND_FIELD")
#undef MILLISECOND_FIELD
#pragma push_macro("MINUTE_FIELD")
#undef MINUTE_FIELD
#pragma push_macro("MONTH_FIELD")
#undef MONTH_FIELD
#pragma push_macro("SECOND_FIELD")
#undef SECOND_FIELD
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("TIMEZONE_FIELD")
#undef TIMEZONE_FIELD
#pragma push_macro("WEEK_OF_MONTH_FIELD")
#undef WEEK_OF_MONTH_FIELD
#pragma push_macro("WEEK_OF_YEAR_FIELD")
#undef WEEK_OF_YEAR_FIELD
#pragma push_macro("YEAR_FIELD")
#undef YEAR_FIELD

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class FieldPosition;
		class NumberFormat;
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Date;
		class Locale;
		class TimeZone;
	}
}
namespace sun {
	namespace util {
		namespace locale {
			namespace provider {
				class LocaleProviderAdapter;
			}
		}
	}
}

namespace java {
	namespace text {

class $import DateFormat : public ::java::text::Format {
	$class(DateFormat, $NO_CLASS_INIT, ::java::text::Format)
public:
	DateFormat();
	using ::java::text::Format::format;
	void init$();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual ::java::lang::StringBuffer* format(Object$* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* fieldPosition) override;
	virtual ::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* fieldPosition) {return nullptr;}
	$String* format(::java::util::Date* date);
	static ::java::text::DateFormat* get(int32_t timeStyle, int32_t dateStyle, int32_t flags, ::java::util::Locale* loc);
	static ::java::text::DateFormat* get(::sun::util::locale::provider::LocaleProviderAdapter* adapter, int32_t timeStyle, int32_t dateStyle, ::java::util::Locale* loc);
	static $Array<::java::util::Locale>* getAvailableLocales();
	virtual ::java::util::Calendar* getCalendar();
	static ::java::text::DateFormat* getDateInstance();
	static ::java::text::DateFormat* getDateInstance(int32_t style);
	static ::java::text::DateFormat* getDateInstance(int32_t style, ::java::util::Locale* aLocale);
	static ::java::text::DateFormat* getDateTimeInstance();
	static ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle);
	static ::java::text::DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* aLocale);
	static ::java::text::DateFormat* getInstance();
	virtual ::java::text::NumberFormat* getNumberFormat();
	static ::java::text::DateFormat* getTimeInstance();
	static ::java::text::DateFormat* getTimeInstance(int32_t style);
	static ::java::text::DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* aLocale);
	virtual ::java::util::TimeZone* getTimeZone();
	virtual int32_t hashCode() override;
	virtual bool isLenient();
	virtual ::java::util::Date* parse($String* source);
	virtual ::java::util::Date* parse($String* source, ::java::text::ParsePosition* pos) {return nullptr;}
	using ::java::text::Format::parseObject;
	virtual $Object* parseObject($String* source, ::java::text::ParsePosition* pos) override;
	virtual void setCalendar(::java::util::Calendar* newCalendar);
	virtual void setLenient(bool lenient);
	virtual void setNumberFormat(::java::text::NumberFormat* newNumberFormat);
	virtual void setTimeZone(::java::util::TimeZone* zone);
	::java::util::Calendar* calendar = nullptr;
	::java::text::NumberFormat* numberFormat = nullptr;
	static const int32_t ERA_FIELD = 0;
	static const int32_t YEAR_FIELD = 1;
	static const int32_t MONTH_FIELD = 2;
	static const int32_t DATE_FIELD = 3;
	static const int32_t HOUR_OF_DAY1_FIELD = 4;
	static const int32_t HOUR_OF_DAY0_FIELD = 5;
	static const int32_t MINUTE_FIELD = 6;
	static const int32_t SECOND_FIELD = 7;
	static const int32_t MILLISECOND_FIELD = 8;
	static const int32_t DAY_OF_WEEK_FIELD = 9;
	static const int32_t DAY_OF_YEAR_FIELD = 10;
	static const int32_t DAY_OF_WEEK_IN_MONTH_FIELD = 11;
	static const int32_t WEEK_OF_YEAR_FIELD = 12;
	static const int32_t WEEK_OF_MONTH_FIELD = 13;
	static const int32_t AM_PM_FIELD = 14;
	static const int32_t HOUR1_FIELD = 15;
	static const int32_t HOUR0_FIELD = 16;
	static const int32_t TIMEZONE_FIELD = 17;
	static const int64_t serialVersionUID = (int64_t)0x642CA1E4C22615FC;
	static const int32_t FULL = 0;
	static const int32_t LONG = 1;
	static const int32_t MEDIUM = 2;
	static const int32_t SHORT = 3;
	static const int32_t DEFAULT = MEDIUM;
};

	} // text
} // java

#pragma pop_macro("AM_PM_FIELD")
#pragma pop_macro("DATE_FIELD")
#pragma pop_macro("DAY_OF_WEEK_FIELD")
#pragma pop_macro("DAY_OF_WEEK_IN_MONTH_FIELD")
#pragma pop_macro("DAY_OF_YEAR_FIELD")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("ERA_FIELD")
#pragma pop_macro("FULL")
#pragma pop_macro("HOUR0_FIELD")
#pragma pop_macro("HOUR1_FIELD")
#pragma pop_macro("HOUR_OF_DAY0_FIELD")
#pragma pop_macro("HOUR_OF_DAY1_FIELD")
#pragma pop_macro("LONG")
#pragma pop_macro("MEDIUM")
#pragma pop_macro("MILLISECOND_FIELD")
#pragma pop_macro("MINUTE_FIELD")
#pragma pop_macro("MONTH_FIELD")
#pragma pop_macro("SECOND_FIELD")
#pragma pop_macro("SHORT")
#pragma pop_macro("TIMEZONE_FIELD")
#pragma pop_macro("WEEK_OF_MONTH_FIELD")
#pragma pop_macro("WEEK_OF_YEAR_FIELD")
#pragma pop_macro("YEAR_FIELD")

#endif // _java_text_DateFormat_h_