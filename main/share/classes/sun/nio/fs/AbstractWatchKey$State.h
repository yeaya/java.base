#ifndef _sun_nio_fs_AbstractWatchKey$State_h_
#define _sun_nio_fs_AbstractWatchKey$State_h_
//$ class sun.nio.fs.AbstractWatchKey$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("READY")
#undef READY
#pragma push_macro("SIGNALLED")
#undef SIGNALLED

namespace sun {
	namespace nio {
		namespace fs {

class AbstractWatchKey$State : public ::java::lang::Enum {
	$class(AbstractWatchKey$State, 0, ::java::lang::Enum)
public:
	AbstractWatchKey$State();
	static $Array<::sun::nio::fs::AbstractWatchKey$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::nio::fs::AbstractWatchKey$State* valueOf($String* name);
	static $Array<::sun::nio::fs::AbstractWatchKey$State>* values();
	static ::sun::nio::fs::AbstractWatchKey$State* READY;
	static ::sun::nio::fs::AbstractWatchKey$State* SIGNALLED;
	static $Array<::sun::nio::fs::AbstractWatchKey$State>* $VALUES;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("READY")
#pragma pop_macro("SIGNALLED")

#endif // _sun_nio_fs_AbstractWatchKey$State_h_