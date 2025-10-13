#ifndef _java_time_chrono_HijrahChronology_h_
#define _java_time_chrono_HijrahChronology_h_
//$ class java.time.chrono.HijrahChronology
//$ extends java.time.chrono.AbstractChronology
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/time/chrono/AbstractChronology.h>

#pragma push_macro("CONF_PATH")
#undef CONF_PATH
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("KEY_ID")
#undef KEY_ID
#pragma push_macro("KEY_ISO_START")
#undef KEY_ISO_START
#pragma push_macro("KEY_TYPE")
#undef KEY_TYPE
#pragma push_macro("KEY_VERSION")
#undef KEY_VERSION
#pragma push_macro("RESOURCE_PREFIX")
#undef RESOURCE_PREFIX
#pragma push_macro("RESOURCE_SUFFIX")
#undef RESOURCE_SUFFIX

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
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
		class Properties;
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import HijrahChronology : public ::java::time::chrono::AbstractChronology, public ::java::io::Serializable {
	$class(HijrahChronology, 0, ::java::time::chrono::AbstractChronology, ::java::io::Serializable)
public:
	HijrahChronology();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* id, $String* calType);
	void checkCalendarInit();
	void checkValidDayOfYear(int32_t dayOfYear);
	void checkValidMonth(int32_t month);
	int32_t checkValidYear(int64_t prolepticYear);
	$ints* createEpochMonths(int32_t epochDay, int32_t minYear, int32_t maxYear, ::java::util::Map* years);
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t month, int32_t dayOfMonth) override;
	virtual ::java::time::chrono::ChronoLocalDate* date(int32_t prolepticYear, int32_t month, int32_t dayOfMonth) override;
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateEpochDay(int64_t epochDay) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateNow() override;
	virtual ::java::time::chrono::ChronoLocalDate* dateNow(::java::time::ZoneId* zone) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateNow(::java::time::Clock* clock) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(::java::time::chrono::Era* era, int32_t yearOfEra, int32_t dayOfYear) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(int32_t prolepticYear, int32_t dayOfYear) override;
	int32_t epochDayToEpochMonth(int32_t epochDay);
	int32_t epochMonthLength(int32_t epochMonth);
	int32_t epochMonthToEpochDay(int32_t epochMonth);
	int32_t epochMonthToMonth(int32_t epochMonth);
	int32_t epochMonthToYear(int32_t epochMonth);
	virtual ::java::time::chrono::Era* eraOf(int32_t eraValue) override;
	virtual ::java::util::List* eras() override;
	virtual $String* getCalendarType() override;
	int32_t getDayOfYear(int32_t prolepticYear, int32_t month);
	int64_t getEpochDay(int32_t prolepticYear, int32_t monthOfYear, int32_t dayOfMonth);
	$ints* getHijrahDateInfo(int32_t epochDay);
	virtual $String* getId() override;
	int32_t getMaximumDayOfYear();
	int32_t getMaximumMonthLength();
	int32_t getMaximumYear();
	int32_t getMinimumMonthLength();
	int32_t getMinimumYear();
	int32_t getMonthLength(int32_t prolepticYear, int32_t monthOfYear);
	int32_t getSmallestMaximumDayOfYear();
	int32_t getYearLength(int32_t prolepticYear);
	virtual bool isLeapYear(int64_t prolepticYear) override;
	static ::java::io::InputStream* lambda$readConfigProperties$1($String* resourceName);
	static ::java::io::InputStream* lambda$readConfigProperties$2($String* resourceName);
	static $String* lambda$registerCustomChrono$3(::java::nio::file::Path* p);
	static bool lambda$registerCustomChrono$4($String* fn);
	static $String* lambda$registerCustomChrono$5($String* fn);
	static void lambda$registerCustomChrono$6($String* idtype);
	static ::java::lang::Void* lambda$registerCustomChrono$7();
	static $String* lambda$static$0();
	void loadCalendarData();
	virtual ::java::time::chrono::ChronoLocalDateTime* localDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	$ints* parseMonths($String* line);
	$ints* parseYMD($String* string);
	virtual int32_t prolepticYear(::java::time::chrono::Era* era, int32_t yearOfEra) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::ChronoField* field) override;
	static ::java::util::Properties* readConfigProperties($String* chronologyId, $String* calendarType);
	void readObject(::java::io::ObjectInputStream* s);
	static void registerCustomChrono();
	virtual ::java::time::chrono::ChronoLocalDate* resolveDate(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual $String* toString() override;
	virtual $Object* writeReplace() override;
	int32_t yearMonthToDayOfYear(int32_t prolepticYear, int32_t month);
	int32_t yearToEpochMonth(int32_t year);
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* zonedDateTime(::java::time::Instant* instant, ::java::time::ZoneId* zone) override;
	$String* typeId = nullptr;
	$String* calendarType = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2B668B59CB61D531;
	static ::java::time::chrono::HijrahChronology* INSTANCE;
	$volatile(bool) initComplete = false;
	$ints* hijrahEpochMonthStartDays = nullptr;
	int32_t minEpochDay = 0;
	int32_t maxEpochDay = 0;
	int32_t hijrahStartEpochMonth = 0;
	int32_t minMonthLength = 0;
	int32_t maxMonthLength = 0;
	int32_t minYearLength = 0;
	int32_t maxYearLength = 0;
	static $String* RESOURCE_PREFIX;
	static $String* RESOURCE_SUFFIX;
	static $String* KEY_ID;
	static $String* KEY_TYPE;
	static $String* KEY_VERSION;
	static $String* KEY_ISO_START;
	static ::java::nio::file::Path* CONF_PATH;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("CONF_PATH")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("KEY_ID")
#pragma pop_macro("KEY_ISO_START")
#pragma pop_macro("KEY_TYPE")
#pragma pop_macro("KEY_VERSION")
#pragma pop_macro("RESOURCE_PREFIX")
#pragma pop_macro("RESOURCE_SUFFIX")

#endif // _java_time_chrono_HijrahChronology_h_