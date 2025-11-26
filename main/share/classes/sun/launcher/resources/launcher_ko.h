#ifndef _sun_launcher_resources_launcher_ko_h_
#define _sun_launcher_resources_launcher_ko_h_
//$ class sun.launcher.resources.launcher_ko
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_ko : public ::java::util::ListResourceBundle {
	$class(launcher_ko, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_ko();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_ko_h_