#ifndef _java_time_Month_h_
#define _java_time_Month_h_
//$ class java.time.Month
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalAccessor,java.time.temporal.TemporalAdjuster

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("APRIL")
#undef APRIL
#pragma push_macro("AUGUST")
#undef AUGUST
#pragma push_macro("DECEMBER")
#undef DECEMBER
#pragma push_macro("ENUMS")
#undef ENUMS
#pragma push_macro("FEBRUARY")
#undef FEBRUARY
#pragma push_macro("JANUARY")
#undef JANUARY
#pragma push_macro("JULY")
#undef JULY
#pragma push_macro("JUNE")
#undef JUNE
#pragma push_macro("MARCH")
#undef MARCH
#pragma push_macro("MAY")
#undef MAY
#pragma push_macro("NOVEMBER")
#undef NOVEMBER
#pragma push_macro("OCTOBER")
#undef OCTOBER
#pragma push_macro("SEPTEMBER")
#undef SEPTEMBER

namespace java {
	namespace time {
		namespace format {
			class TextStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalField;
			class TemporalQuery;
			class ValueRange;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace time {

class $export Month : public ::java::lang::Enum, public ::java::time::temporal::TemporalAccessor, public ::java::time::temporal::TemporalAdjuster {
	$class(Month, 0, ::java::lang::Enum, ::java::time::temporal::TemporalAccessor, ::java::time::temporal::TemporalAdjuster)
public:
	Month();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::time::Month>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	virtual int32_t firstDayOfYear(bool leapYear);
	virtual ::java::time::Month* firstMonthOfQuarter();
	static ::java::time::Month* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual int32_t getValue();
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual int32_t length(bool leapYear);
	virtual int32_t maxLength();
	virtual int32_t minLength();
	virtual ::java::time::Month* minus(int64_t months);
	static ::java::time::Month* of(int32_t month);
	virtual ::java::time::Month* plus(int64_t months);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	virtual $String* toString() override;
	static ::java::time::Month* valueOf($String* name);
	static $Array<::java::time::Month>* values();
	static ::java::time::Month* JANUARY;
	static ::java::time::Month* FEBRUARY;
	static ::java::time::Month* MARCH;
	static ::java::time::Month* APRIL;
	static ::java::time::Month* MAY;
	static ::java::time::Month* JUNE;
	static ::java::time::Month* JULY;
	static ::java::time::Month* AUGUST;
	static ::java::time::Month* SEPTEMBER;
	static ::java::time::Month* OCTOBER;
	static ::java::time::Month* NOVEMBER;
	static ::java::time::Month* DECEMBER;
	static $Array<::java::time::Month>* $VALUES;
	static $Array<::java::time::Month>* ENUMS;
};

	} // time
} // java

#pragma pop_macro("APRIL")
#pragma pop_macro("AUGUST")
#pragma pop_macro("DECEMBER")
#pragma pop_macro("ENUMS")
#pragma pop_macro("FEBRUARY")
#pragma pop_macro("JANUARY")
#pragma pop_macro("JULY")
#pragma pop_macro("JUNE")
#pragma pop_macro("MARCH")
#pragma pop_macro("MAY")
#pragma pop_macro("NOVEMBER")
#pragma pop_macro("OCTOBER")
#pragma pop_macro("SEPTEMBER")

#endif // _java_time_Month_h_