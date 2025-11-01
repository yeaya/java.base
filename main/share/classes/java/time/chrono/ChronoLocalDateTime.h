#ifndef _java_time_chrono_ChronoLocalDateTime_h_
#define _java_time_chrono_ChronoLocalDateTime_h_
//$ interface java.time.chrono.ChronoLocalDateTime
//$ extends java.time.temporal.Temporal,java.time.temporal.TemporalAdjuster,java.lang.Comparable

#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAdjuster.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}
namespace java {
	namespace time {
		class Instant;
		class LocalTime;
		class ZoneId;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class ChronoZonedDateTime;
			class Chronology;
		}
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
			class TemporalQuery;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $export ChronoLocalDateTime : public ::java::time::temporal::Temporal, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable {
	$interface(ChronoLocalDateTime, $NO_CLASS_INIT, ::java::time::temporal::Temporal, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable)
public:
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* atZone(::java::time::ZoneId* zone) {return nullptr;}
	virtual $Object* clone() override;
	virtual int32_t compareTo(::java::time::chrono::ChronoLocalDateTime* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::chrono::ChronoLocalDateTime* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::chrono::Chronology* getChronology();
	virtual int32_t hashCode() override;
	virtual bool isAfter(::java::time::chrono::ChronoLocalDateTime* other);
	virtual bool isBefore(::java::time::chrono::ChronoLocalDateTime* other);
	virtual bool isEqual(::java::time::chrono::ChronoLocalDateTime* other);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override {return false;}
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	static int32_t lambda$timeLineOrder$b9959cb5$1(::java::time::chrono::ChronoLocalDateTime* dateTime1, ::java::time::chrono::ChronoLocalDateTime* dateTime2);
	virtual ::java::time::chrono::ChronoLocalDateTime* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::ChronoLocalDateTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoLocalDateTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDateTime* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	static ::java::util::Comparator* timeLineOrder();
	virtual int64_t toEpochSecond(::java::time::ZoneOffset* offset);
	virtual ::java::time::Instant* toInstant(::java::time::ZoneOffset* offset);
	virtual ::java::time::chrono::ChronoLocalDate* toLocalDate() {return nullptr;}
	virtual ::java::time::LocalTime* toLocalTime() {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::time::chrono::ChronoLocalDateTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDateTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_ChronoLocalDateTime_h_