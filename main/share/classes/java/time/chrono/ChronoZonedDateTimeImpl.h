#ifndef _java_time_chrono_ChronoZonedDateTimeImpl_h_
#define _java_time_chrono_ChronoZonedDateTimeImpl_h_
//$ class java.time.chrono.ChronoZonedDateTimeImpl
//$ extends java.time.chrono.ChronoZonedDateTime
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoZonedDateTime.h>

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectInputStream;
		class ObjectOutput;
	}
}
namespace java {
	namespace time {
		class Instant;
		class ZoneId;
		class ZoneOffset;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDateTime;
			class ChronoLocalDateTimeImpl;
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalField;
			class TemporalUnit;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class ChronoZonedDateTimeImpl : public ::java::time::chrono::ChronoZonedDateTime, public ::java::io::Serializable {
	$class(ChronoZonedDateTimeImpl, $NO_CLASS_INIT, ::java::time::chrono::ChronoZonedDateTime, ::java::io::Serializable)
public:
	ChronoZonedDateTimeImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::chrono::ChronoLocalDateTimeImpl* dateTime, ::java::time::ZoneOffset* offset, ::java::time::ZoneId* zone);
	::java::time::chrono::ChronoZonedDateTimeImpl* create(::java::time::Instant* instant, ::java::time::ZoneId* zone);
	static ::java::time::chrono::ChronoZonedDateTimeImpl* ensureValid(::java::time::chrono::Chronology* chrono, ::java::time::temporal::Temporal* temporal);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::ZoneOffset* getOffset() override;
	virtual ::java::time::ZoneId* getZone() override;
	virtual int32_t hashCode() override;
	using ::java::time::chrono::ChronoZonedDateTime::isSupported;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	static ::java::time::chrono::ChronoZonedDateTime* ofBest(::java::time::chrono::ChronoLocalDateTimeImpl* localDateTime, ::java::time::ZoneId* zone, ::java::time::ZoneOffset* preferredOffset);
	static ::java::time::chrono::ChronoZonedDateTimeImpl* ofInstant(::java::time::chrono::Chronology* chrono, ::java::time::Instant* instant, ::java::time::ZoneId* zone);
	using ::java::time::chrono::ChronoZonedDateTime::plus;
	virtual ::java::time::chrono::ChronoZonedDateTime* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	static ::java::time::chrono::ChronoZonedDateTime* readExternal(::java::io::ObjectInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::chrono::ChronoLocalDateTime* toLocalDateTime() override;
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	using ::java::time::chrono::ChronoZonedDateTime::with;
	virtual ::java::time::chrono::ChronoZonedDateTime* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* withEarlierOffsetAtOverlap() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* withLaterOffsetAtOverlap() override;
	virtual ::java::time::chrono::ChronoZonedDateTime* withZoneSameInstant(::java::time::ZoneId* zone) override;
	virtual ::java::time::chrono::ChronoZonedDateTime* withZoneSameLocal(::java::time::ZoneId* zone) override;
	void writeExternal(::java::io::ObjectOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xB6FA480E92B4D959;
	::java::time::chrono::ChronoLocalDateTimeImpl* dateTime = nullptr;
	::java::time::ZoneOffset* offset = nullptr;
	::java::time::ZoneId* zone = nullptr;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_ChronoZonedDateTimeImpl_h_