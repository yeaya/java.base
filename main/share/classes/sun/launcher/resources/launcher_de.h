#ifndef _sun_launcher_resources_launcher_de_h_
#define _sun_launcher_resources_launcher_de_h_
//$ class sun.launcher.resources.launcher_de
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_de : public ::java::util::ListResourceBundle {
	$class(launcher_de, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_de();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_de_h_