#ifndef _sun_launcher_resources_launcher_ja_h_
#define _sun_launcher_resources_launcher_ja_h_
//$ class sun.launcher.resources.launcher_ja
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_ja : public ::java::util::ListResourceBundle {
	$class(launcher_ja, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_ja();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_ja_h_