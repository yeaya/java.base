#ifndef _java_util_ResourceBundle$2_h_
#define _java_util_ResourceBundle$2_h_
//$ class java.util.ResourceBundle$2
//$ extends java.util.ResourceBundle

#include <java/util/ResourceBundle.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace java {
	namespace util {

class ResourceBundle$2 : public ::java::util::ResourceBundle {
	$class(ResourceBundle$2, $NO_CLASS_INIT, ::java::util::ResourceBundle)
public:
	ResourceBundle$2();
	void init$();
	virtual ::java::util::Enumeration* getKeys() override;
	virtual $Object* handleGetObject($String* key) override;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_ResourceBundle$2_h_