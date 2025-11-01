#ifndef _java_time_Clock$SystemClock_h_
#define _java_time_Clock$SystemClock_h_
//$ class java.time.Clock$SystemClock
//$ extends java.time.Clock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/Clock.h>

#pragma push_macro("UTC")
#undef UTC

namespace java {
	namespace time {
		class Instant;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $import Clock$SystemClock : public ::java::time::Clock, public ::java::io::Serializable {
	$class(Clock$SystemClock, 0, ::java::time::Clock, ::java::io::Serializable)
public:
	Clock$SystemClock();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::ZoneId* zone);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::ZoneId* getZone() override;
	virtual int32_t hashCode() override;
	virtual ::java::time::Instant* instant() override;
	virtual int64_t millis() override;
	virtual $String* toString() override;
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone) override;
	static const int64_t serialVersionUID = (int64_t)0x5D8B8814510769EB;
	static ::java::time::Clock$SystemClock* UTC;
	::java::time::ZoneId* zone = nullptr;
};

	} // time
} // java

#pragma pop_macro("UTC")

#endif // _java_time_Clock$SystemClock_h_