#ifndef _java_time_chrono_ChronoZonedDateTime_h_
#define _java_time_chrono_ChronoZonedDateTime_h_
//$ interface java.time.chrono.ChronoZonedDateTime
//$ extends java.time.temporal.Temporal,java.lang.Comparable

#include <java/lang/Comparable.h>
#include <java/time/temporal/Temporal.h>

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
			class ChronoLocalDateTime;
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
			class TemporalAdjuster;
			class TemporalAmount;
			class TemporalField;
			class TemporalQuery;
			class TemporalUnit;
			class ValueRange;
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

class $export ChronoZonedDateTime : public ::java::time::temporal::Temporal, public ::java::lang::Comparable {
	$interface(ChronoZonedDateTime, $NO_CLASS_INIT, ::java::time::temporal::Temporal, ::java::lang::Comparable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	virtual $Object* clone() override;
	virtual int32_t compareTo(::java::time::chrono::ChronoZonedDateTime* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $String* format(::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::chrono::ChronoZonedDateTime* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual ::java::time::chrono::Chronology* getChronology();
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual ::java::time::ZoneOffset* getOffset() {return nullptr;}
	virtual ::java::time::ZoneId* getZone() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isAfter(::java::time::chrono::ChronoZonedDateTime* other);
	virtual bool isBefore(::java::time::chrono::ChronoZonedDateTime* other);
	virtual bool isEqual(::java::time::chrono::ChronoZonedDateTime* other);
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override {return false;}
	virtual bool isSupported(::java::time::temporal::TemporalUnit* unit) override;
	static int32_t lambda$timeLineOrder$f56e6d02$1(::java::time::chrono::ChronoZonedDateTime* dateTime1, ::java::time::chrono::ChronoZonedDateTime* dateTime2);
	virtual ::java::time::chrono::ChronoZonedDateTime* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override {return nullptr;}
	virtual ::java::time::chrono::ChronoZonedDateTime* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::util::Comparator* timeLineOrder();
	virtual int64_t toEpochSecond();
	virtual ::java::time::Instant* toInstant();
	virtual ::java::time::chrono::ChronoLocalDate* toLocalDate();
	virtual ::java::time::chrono::ChronoLocalDateTime* toLocalDateTime() {return nullptr;}
	virtual ::java::time::LocalTime* toLocalTime();
	virtual $String* toString() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override {return nullptr;}
	virtual ::java::time::chrono::ChronoZonedDateTime* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* withEarlierOffsetAtOverlap() {return nullptr;}
	virtual ::java::time::chrono::ChronoZonedDateTime* withLaterOffsetAtOverlap() {return nullptr;}
	virtual ::java::time::chrono::ChronoZonedDateTime* withZoneSameInstant(::java::time::ZoneId* zone) {return nullptr;}
	virtual ::java::time::chrono::ChronoZonedDateTime* withZoneSameLocal(::java::time::ZoneId* zone) {return nullptr;}
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_ChronoZonedDateTime_h_