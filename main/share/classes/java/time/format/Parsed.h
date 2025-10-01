#ifndef _java_time_format_Parsed_h_
#define _java_time_format_Parsed_h_
//$ class java.time.format.Parsed
//$ extends java.time.temporal.TemporalAccessor

#include <java/time/temporal/TemporalAccessor.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace time {
		class LocalTime;
		class Period;
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatterBuilder$DayPeriod;
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
			class TemporalQuery;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace java {
	namespace time {
		namespace format {

class Parsed : public ::java::time::temporal::TemporalAccessor {
	$class(Parsed, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor)
public:
	Parsed();
	void init$();
	::java::time::format::Parsed* copy();
	void crossCheck();
	void crossCheck(::java::time::temporal::TemporalAccessor* target);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	::java::time::temporal::TemporalAccessor* resolve(::java::time::format::ResolverStyle* resolverStyle, ::java::util::Set* resolverFields);
	void resolveDateFields();
	void resolveFields();
	void resolveFractional();
	void resolveInstant();
	void resolveInstantFields();
	void resolveInstantFields0(::java::time::ZoneId* selectedZone);
	void resolvePeriod();
	void resolveTime(int64_t hod, int64_t moh, int64_t som, int64_t nos);
	void resolveTimeFields();
	void resolveTimeLenient();
	virtual $String* toString() override;
	void updateCheckConflict(::java::time::temporal::TemporalField* targetField, ::java::time::temporal::TemporalField* changeField, ::java::lang::Long* changeValue);
	void updateCheckConflict(::java::time::chrono::ChronoLocalDate* cld);
	void updateCheckConflict(::java::time::LocalTime* timeToSet, ::java::time::Period* periodToSet);
	::java::util::Map* fieldValues = nullptr;
	::java::time::ZoneId* zone = nullptr;
	::java::time::chrono::Chronology* chrono = nullptr;
	bool leapSecond = false;
	::java::time::format::ResolverStyle* resolverStyle = nullptr;
	::java::time::chrono::ChronoLocalDate* date = nullptr;
	::java::time::LocalTime* time = nullptr;
	::java::time::Period* excessDays = nullptr;
	::java::time::format::DateTimeFormatterBuilder$DayPeriod* dayPeriod = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_Parsed_h_