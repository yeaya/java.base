#ifndef _java_time_chrono_ChronoLocalDateTimeImpl_h_
#define _java_time_chrono_ChronoLocalDateTimeImpl_h_
//$ class java.time.chrono.ChronoLocalDateTimeImpl
//$ extends java.time.chrono.ChronoLocalDateTime
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoLocalDateTime.h>

#pragma push_macro("HOURS_PER_DAY")
#undef HOURS_PER_DAY
#pragma push_macro("MICROS_PER_DAY")
#undef MICROS_PER_DAY
#pragma push_macro("MILLIS_PER_DAY")
#undef MILLIS_PER_DAY
#pragma push_macro("MINUTES_PER_DAY")
#undef MINUTES_PER_DAY
#pragma push_macro("MINUTES_PER_HOUR")
#undef MINUTES_PER_HOUR
#pragma push_macro("NANOS_PER_DAY")
#undef NANOS_PER_DAY
#pragma push_macro("NANOS_PER_HOUR")
#undef NANOS_PER_HOUR
#pragma push_macro("NANOS_PER_MINUTE")
#undef NANOS_PER_MINUTE
#pragma push_macro("NANOS_PER_SECOND")
#undef NANOS_PER_SECOND
#pragma push_macro("SECONDS_PER_DAY")
#undef SECONDS_PER_DAY
#pragma push_macro("SECONDS_PER_HOUR")
#undef SECONDS_PER_HOUR
#pragma push_macro("SECONDS_PER_MINUTE")
#undef SECONDS_PER_MINUTE

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectInputStream;
		class ObjectOutput;
	}
}
namespace java {
	namespace time {
		class LocalTime;
		class ZoneId;
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
		namespace temporal {
			class Temporal;
			class TemporalAdjuster;
			class TemporalField;
			class TemporalUnit;
			class ValueRange;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class ChronoLocalDateTimeImpl : public ::java::time::chrono::ChronoLocalDateTime, public ::java::io::Serializable {
	$class(ChronoLocalDateTimeImpl, $NO_CLASS_INIT, ::java::time::chrono::ChronoLocalDateTime, ::java::io::Serializable)
public:
	ChronoLocalDateTimeImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::chrono::ChronoLocalDate* date, ::java::time::LocalTime* time);
	virtual ::java::time::chrono::ChronoZonedDateTime* atZone(::java::time::ZoneId* zone) override;
	static ::java::time::chrono::ChronoLocalDateTimeImpl* ensureValid(::java::time::chrono::Chronology* chrono, ::java::time::temporal::Temporal* temporal);
	virtual bool equals(Object$* obj) override;
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual int32_t hashCode() override;
	using ::java::time::chrono::ChronoLocalDateTime::isSupported;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::ChronoLocalDateTimeImpl* of(::java::time::chrono::ChronoLocalDate* date, ::java::time::LocalTime* time);
	using ::java::time::chrono::ChronoLocalDateTime::plus;
	virtual ::java::time::chrono::ChronoLocalDateTimeImpl* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::chrono::ChronoLocalDateTimeImpl* plusDays(int64_t days);
	::java::time::chrono::ChronoLocalDateTimeImpl* plusHours(int64_t hours);
	::java::time::chrono::ChronoLocalDateTimeImpl* plusMinutes(int64_t minutes);
	::java::time::chrono::ChronoLocalDateTimeImpl* plusNanos(int64_t nanos);
	::java::time::chrono::ChronoLocalDateTimeImpl* plusSeconds(int64_t seconds);
	::java::time::chrono::ChronoLocalDateTimeImpl* plusWithOverflow(::java::time::chrono::ChronoLocalDate* newDate, int64_t hours, int64_t minutes, int64_t seconds, int64_t nanos);
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::ChronoLocalDateTime* readExternal(::java::io::ObjectInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::chrono::ChronoLocalDate* toLocalDate() override;
	virtual ::java::time::LocalTime* toLocalTime() override;
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	::java::time::chrono::ChronoLocalDateTimeImpl* with(::java::time::temporal::Temporal* newDate, ::java::time::LocalTime* newTime);
	virtual ::java::time::chrono::ChronoLocalDateTimeImpl* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::chrono::ChronoLocalDateTimeImpl* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	void writeExternal(::java::io::ObjectOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x3F3A2D24660EEBE2;
	static const int32_t HOURS_PER_DAY = 24;
	static const int32_t MINUTES_PER_HOUR = 60;
	static const int32_t MINUTES_PER_DAY = 1440; // MINUTES_PER_HOUR * HOURS_PER_DAY
	static const int32_t SECONDS_PER_MINUTE = 60;
	static const int32_t SECONDS_PER_HOUR = 3600; // SECONDS_PER_MINUTE * MINUTES_PER_HOUR
	static const int32_t SECONDS_PER_DAY = 86400; // SECONDS_PER_HOUR * HOURS_PER_DAY
	static const int64_t MILLIS_PER_DAY = 86400000; // SECONDS_PER_DAY * (int64_t)1000
	static const int64_t MICROS_PER_DAY = 86400000000; // SECONDS_PER_DAY * (int64_t)1000000
	static const int64_t NANOS_PER_SECOND = (int64_t)1000000000;
	static const int64_t NANOS_PER_MINUTE = 60000000000; // NANOS_PER_SECOND * SECONDS_PER_MINUTE
	static const int64_t NANOS_PER_HOUR = 3600000000000; // NANOS_PER_MINUTE * MINUTES_PER_HOUR
	static const int64_t NANOS_PER_DAY = 86400000000000; // NANOS_PER_HOUR * HOURS_PER_DAY
	::java::time::chrono::ChronoLocalDate* date = nullptr;
	::java::time::LocalTime* time = nullptr;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("HOURS_PER_DAY")
#pragma pop_macro("MICROS_PER_DAY")
#pragma pop_macro("MILLIS_PER_DAY")
#pragma pop_macro("MINUTES_PER_DAY")
#pragma pop_macro("MINUTES_PER_HOUR")
#pragma pop_macro("NANOS_PER_DAY")
#pragma pop_macro("NANOS_PER_HOUR")
#pragma pop_macro("NANOS_PER_MINUTE")
#pragma pop_macro("NANOS_PER_SECOND")
#pragma pop_macro("SECONDS_PER_DAY")
#pragma pop_macro("SECONDS_PER_HOUR")
#pragma pop_macro("SECONDS_PER_MINUTE")

#endif // _java_time_chrono_ChronoLocalDateTimeImpl_h_