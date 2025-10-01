#ifndef _sun_util_resources_TimeZoneNamesBundle_h_
#define _sun_util_resources_TimeZoneNamesBundle_h_
//$ class sun.util.resources.TimeZoneNamesBundle
//$ extends sun.util.resources.OpenListResourceBundle

#include <sun/util/resources/OpenListResourceBundle.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace sun {
	namespace util {
		namespace resources {

class $import TimeZoneNamesBundle : public ::sun::util::resources::OpenListResourceBundle {
	$class(TimeZoneNamesBundle, $NO_CLASS_INIT, ::sun::util::resources::OpenListResourceBundle)
public:
	TimeZoneNamesBundle();
	virtual $Array<::java::lang::Object, 2>* getContents() override {return nullptr;}
	void init$();
	virtual ::java::util::Map* createMap(int32_t size) override;
	virtual ::java::util::Set* createSet() override;
	virtual $Object* handleGetObject($String* key) override;
};

		} // resources
	} // util
} // sun

#endif // _sun_util_resources_TimeZoneNamesBundle_h_