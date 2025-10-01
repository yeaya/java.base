#ifndef _MultiThreadStackWalk$Call$WalkType_h_
#define _MultiThreadStackWalk$Call$WalkType_h_
//$ class MultiThreadStackWalk$Call$WalkType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("WALKSTACK")
#undef WALKSTACK

class $export MultiThreadStackWalk$Call$WalkType : public ::java::lang::Enum {
	$class(MultiThreadStackWalk$Call$WalkType, 0, ::java::lang::Enum)
public:
	MultiThreadStackWalk$Call$WalkType();
	static $Array<MultiThreadStackWalk$Call$WalkType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::MultiThreadStackWalk$Call$WalkType* valueOf($String* name);
	static $Array<MultiThreadStackWalk$Call$WalkType>* values();
	static ::MultiThreadStackWalk$Call$WalkType* WALKSTACK;
	static $Array<MultiThreadStackWalk$Call$WalkType>* $VALUES;
};

#pragma pop_macro("WALKSTACK")

#endif // _MultiThreadStackWalk$Call$WalkType_h_