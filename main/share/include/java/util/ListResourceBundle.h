#ifndef _java_util_ListResourceBundle_h_
#define _java_util_ListResourceBundle_h_
//$ class java.util.ListResourceBundle
//$ extends java.util.ResourceBundle

#include <java/lang/Array.h>
#include <java/util/ResourceBundle.h>

namespace java {
	namespace util {
		class Enumeration;
		class Map;
		class Set;
	}
}

namespace java {
	namespace util {

class $import ListResourceBundle : public ::java::util::ResourceBundle {
	$class(ListResourceBundle, $NO_CLASS_INIT, ::java::util::ResourceBundle)
public:
	ListResourceBundle();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() {return nullptr;}
	virtual ::java::util::Enumeration* getKeys() override;
	virtual $Object* handleGetObject($String* key) override;
	virtual ::java::util::Set* handleKeySet() override;
	void loadLookup();
	$volatile(::java::util::Map*) lookup = nullptr;
};

	} // util
} // java

#endif // _java_util_ListResourceBundle_h_