#ifndef _sun_nio_fs_ExtendedOptions$Wrapper_h_
#define _sun_nio_fs_ExtendedOptions$Wrapper_h_
//$ class sun.nio.fs.ExtendedOptions$Wrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class ExtendedOptions$Wrapper : public ::java::lang::Object {
	$class(ExtendedOptions$Wrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExtendedOptions$Wrapper();
	void init$(Object$* option, Object$* param);
	$Object* parameter();
	$Object* option = nullptr;
	$Object* param = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_ExtendedOptions$Wrapper_h_