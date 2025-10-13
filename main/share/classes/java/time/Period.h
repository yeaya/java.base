#ifndef _java_time_Period_h_
#define _java_time_Period_h_
//$ class java.time.Period
//$ extends java.time.chrono.ChronoPeriod
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoPeriod.h>

#pragma push_macro("PATTERN")
#undef PATTERN
#pragma push_macro("SUPPORTED_UNITS")
#undef SUPPORTED_UNITS
#pragma push_macro("ZERO")
#undef ZERO

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace time {
		class LocalDate;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAccessor;
			class TemporalAmount;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace time {

class $export Period : public ::java::time::chrono::ChronoPeriod, public ::java::io::Serializable {
	$class(Period, 0, ::java::time::chrono::ChronoPeriod, ::java::io::Serializable)
public:
	Period();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t years, int32_t months, int32_t days);
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) override;
	static ::java::time::Period* between(::java::time::LocalDate* startDateInclusive, ::java::time::LocalDate* endDateExclusive);
	static bool charMatch(::java::lang::CharSequence* text, int32_t start, int32_t end, char16_t c);
	static ::java::time::Period* create(int32_t years, int32_t months, int32_t days);
	virtual bool equals(Object$* obj) override;
	static ::java::time::Period* from(::java::time::temporal::TemporalAmount* amount);
	virtual int64_t get(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::Chronology* getChronology() override;
	int32_t getDays();
	int32_t getMonths();
	virtual ::java::util::List* getUnits() override;
	int32_t getYears();
	virtual int32_t hashCode() override;
	virtual bool isNegative() override;
	virtual bool isZero() override;
	virtual ::java::time::Period* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	::java::time::Period* minusDays(int64_t daysToSubtract);
	::java::time::Period* minusMonths(int64_t monthsToSubtract);
	::java::time::Period* minusYears(int64_t yearsToSubtract);
	virtual ::java::time::Period* multipliedBy(int32_t scalar) override;
	virtual ::java::time::Period* negated() override;
	virtual ::java::time::Period* normalized() override;
	static ::java::time::Period* of(int32_t years, int32_t months, int32_t days);
	static ::java::time::Period* ofDays(int32_t days);
	static ::java::time::Period* ofMonths(int32_t months);
	static ::java::time::Period* ofWeeks(int32_t weeks);
	static ::java::time::Period* ofYears(int32_t years);
	static ::java::time::Period* parse(::java::lang::CharSequence* text);
	static int32_t parseNumber(::java::lang::CharSequence* text, int32_t start, int32_t end, int32_t negate);
	virtual ::java::time::Period* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	::java::time::Period* plusDays(int64_t daysToAdd);
	::java::time::Period* plusMonths(int64_t monthsToAdd);
	::java::time::Period* plusYears(int64_t yearsToAdd);
	static ::java::time::Period* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) override;
	virtual $String* toString() override;
	int64_t toTotalMonths();
	void validateChrono(::java::time::temporal::TemporalAccessor* temporal);
	::java::time::Period* withDays(int32_t days);
	::java::time::Period* withMonths(int32_t months);
	::java::time::Period* withYears(int32_t years);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::time::Period* ZERO;
	static const int64_t serialVersionUID = (int64_t)0xFFF3416852FC6044;
	static ::java::util::regex::Pattern* PATTERN;
	static ::java::util::List* SUPPORTED_UNITS;
	int32_t years = 0;
	int32_t months = 0;
	int32_t days = 0;
};

	} // time
} // java

#pragma pop_macro("PATTERN")
#pragma pop_macro("SUPPORTED_UNITS")
#pragma pop_macro("ZERO")

#endif // _java_time_Period_h_