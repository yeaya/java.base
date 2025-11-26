#ifndef _sun_launcher_resources_launcher_fr_h_
#define _sun_launcher_resources_launcher_fr_h_
//$ class sun.launcher.resources.launcher_fr
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_fr : public ::java::util::ListResourceBundle {
	$class(launcher_fr, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_fr();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_fr_h_