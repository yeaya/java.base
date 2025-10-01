#ifndef _java_time_chrono_JapaneseDate_h_
#define _java_time_chrono_JapaneseDate_h_
//$ class java.time.chrono.JapaneseDate
//$ extends java.time.chrono.ChronoLocalDateImpl

#include <java/time/chrono/ChronoLocalDateImpl.h>

#pragma push_macro("MEIJI_6_ISODATE")
#undef MEIJI_6_ISODATE

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class Clock;
		class LocalDate;
		class LocalTime;
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class ChronoLocalDateTime;
			class ChronoPeriod;
			class Chronology;
			class Era;
			class JapaneseEra;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAccessor;
			class TemporalAdjuster;
			class TemporalAmount;
			class TemporalField;
			class TemporalUnit;
			class ValueRange;
		}
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class LocalGregorianCalendar$Date;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $export JapaneseDate : public ::java::time::chrono::ChronoLocalDateImpl {
	$class(JapaneseDate, 0, ::java::time::chrono::ChronoLocalDateImpl)
public:
	JapaneseDate();
	using ::java::time::chrono::ChronoLocalDateImpl::isSupported;
	void init$(::java::time::LocalDate* isoDate);
	void init$(::java::time::chrono::JapaneseEra* era, int32_t year, ::java::time::LocalDate* isoDate);
	virtual ::java::time::chrono::ChronoLocalDateTime* atTime(::java::time::LocalTime* localTime) override;
	virtual bool equals(Object$* obj) override;
	static ::java::time::chrono::JapaneseDate* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::chrono::Chronology* getChronology() override;
	virtual ::java::time::chrono::Era* getEra() override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual int32_t hashCode() override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual int32_t lengthOfMonth() override;
	virtual int32_t lengthOfYear() override;
	virtual ::java::time::chrono::JapaneseDate* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::JapaneseDate* minus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::JapaneseDate* minusDays(int64_t daysToSubtract) override;
	virtual ::java::time::chrono::JapaneseDate* minusMonths(int64_t monthsToSubtract) override;
	virtual ::java::time::chrono::JapaneseDate* minusWeeks(int64_t weeksToSubtract) override;
	virtual ::java::time::chrono::JapaneseDate* minusYears(int64_t yearsToSubtract) override;
	static ::java::time::chrono::JapaneseDate* now();
	static ::java::time::chrono::JapaneseDate* now(::java::time::ZoneId* zone);
	static ::java::time::chrono::JapaneseDate* now(::java::time::Clock* clock);
	static ::java::time::chrono::JapaneseDate* of(::java::time::chrono::JapaneseEra* era, int32_t yearOfEra, int32_t month, int32_t dayOfMonth);
	static ::java::time::chrono::JapaneseDate* of(int32_t prolepticYear, int32_t month, int32_t dayOfMonth);
	static ::java::time::chrono::JapaneseDate* ofYearDay(::java::time::chrono::JapaneseEra* era, int32_t yearOfEra, int32_t dayOfYear);
	virtual ::java::time::chrono::JapaneseDate* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::JapaneseDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::JapaneseDate* plusDays(int64_t days) override;
	virtual ::java::time::chrono::JapaneseDate* plusMonths(int64_t months) override;
	virtual ::java::time::chrono::JapaneseDate* plusWeeks(int64_t weeksToAdd) override;
	virtual ::java::time::chrono::JapaneseDate* plusYears(int64_t years) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::JapaneseDate* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual int64_t toEpochDay() override;
	static ::sun::util::calendar::LocalGregorianCalendar$Date* toPrivateJapaneseDate(::java::time::LocalDate* isoDate);
	virtual $String* toString() override;
	virtual ::java::time::chrono::ChronoPeriod* until(::java::time::chrono::ChronoLocalDate* endDate) override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::JapaneseDate* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	virtual ::java::time::chrono::JapaneseDate* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	::java::time::chrono::JapaneseDate* with(::java::time::LocalDate* newDate);
	::java::time::chrono::JapaneseDate* withYear(::java::time::chrono::JapaneseEra* era, int32_t yearOfEra);
	::java::time::chrono::JapaneseDate* withYear(int32_t year);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xFBC3422406CEF0FD;
	::java::time::LocalDate* isoDate = nullptr;
	::java::time::chrono::JapaneseEra* era = nullptr;
	int32_t yearOfEra = 0;
	static ::java::time::LocalDate* MEIJI_6_ISODATE;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("MEIJI_6_ISODATE")

#endif // _java_time_chrono_JapaneseDate_h_