#ifndef _sun_util_resources_Bundles$1_h_
#define _sun_util_resources_Bundles$1_h_
//$ class sun.util.resources.Bundles$1
//$ extends java.util.ResourceBundle

#include <java/util/ResourceBundle.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class Bundles$1 : public ::java::util::ResourceBundle {
	$class(Bundles$1, $NO_CLASS_INIT, ::java::util::ResourceBundle)
public:
	Bundles$1();
	void init$();
	virtual ::java::util::Enumeration* getKeys() override;
	virtual $Object* handleGetObject($String* key) override;
	virtual $String* toString() override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_Bundles$1_h_