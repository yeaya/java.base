#ifndef _sun_launcher_resources_launcher_sv_h_
#define _sun_launcher_resources_launcher_sv_h_
//$ class sun.launcher.resources.launcher_sv
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_sv : public ::java::util::ListResourceBundle {
	$class(launcher_sv, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_sv();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_sv_h_