#ifndef _sun_nio_fs_ExtendedOptions$InternalOption_h_
#define _sun_nio_fs_ExtendedOptions$InternalOption_h_
//$ class sun.nio.fs.ExtendedOptions$InternalOption
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			class CopyOption;
			class OpenOption;
			class WatchEvent$Modifier;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $import ExtendedOptions$InternalOption : public ::java::lang::Object {
	$class(ExtendedOptions$InternalOption, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExtendedOptions$InternalOption();
	void init$();
	bool matches(Object$* option);
	$Object* parameter();
	void register$(::java::nio::file::OpenOption* option);
	void register$(::java::nio::file::CopyOption* option);
	void register$(::java::nio::file::WatchEvent$Modifier* option);
	void register$(::java::nio::file::WatchEvent$Modifier* option, Object$* param);
	void registerInternal(Object$* option, Object$* param);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_ExtendedOptions$InternalOption_h_