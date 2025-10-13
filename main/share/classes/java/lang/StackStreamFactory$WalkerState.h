#ifndef _java_lang_StackStreamFactory$WalkerState_h_
#define _java_lang_StackStreamFactory$WalkerState_h_
//$ class java.lang.StackStreamFactory$WalkerState
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("OPEN")
#undef OPEN

namespace java {
	namespace lang {

class StackStreamFactory$WalkerState : public ::java::lang::Enum {
	$class(StackStreamFactory$WalkerState, 0, ::java::lang::Enum)
public:
	StackStreamFactory$WalkerState();
	static $Array<::java::lang::StackStreamFactory$WalkerState>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::lang::StackStreamFactory$WalkerState* valueOf($String* name);
	static $Array<::java::lang::StackStreamFactory$WalkerState>* values();
	static ::java::lang::StackStreamFactory$WalkerState* NEW;
	static ::java::lang::StackStreamFactory$WalkerState* OPEN;
	static ::java::lang::StackStreamFactory$WalkerState* CLOSED;
	static $Array<::java::lang::StackStreamFactory$WalkerState>* $VALUES;
};

	} // lang
} // java

#pragma pop_macro("CLOSED")
#pragma pop_macro("NEW")
#pragma pop_macro("OPEN")

#endif // _java_lang_StackStreamFactory$WalkerState_h_