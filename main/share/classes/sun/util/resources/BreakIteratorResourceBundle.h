#ifndef _sun_util_resources_BreakIteratorResourceBundle_h_
#define _sun_util_resources_BreakIteratorResourceBundle_h_
//$ class sun.util.resources.BreakIteratorResourceBundle
//$ extends java.util.ResourceBundle

#include <java/util/ResourceBundle.h>

#pragma push_macro("NON_DATA_KEYS")
#undef NON_DATA_KEYS

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Set;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $export BreakIteratorResourceBundle : public ::java::util::ResourceBundle {
	$class(BreakIteratorResourceBundle, 0, ::java::util::ResourceBundle)
public:
	BreakIteratorResourceBundle();
	void init$();
	virtual ::java::util::ResourceBundle* getBreakIteratorInfo() {return nullptr;}
	virtual ::java::util::Enumeration* getKeys() override;
	::java::io::InputStream* getResourceAsStream($String* path);
	virtual $Object* handleGetObject($String* key) override;
	virtual ::java::util::Set* handleKeySet() override;
	::java::io::InputStream* lambda$getResourceAsStream$0($String* path);
	static ::java::util::Set* NON_DATA_KEYS;
	$volatile(::java::util::Set*) keys = nullptr;
};

		} // resources
	} // util
} // sun

#pragma pop_macro("NON_DATA_KEYS")

#endif // _sun_util_resources_BreakIteratorResourceBundle_h_