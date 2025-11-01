#ifndef _java_time_YearMonth_h_
#define _java_time_YearMonth_h_
//$ class java.time.YearMonth
//$ extends java.time.temporal.Temporal
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("PARSER")
#undef PARSER

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
		class Clock;
		class LocalDate;
		class Month;
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class TemporalAmount;
			class TemporalField;
			class TemporalQuery;
			class TemporalUnit;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {

class $import YearMonth : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(YearMonth, 0, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	YearMonth();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t year, int32_t month);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::LocalDate* atDay(int32_t dayOfMonth);
	::java::time::LocalDate* atEndOfMonth();
	int32_t compareTo(::java::time::YearMonth* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	$String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::YearMonth* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	::java::time::Month* getMonth();
	int32_t getMonthValue();
	int64_t getProlepticMonth();
	int32_t getYear();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::YearMonth* other);
	bool isBefore(::java::time::YearMonth* other);
	bool isLeapYear();
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	bool isValidDay(int32_t dayOfMonth);
	int32_t lengthOfMonth();
	int32_t lengthOfYear();
	virtual ::java::time::YearMonth* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::YearMonth* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::YearMonth* minusMonths(int64_t monthsToSubtract);
	::java::time::YearMonth* minusYears(int64_t yearsToSubtract);
	static ::java::time::YearMonth* now();
	static ::java::time::YearMonth* now(::java::time::ZoneId* zone);
	static ::java::time::YearMonth* now(::java::time::Clock* clock);
	static ::java::time::YearMonth* of(int32_t year, ::java::time::Month* month);
	static ::java::time::YearMonth* of(int32_t year, int32_t month);
	static ::java::time::YearMonth* parse(::java::lang::CharSequence* text);
	static ::java::time::YearMonth* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::YearMonth* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::YearMonth* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::YearMonth* plusMonths(int64_t monthsToAdd);
	::java::time::YearMonth* plusYears(int64_t yearsToAdd);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::YearMonth* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::YearMonth* with(int32_t newYear, int32_t newMonth);
	virtual ::java::time::YearMonth* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::YearMonth* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	::java::time::YearMonth* withMonth(int32_t month);
	::java::time::YearMonth* withYear(int32_t year);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x3A0E6CEAF57EBBC6;
	static ::java::time::format::DateTimeFormatter* PARSER;
	int32_t year = 0;
	int32_t month = 0;
};

	} // time
} // java

#pragma pop_macro("PARSER")

#endif // _java_time_YearMonth_h_