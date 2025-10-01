#ifndef _java_time_zone_ZoneRulesException_h_
#define _java_time_zone_ZoneRulesException_h_
//$ class java.time.zone.ZoneRulesException
//$ extends java.time.DateTimeException

#include <java/time/DateTimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace time {
		namespace zone {

class $import ZoneRulesException : public ::java::time::DateTimeException {
	$class(ZoneRulesException, $NO_CLASS_INIT, ::java::time::DateTimeException)
public:
	ZoneRulesException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xE9587BD1CEA8B031;
	ZoneRulesException(const ZoneRulesException& e);
	ZoneRulesException wrapper$();
	virtual void throwWrapper$() override;
};

		} // zone
	} // time
} // java

#endif // _java_time_zone_ZoneRulesException_h_