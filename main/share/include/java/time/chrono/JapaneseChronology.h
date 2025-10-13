#ifndef _java_time_chrono_JapaneseChronology_h_
#define _java_time_chrono_JapaneseChronology_h_
//$ class java.time.chrono.JapaneseChronology
//$ extends java.time.chrono.AbstractChronology
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/AbstractChronology.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("JCAL")
#undef JCAL
#pragma push_macro("LOCALE")
#undef LOCALE

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
			class JapaneseEra;
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
		class Locale;
		class Map;
	}
}
namespace sun {
	namespace util {
		namespace calendar {
			class LocalGregorianCalendar;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import JapaneseChronology : public ::java::time::chrono::AbstractChronology, public ::java::io::Serializable {
	$class(JapaneseChronology, 0, ::java::time::chrono::AbstractChronology, ::java::io::Serializable)
public:
	JapaneseChronology();
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
	::java::time::chrono::JapaneseEra* getCurrentEra();
	virtual $String* getId() override;
	virtual bool isLeapYear(int64_t prolepticYear) override;
	virtual ::java::time::chrono::ChronoLocalDateTime* localDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual int32_t prolepticYear(::java::time::chrono::Era* era, int32_t yearOfEra) override;
	int32_t prolepticYearLenient(::java::time::chrono::JapaneseEra* era, int32_t yearOfEra);
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::ChronoField* field) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::chrono::ChronoLocalDate* resolveDate(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	using ::java::time::chrono::AbstractChronology::resolveYD;
	::java::time::chrono::ChronoLocalDate* resolveYD(::java::time::chrono::JapaneseEra* era, int32_t yoe, ::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	using ::java::time::chrono::AbstractChronology::resolveYMD;
	::java::time::chrono::ChronoLocalDate* resolveYMD(::java::time::chrono::JapaneseEra* era, int32_t yoe, ::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYearOfEra(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual $String* toString() override;
	virtual $Object* writeReplace() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::Instant* instant, ::java::time::ZoneId* zone) override;
	static ::sun::util::calendar::LocalGregorianCalendar* JCAL;
	static ::java::util::Locale* LOCALE;
	static ::java::time::chrono::JapaneseChronology* INSTANCE;
	static const int64_t serialVersionUID = (int64_t)0x06623C4799CB0DDC;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("INSTANCE")
#pragma pop_macro("JCAL")
#pragma pop_macro("LOCALE")

#endif // _java_time_chrono_JapaneseChronology_h_