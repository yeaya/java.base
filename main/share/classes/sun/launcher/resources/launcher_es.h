#ifndef _sun_launcher_resources_launcher_es_h_
#define _sun_launcher_resources_launcher_es_h_
//$ class sun.launcher.resources.launcher_es
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace launcher {
		namespace resources {

class launcher_es : public ::java::util::ListResourceBundle {
	$class(launcher_es, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	launcher_es();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // launcher
} // sun

#endif // _sun_launcher_resources_launcher_es_h_