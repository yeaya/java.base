#ifndef _RacyDeregister_h_
#define _RacyDeregister_h_
//$ class RacyDeregister
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIMEOUT_THRESHOLD_MILLIS")
#undef TIMEOUT_THRESHOLD_MILLIS

namespace java {
	namespace lang {
		class Boolean;
	}
}

class $export RacyDeregister : public ::java::lang::Object {
	$class(RacyDeregister, 0, ::java::lang::Object)
public:
	RacyDeregister();
	void init$();
	static void main($StringArray* args);
	static const int32_t TIMEOUT_THRESHOLD_MILLIS = 1080000; // 1200 * 900
	static int64_t t0;
	static bool notified;
	static $Object* selectorLock;
	static $Object* notifyLock;
	static $volatile(::java::lang::Boolean*) succTermination;
};

#pragma pop_macro("TIMEOUT_THRESHOLD_MILLIS")

#endif // _RacyDeregister_h_