#ifndef _java_time_chrono_Chronology_h_
#define _java_time_chrono_Chronology_h_
//$ interface java.time.chrono.Chronology
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

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
			class TextStyle;
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
		class Locale;
		class Map;
		class Set;
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $export Chronology : public ::java::lang::Comparable {
	$interface(Chronology, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	virtual int32_t compareTo(::java::time::chrono::Chronology* other) {return 0;}
	virtual int32_t compareTo(Object$* other) override;
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t month, int32_t dayOfMonth);
	virtual ::java::time::chrono::ChronoLocalDate* date(int32_t prolepticYear, int32_t month, int32_t dayOfMonth) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::temporal::TemporalAccessor* temporal) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* dateEpochDay(int64_t epochDay) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* dateNow();
	virtual ::java::time::chrono::ChronoLocalDate* dateNow(::java::time::ZoneId* zone);
	virtual ::java::time::chrono::ChronoLocalDate* dateNow(::java::time::Clock* clock);
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t dayOfYear);
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(int32_t prolepticYear, int32_t dayOfYear) {return nullptr;}
	virtual int64_t epochSecond(int32_t prolepticYear, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, ::java::time::ZoneOffset* zoneOffset);
	virtual int64_t epochSecond(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t month, int32_t dayOfMonth, int32_t hour, int32_t minute, int32_t second, ::java::time::ZoneOffset* zoneOffset);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::chrono::Era* eraOf(int32_t eraValue) {return nullptr;}
	virtual ::java::util::List* eras() {return nullptr;}
	static ::java::time::chrono::Chronology* from(::java::time::temporal::TemporalAccessor* temporal);
	static ::java::util::Set* getAvailableChronologies();
	virtual $String* getCalendarType() {return nullptr;}
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual $String* getId() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isLeapYear(int64_t prolepticYear) {return false;}
	virtual ::java::time::chrono::ChronoLocalDateTime* localDateTime(::java::time::temporal::TemporalAccessor* temporal);
	static ::java::time::chrono::Chronology* of($String* id);
	static ::java::time::chrono::Chronology* ofLocale(::java::util::Locale* locale);
	virtual ::java::time::chrono::ChronoPeriod* period(int32_t years, int32_t months, int32_t days);
	virtual int32_t prolepticYear(::java::time::chrono::Era* era, int32_t yearOfEra) {return 0;}
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::ChronoField* field) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* resolveDate(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::Instant* instant, ::java::time::ZoneId* zone);
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_Chronology_h_