#ifndef _sun_launcher_resources_launcher_h_
#define _sun_launcher_resources_launcher_h_
//$ class sun.launcher.resources.launcher
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher : public ::java::util::ListResourceBundle {
	$class(launcher, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_h_