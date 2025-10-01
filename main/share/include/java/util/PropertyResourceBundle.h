#ifndef _java_util_PropertyResourceBundle_h_
#define _java_util_PropertyResourceBundle_h_
//$ class java.util.PropertyResourceBundle
//$ extends java.util.ResourceBundle

#include <java/util/ResourceBundle.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Map;
		class Set;
	}
}

namespace java {
	namespace util {

class $import PropertyResourceBundle : public ::java::util::ResourceBundle {
	$class(PropertyResourceBundle, 0, ::java::util::ResourceBundle)
public:
	PropertyResourceBundle();
	void init$(::java::io::InputStream* stream);
	void init$(::java::io::Reader* reader);
	virtual ::java::util::Enumeration* getKeys() override;
	virtual $Object* handleGetObject($String* key) override;
	virtual ::java::util::Set* handleKeySet() override;
	static $String* encoding;
	::java::util::Map* lookup = nullptr;
};

	} // util
} // java

#endif // _java_util_PropertyResourceBundle_h_