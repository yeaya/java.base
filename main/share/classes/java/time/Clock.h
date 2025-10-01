#ifndef _java_time_Clock_h_
#define _java_time_Clock_h_
//$ class java.time.Clock
//$ extends java.time.InstantSource

#include <java/time/InstantSource.h>

#pragma push_macro("OFFSET_SEED")
#undef OFFSET_SEED

namespace java {
	namespace time {
		class Duration;
		class Instant;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $export Clock : public ::java::time::InstantSource {
	$class(Clock, 0, ::java::time::InstantSource)
public:
	Clock();
	virtual ::java::time::Instant* instant() override {return nullptr;}
	void init$();
	static ::java::time::Instant* currentInstant();
	virtual bool equals(Object$* obj) override;
	static ::java::time::Clock* fixed(::java::time::Instant* fixedInstant, ::java::time::ZoneId* zone);
	virtual ::java::time::ZoneId* getZone() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual int64_t millis() override;
	static ::java::time::Clock* offset(::java::time::Clock* baseClock, ::java::time::Duration* offsetDuration);
	static ::java::time::Clock* system(::java::time::ZoneId* zone);
	static ::java::time::Clock* systemDefaultZone();
	static ::java::time::Clock* systemUTC();
	static ::java::time::Clock* tick(::java::time::Clock* baseClock, ::java::time::Duration* tickDuration);
	static ::java::time::Clock* tickMillis(::java::time::ZoneId* zone);
	static ::java::time::Clock* tickMinutes(::java::time::ZoneId* zone);
	static ::java::time::Clock* tickSeconds(::java::time::ZoneId* zone);
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone) override {return nullptr;}
	static int64_t OFFSET_SEED;
	static int64_t offset$;
};

	} // time
} // java

#pragma pop_macro("OFFSET_SEED")

#endif // _java_time_Clock_h_