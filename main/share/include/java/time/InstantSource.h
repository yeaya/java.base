#ifndef _java_time_InstantSource_h_
#define _java_time_InstantSource_h_
//$ interface java.time.InstantSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		class Clock;
		class Duration;
		class Instant;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $import InstantSource : public ::java::lang::Object {
	$interface(InstantSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::java::time::InstantSource* fixed(::java::time::Instant* fixedInstant);
	virtual ::java::time::Instant* instant() {return nullptr;}
	virtual int64_t millis();
	static ::java::time::InstantSource* offset(::java::time::InstantSource* baseSource, ::java::time::Duration* offsetDuration);
	static ::java::time::InstantSource* system();
	static ::java::time::InstantSource* tick(::java::time::InstantSource* baseSource, ::java::time::Duration* tickDuration);
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone);
};

	} // time
} // java

#endif // _java_time_InstantSource_h_