#ifndef _java_time_DayOfWeek_h_
#define _java_time_DayOfWeek_h_
//$ class java.time.DayOfWeek
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalAccessor,java.time.temporal.TemporalAdjuster

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("WEDNESDAY")
#undef WEDNESDAY
#pragma push_macro("MONDAY")
#undef MONDAY
#pragma push_macro("THURSDAY")
#undef THURSDAY
#pragma push_macro("ENUMS")
#undef ENUMS
#pragma push_macro("SUNDAY")
#undef SUNDAY
#pragma push_macro("TUESDAY")
#undef TUESDAY
#pragma push_macro("FRIDAY")
#undef FRIDAY
#pragma push_macro("SATURDAY")
#undef SATURDAY

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

class $export DayOfWeek : public ::java::lang::Enum, public ::java::time::temporal::TemporalAccessor, public ::java::time::temporal::TemporalAdjuster {
	$class(DayOfWeek, 0, ::java::lang::Enum, ::java::time::temporal::TemporalAccessor, ::java::time::temporal::TemporalAdjuster)
public:
	DayOfWeek();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::time::DayOfWeek>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	static ::java::time::DayOfWeek* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual int32_t getValue();
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual ::java::time::DayOfWeek* minus(int64_t days);
	static ::java::time::DayOfWeek* of(int32_t dayOfWeek);
	virtual ::java::time::DayOfWeek* plus(int64_t days);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	virtual $String* toString() override;
	static ::java::time::DayOfWeek* valueOf($String* name);
	static $Array<::java::time::DayOfWeek>* values();
	static ::java::time::DayOfWeek* MONDAY;
	static ::java::time::DayOfWeek* TUESDAY;
	static ::java::time::DayOfWeek* WEDNESDAY;
	static ::java::time::DayOfWeek* THURSDAY;
	static ::java::time::DayOfWeek* FRIDAY;
	static ::java::time::DayOfWeek* SATURDAY;
	static ::java::time::DayOfWeek* SUNDAY;
	static $Array<::java::time::DayOfWeek>* $VALUES;
	static $Array<::java::time::DayOfWeek>* ENUMS;
};

	} // time
} // java

#pragma pop_macro("WEDNESDAY")
#pragma pop_macro("MONDAY")
#pragma pop_macro("THURSDAY")
#pragma pop_macro("ENUMS")
#pragma pop_macro("SUNDAY")
#pragma pop_macro("TUESDAY")
#pragma pop_macro("FRIDAY")
#pragma pop_macro("SATURDAY")

#endif // _java_time_DayOfWeek_h_