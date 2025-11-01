#ifndef _java_time_Year_h_
#define _java_time_Year_h_
//$ class java.time.Year
//$ extends java.time.temporal.Temporal
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
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
		class MonthDay;
		class YearMonth;
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

class $import Year : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(Year, 0, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	Year();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t year);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::LocalDate* atDay(int32_t dayOfYear);
	::java::time::YearMonth* atMonth(::java::time::Month* month);
	::java::time::YearMonth* atMonth(int32_t month);
	::java::time::LocalDate* atMonthDay(::java::time::MonthDay* monthDay);
	int32_t compareTo(::java::time::Year* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	$String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::Year* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	int32_t getValue();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::Year* other);
	bool isBefore(::java::time::Year* other);
	static bool isLeap(int64_t year);
	bool isLeap();
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	bool isValidMonthDay(::java::time::MonthDay* monthDay);
	int32_t length();
	virtual ::java::time::Year* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	virtual ::java::time::Year* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::Year* minusYears(int64_t yearsToSubtract);
	static ::java::time::Year* now();
	static ::java::time::Year* now(::java::time::ZoneId* zone);
	static ::java::time::Year* now(::java::time::Clock* clock);
	static ::java::time::Year* of(int32_t isoYear);
	static ::java::time::Year* parse(::java::lang::CharSequence* text);
	static ::java::time::Year* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual ::java::time::Year* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	virtual ::java::time::Year* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::Year* plusYears(int64_t yearsToAdd);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::Year* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::Year* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::Year* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int32_t MIN_VALUE = 0xC4653601;
	static const int32_t MAX_VALUE = 0x3B9AC9FF;
	static const int64_t serialVersionUID = (int64_t)0xFFAE26B64BB10611;
	static ::java::time::format::DateTimeFormatter* PARSER;
	int32_t year = 0;
};

	} // time
} // java

#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("PARSER")

#endif // _java_time_Year_h_