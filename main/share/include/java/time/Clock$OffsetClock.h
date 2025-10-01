#ifndef _java_time_Clock$OffsetClock_h_
#define _java_time_Clock$OffsetClock_h_
//$ class java.time.Clock$OffsetClock
//$ extends java.time.Clock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/Clock.h>

namespace java {
	namespace time {
		class Duration;
		class Instant;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $import Clock$OffsetClock : public ::java::time::Clock, public ::java::io::Serializable {
	$class(Clock$OffsetClock, $NO_CLASS_INIT, ::java::time::Clock, ::java::io::Serializable)
public:
	Clock$OffsetClock();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::Clock* baseClock, ::java::time::Duration* offset);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::ZoneId* getZone() override;
	virtual int32_t hashCode() override;
	virtual ::java::time::Instant* instant() override;
	virtual int64_t millis() override;
	virtual $String* toString() override;
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone) override;
	static const int64_t serialVersionUID = (int64_t)0x1BDC04B7477EF050;
	::java::time::Clock* baseClock = nullptr;
	::java::time::Duration* offset = nullptr;
};

	} // time
} // java

#endif // _java_time_Clock$OffsetClock_h_