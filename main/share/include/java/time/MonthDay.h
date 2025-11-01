#ifndef _java_time_MonthDay_h_
#define _java_time_MonthDay_h_
//$ class java.time.MonthDay
//$ extends java.time.temporal.TemporalAccessor
//$ implements java.time.temporal.TemporalAdjuster,java.lang.Comparable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Comparable.h>
#include <java/time/temporal/TemporalAccessor.h>
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
			class Temporal;
			class TemporalField;
			class TemporalQuery;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {

class $import MonthDay : public ::java::time::temporal::TemporalAccessor, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable, public ::java::io::Serializable {
	$class(MonthDay, 0, ::java::time::temporal::TemporalAccessor, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable, ::java::io::Serializable)
public:
	MonthDay();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t month, int32_t dayOfMonth);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	::java::time::LocalDate* atYear(int32_t year);
	int32_t compareTo(::java::time::MonthDay* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	$String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::MonthDay* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	int32_t getDayOfMonth();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	::java::time::Month* getMonth();
	int32_t getMonthValue();
	virtual int32_t hashCode() override;
	bool isAfter(::java::time::MonthDay* other);
	bool isBefore(::java::time::MonthDay* other);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	bool isValidYear(int32_t year);
	static ::java::time::MonthDay* now();
	static ::java::time::MonthDay* now(::java::time::ZoneId* zone);
	static ::java::time::MonthDay* now(::java::time::Clock* clock);
	static ::java::time::MonthDay* of(::java::time::Month* month, int32_t dayOfMonth);
	static ::java::time::MonthDay* of(int32_t month, int32_t dayOfMonth);
	static ::java::time::MonthDay* parse(::java::lang::CharSequence* text);
	static ::java::time::MonthDay* parse(::java::lang::CharSequence* text, ::java::time::format::DateTimeFormatter* formatter);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::MonthDay* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	::java::time::MonthDay* with(::java::time::Month* month);
	::java::time::MonthDay* withDayOfMonth(int32_t dayOfMonth);
	::java::time::MonthDay* withMonth(int32_t month);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xF2F77766E4C53F88;
	static ::java::time::format::DateTimeFormatter* PARSER;
	int32_t month = 0;
	int32_t day = 0;
};

	} // time
} // java

#pragma pop_macro("PARSER")

#endif // _java_time_MonthDay_h_