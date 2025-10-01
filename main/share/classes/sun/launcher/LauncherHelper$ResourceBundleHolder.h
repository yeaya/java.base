#ifndef _sun_launcher_LauncherHelper$ResourceBundleHolder_h_
#define _sun_launcher_LauncherHelper$ResourceBundleHolder_h_
//$ class sun.launcher.LauncherHelper$ResourceBundleHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("RB")
#undef RB

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace sun {
	namespace launcher {

class LauncherHelper$ResourceBundleHolder : public ::java::lang::Object {
	$class(LauncherHelper$ResourceBundleHolder, 0, ::java::lang::Object)
public:
	LauncherHelper$ResourceBundleHolder();
	void init$();
	static ::java::util::ResourceBundle* RB;
};

	} // launcher
} // sun

#pragma pop_macro("RB")

#endif // _sun_launcher_LauncherHelper$ResourceBundleHolder_h_