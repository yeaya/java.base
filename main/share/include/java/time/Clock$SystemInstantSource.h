#ifndef _java_time_Clock$SystemInstantSource_h_
#define _java_time_Clock$SystemInstantSource_h_
//$ class java.time.Clock$SystemInstantSource
//$ extends java.time.InstantSource
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/InstantSource.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace time {
		class Clock;
		class Instant;
		class ZoneId;
	}
}

namespace java {
	namespace time {

class $import Clock$SystemInstantSource : public ::java::time::InstantSource, public ::java::io::Serializable {
	$class(Clock$SystemInstantSource, 0, ::java::time::InstantSource, ::java::io::Serializable)
public:
	Clock$SystemInstantSource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual ::java::time::Instant* instant() override;
	virtual int64_t millis() override;
	$Object* readResolve();
	virtual $String* toString() override;
	virtual ::java::time::Clock* withZone(::java::time::ZoneId* zone) override;
	static const int64_t serialVersionUID = (int64_t)0x000002F09A08CC2C;
	static ::java::time::Clock$SystemInstantSource* INSTANCE;
};

	} // time
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_time_Clock$SystemInstantSource_h_