#ifndef _sun_launcher_resources_launcher_zh_HK_h_
#define _sun_launcher_resources_launcher_zh_HK_h_
//$ class sun.launcher.resources.launcher_zh_HK
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_zh_HK : public ::java::util::ListResourceBundle {
	$class(launcher_zh_HK, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_zh_HK();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_zh_HK_h_