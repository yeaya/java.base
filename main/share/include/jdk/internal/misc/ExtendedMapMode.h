#ifndef _jdk_internal_misc_ExtendedMapMode_h_
#define _jdk_internal_misc_ExtendedMapMode_h_
//$ class jdk.internal.misc.ExtendedMapMode
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("READ_WRITE_SYNC")
#undef READ_WRITE_SYNC
#pragma push_macro("MAP_MODE_CONSTRUCTOR")
#undef MAP_MODE_CONSTRUCTOR
#pragma push_macro("READ_ONLY_SYNC")
#undef READ_ONLY_SYNC

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel$MapMode;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import ExtendedMapMode : public ::java::lang::Object {
	$class(ExtendedMapMode, 0, ::java::lang::Object)
public:
	ExtendedMapMode();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* lambda$static$0();
	static ::java::nio::channels::FileChannel$MapMode* newMapMode($String* name);
	static ::java::lang::invoke::MethodHandle* MAP_MODE_CONSTRUCTOR;
	static ::java::nio::channels::FileChannel$MapMode* READ_ONLY_SYNC;
	static ::java::nio::channels::FileChannel$MapMode* READ_WRITE_SYNC;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("READ_WRITE_SYNC")
#pragma pop_macro("MAP_MODE_CONSTRUCTOR")
#pragma pop_macro("READ_ONLY_SYNC")

#endif // _jdk_internal_misc_ExtendedMapMode_h_