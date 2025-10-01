#ifndef _java_time_chrono_ThaiBuddhistChronology_h_
#define _java_time_chrono_ThaiBuddhistChronology_h_
//$ class java.time.chrono.ThaiBuddhistChronology
//$ extends java.time.chrono.AbstractChronology
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/AbstractChronology.h>

#pragma push_macro("YEARS_DIFFERENCE")
#undef YEARS_DIFFERENCE
#pragma push_macro("TARGET_LANGUAGE")
#undef TARGET_LANGUAGE
#pragma push_macro("ERA_NARROW_NAMES")
#undef ERA_NARROW_NAMES
#pragma push_macro("FALLBACK_LANGUAGE")
#undef FALLBACK_LANGUAGE
#pragma push_macro("ERA_SHORT_NAMES")
#undef ERA_SHORT_NAMES
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("ERA_FULL_NAMES")
#undef ERA_FULL_NAMES

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
		class HashMap;
		class List;
		class Map;
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import ThaiBuddhistChronology : public ::java::time::chrono::AbstractChronology, public ::java::io::Serializable {
	$class(ThaiBuddhistChronology, 0, ::java::time::chrono::AbstractChronology, ::java::io::Serializable)
public:
	ThaiBuddhistChronology();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	static ::java::time::chrono::ThaiBuddhistChronology* INSTANCE;
	static const int64_t serialVersionUID = (int64_t)0x26862BEC417F21DA;
	static const int32_t YEARS_DIFFERENCE = 543;
	static ::java::util::HashMap* ERA_NARROW_NAMES;
	static ::java::util::HashMap* ERA_SHORT_NAMES;
	static ::java::util::HashMap* ERA_FULL_NAMES;
	static $String* FALLBACK_LANGUAGE;
	static $String* TARGET_LANGUAGE;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("YEARS_DIFFERENCE")
#pragma pop_macro("TARGET_LANGUAGE")
#pragma pop_macro("ERA_NARROW_NAMES")
#pragma pop_macro("FALLBACK_LANGUAGE")
#pragma pop_macro("ERA_SHORT_NAMES")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("ERA_FULL_NAMES")

#endif // _java_time_chrono_ThaiBuddhistChronology_h_