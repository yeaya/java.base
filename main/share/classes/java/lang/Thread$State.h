#ifndef _java_lang_Thread$State_h_
#define _java_lang_Thread$State_h_
//$ class java.lang.Thread$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BLOCKED")
#undef BLOCKED
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("RUNNABLE")
#undef RUNNABLE
#pragma push_macro("TERMINATED")
#undef TERMINATED
#pragma push_macro("TIMED_WAITING")
#undef TIMED_WAITING
#pragma push_macro("WAITING")
#undef WAITING

namespace java {
	namespace lang {

class $export Thread$State : public ::java::lang::Enum {
	$class(Thread$State, 0, ::java::lang::Enum)
public:
	Thread$State();
	static $Array<::java::lang::Thread$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::Thread$State* valueOf($String* name);
	static $Array<::java::lang::Thread$State>* values();
	static ::java::lang::Thread$State* NEW;
	static ::java::lang::Thread$State* RUNNABLE;
	static ::java::lang::Thread$State* BLOCKED;
	static ::java::lang::Thread$State* WAITING;
	static ::java::lang::Thread$State* TIMED_WAITING;
	static ::java::lang::Thread$State* TERMINATED;
	static $Array<::java::lang::Thread$State>* $VALUES;
};

	} // lang
} // java

#pragma pop_macro("BLOCKED")
#pragma pop_macro("NEW")
#pragma pop_macro("RUNNABLE")
#pragma pop_macro("TERMINATED")
#pragma pop_macro("TIMED_WAITING")
#pragma pop_macro("WAITING")

#endif // _java_lang_Thread$State_h_