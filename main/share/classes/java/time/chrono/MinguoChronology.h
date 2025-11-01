#ifndef _java_time_chrono_MinguoChronology_h_
#define _java_time_chrono_MinguoChronology_h_
//$ class java.time.chrono.MinguoChronology
//$ extends java.time.chrono.AbstractChronology
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/AbstractChronology.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("YEARS_DIFFERENCE")
#undef YEARS_DIFFERENCE

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
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class ChronoLocalDateTime;
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

class $export MinguoChronology : public ::java::time::chrono::AbstractChronology, public ::java::io::Serializable {
	$class(MinguoChronology, 0, ::java::time::chrono::AbstractChronology, ::java::io::Serializable)
public:
	MinguoChronology();
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
	virtual ::java::time::chrono::Era* eraOf(int32_t eraValue) override;
	virtual ::java::util::List* eras() override;
	virtual $String* getCalendarType() override;
	virtual $String* getId() override;
	virtual bool isLeapYear(int64_t prolepticYear) override;
	virtual ::java::time::chrono::ChronoLocalDateTime* localDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual int32_t prolepticYear(::java::time::chrono::Era* era, int32_t yearOfEra) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::ChronoField* field) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::chrono::ChronoLocalDate* resolveDate(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual $String* toString() override;
	virtual $Object* writeReplace() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::Instant* instant, ::java::time::ZoneId* zone) override;
	static ::java::time::chrono::MinguoChronology* INSTANCE;
	static const int64_t serialVersionUID = (int64_t)0x0E6DFCF4568E9FBB;
	static const int32_t YEARS_DIFFERENCE = 1911;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("INSTANCE")
#pragma pop_macro("YEARS_DIFFERENCE")

#endif // _java_time_chrono_MinguoChronology_h_