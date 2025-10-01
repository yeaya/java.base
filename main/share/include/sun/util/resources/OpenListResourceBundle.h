#ifndef _sun_util_resources_OpenListResourceBundle_h_
#define _sun_util_resources_OpenListResourceBundle_h_
//$ class sun.util.resources.OpenListResourceBundle
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

namespace sun {
	namespace util {
		namespace resources {

class $import OpenListResourceBundle : public ::java::util::ResourceBundle {
	$class(OpenListResourceBundle, $NO_CLASS_INIT, ::java::util::ResourceBundle)
public:
	OpenListResourceBundle();
	void init$();
	virtual ::java::util::Map* createMap(int32_t size);
	virtual ::java::util::Set* createSet();
	virtual $Array<::java::lang::Object, 2>* getContents() {return nullptr;}
	virtual ::java::util::Enumeration* getKeys() override;
	virtual $Object* handleGetObject($String* key) override;
	virtual ::java::util::Set* handleKeySet() override;
	virtual ::java::util::Set* keySet() override;
	void loadLookup();
	virtual void loadLookupTablesIfNecessary();
	$volatile(::java::util::Map*) lookup = nullptr;
	$volatile(::java::util::Set*) keyset = nullptr;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_OpenListResourceBundle_h_