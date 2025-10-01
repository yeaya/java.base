#ifndef _sun_launcher_LauncherHelper$StdArg_h_
#define _sun_launcher_LauncherHelper$StdArg_h_
//$ class sun.launcher.LauncherHelper$StdArg
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace launcher {

class LauncherHelper$StdArg : public ::java::lang::Object {
	$class(LauncherHelper$StdArg, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LauncherHelper$StdArg();
	void init$($String* arg, bool expand);
	void init$($String* in);
	virtual $String* toString() override;
	$String* arg = nullptr;
	bool needsExpansion = false;
};

	} // launcher
} // sun

#endif // _sun_launcher_LauncherHelper$StdArg_h_