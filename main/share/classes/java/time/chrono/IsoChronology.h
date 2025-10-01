#ifndef _java_time_chrono_IsoChronology_h_
#define _java_time_chrono_IsoChronology_h_
//$ class java.time.chrono.IsoChronology
//$ extends java.time.chrono.AbstractChronology
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/AbstractChronology.h>

#pragma push_macro("DAYS_0000_TO_1970")
#undef DAYS_0000_TO_1970
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class Clock;
		class Instant;
		class ZoneId;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class ChronoLocalDateTime;
			class ChronoPeriod;
			class ChronoZonedDateTime;
			class Era;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class ChronoField;
			class TemporalAccessor;
			class ValueRange;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $export IsoChronology : public ::java::time::chrono::AbstractChronology, public ::java::io::Serializable {
	$class(IsoChronology, 0, ::java::time::chrono::AbstractChronology, ::java::io::Serializable)
public:
	IsoChronology();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::time::chrono::AbstractChronology::epochSecond;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t month, int32_t dayOfMonth) override;
	virtual ::java::time::chrono::ChronoLocalDate* date(int32_t prolepticYear, int32_t month, int32_t dayOfMonth) override;
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateEpochDay(int64_t epochDay) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateNow() override;
	virtual ::java::time::chrono::ChronoLocalDate* dateNow(::java::time::ZoneId* zone) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateNow(::java::time::Clock* clock) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t dayOfYear) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(int32_t prolepticYear, int32_t dayOfYear) override;
	virtual int64_t epochSecond(int32_t prolepticYear, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, ::java::time::ZoneOffset* zoneOffset) override;
	virtual ::java::time::chrono::Era* eraOf(int32_t eraValue) override;
	virtual ::java::util::List* eras() override;
	virtual $String* getCalendarType() override;
	virtual $String* getId() override;
	virtual bool isLeapYear(int64_t prolepticYear) override;
	virtual ::java::time::chrono::ChronoLocalDateTime* localDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	int32_t numberOfDaysOfMonth(int32_t year, int32_t month);
	virtual ::java::time::chrono::ChronoPeriod* period(int32_t years, int32_t months, int32_t days) override;
	virtual int32_t prolepticYear(::java::time::chrono::Era* era, int32_t yearOfEra) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::ChronoField* field) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::chrono::ChronoLocalDate* resolveDate(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual void resolveProlepticMonth(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual ::java::time::chrono::ChronoLocalDate* resolveYMD(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual ::java::time::chrono::ChronoLocalDate* resolveYearOfEra(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual $String* toString() override;
	virtual $Object* writeReplace() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::Instant* instant, ::java::time::ZoneId* zone) override;
	static ::java::time::chrono::IsoChronology* INSTANCE;
	static const int64_t serialVersionUID = (int64_t)0xEC02A84FB92610D9;
	static const int64_t DAYS_0000_TO_1970 = 719528; // (0x00023AB1 * (int64_t)5) - ((int64_t)30 * (int64_t)365 + (int64_t)7)
};

		} // chrono
	} // time
} // java

#pragma pop_macro("DAYS_0000_TO_1970")
#pragma pop_macro("INSTANCE")

#endif // _java_time_chrono_IsoChronology_h_