#ifndef _sun_launcher_LauncherHelper$FXHelper_h_
#define _sun_launcher_LauncherHelper$FXHelper_h_
//$ class sun.launcher.LauncherHelper$FXHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JAVAFX_GRAPHICS_MODULE_NAME")
#undef JAVAFX_GRAPHICS_MODULE_NAME
#pragma push_macro("JAVAFX_LAUNCHER_CLASS_NAME")
#undef JAVAFX_LAUNCHER_CLASS_NAME
#pragma push_macro("JAVAFX_LAUNCH_MODE_CLASS")
#undef JAVAFX_LAUNCH_MODE_CLASS
#pragma push_macro("JAVAFX_LAUNCH_MODE_JAR")
#undef JAVAFX_LAUNCH_MODE_JAR
#pragma push_macro("JAVAFX_LAUNCH_MODE_MODULE")
#undef JAVAFX_LAUNCH_MODE_MODULE

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace sun {
	namespace launcher {

class $export LauncherHelper$FXHelper : public ::java::lang::Object {
	$class(LauncherHelper$FXHelper, 0, ::java::lang::Object)
public:
	LauncherHelper$FXHelper();
	void init$();
	static void main($StringArray* args);
	static void setFXLaunchParameters($String* what, int32_t mode);
	static $String* JAVAFX_GRAPHICS_MODULE_NAME;
	static $String* JAVAFX_LAUNCHER_CLASS_NAME;
	static $String* JAVAFX_LAUNCH_MODE_CLASS;
	static $String* JAVAFX_LAUNCH_MODE_JAR;
	static $String* JAVAFX_LAUNCH_MODE_MODULE;
	static $String* fxLaunchName;
	static $String* fxLaunchMode;
	static $Class* fxLauncherClass;
	static ::java::lang::reflect::Method* fxLauncherMethod;
};

	} // launcher
} // sun

#pragma pop_macro("JAVAFX_GRAPHICS_MODULE_NAME")
#pragma pop_macro("JAVAFX_LAUNCHER_CLASS_NAME")
#pragma pop_macro("JAVAFX_LAUNCH_MODE_CLASS")
#pragma pop_macro("JAVAFX_LAUNCH_MODE_JAR")
#pragma pop_macro("JAVAFX_LAUNCH_MODE_MODULE")

#endif // _sun_launcher_LauncherHelper$FXHelper_h_