#ifndef _java_time_Clock$TickClock_h_
#define _java_time_Clock$TickClock_h_
//$ class java.time.Clock$TickClock
//$ extends java.time.Clock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/Clock.h>

namespace java {
	namespace time {
		class Instant;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $export Clock$TickClock : public ::java::time::Clock, public ::java::io::Serializable {
	$class(Clock$TickClock, $NO_CLASS_INIT, ::java::time::Clock, ::java::io::Serializable)
public:
	Clock$TickClock();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::Clock* baseClock, int64_t tickNanos);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::ZoneId* getZone() override;
	virtual int32_t hashCode() override;
	virtual ::java::time::Instant* instant() override;
	virtual int64_t millis() override;
	virtual $String* toString() override;
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone) override;
	static const int64_t serialVersionUID = (int64_t)0x5A4531089F29D952;
	::java::time::Clock* baseClock = nullptr;
	int64_t tickNanos = 0;
};

	} // time
} // java

#endif // _java_time_Clock$TickClock_h_