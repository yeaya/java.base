#ifndef _java_time_Clock$SourceClock_h_
#define _java_time_Clock$SourceClock_h_
//$ class java.time.Clock$SourceClock
//$ extends java.time.Clock
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/Clock.h>

namespace java {
	namespace time {
		class Instant;
		class InstantSource;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $export Clock$SourceClock : public ::java::time::Clock, public ::java::io::Serializable {
	$class(Clock$SourceClock, $NO_CLASS_INIT, ::java::time::Clock, ::java::io::Serializable)
public:
	Clock$SourceClock();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::InstantSource* baseSource, ::java::time::ZoneId* zone);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::ZoneId* getZone() override;
	virtual int32_t hashCode() override;
	virtual ::java::time::Instant* instant() override;
	virtual int64_t millis() override;
	virtual $String* toString() override;
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone) override;
	static const int64_t serialVersionUID = (int64_t)0x0000D615326E8A1E;
	::java::time::InstantSource* baseSource = nullptr;
	::java::time::ZoneId* zone = nullptr;
};

	} // time
} // java

#endif // _java_time_Clock$SourceClock_h_