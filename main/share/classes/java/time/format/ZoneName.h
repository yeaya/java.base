#ifndef _java_time_format_ZoneName_h_
#define _java_time_format_ZoneName_h_
//$ class java.time.format.ZoneName
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace java {
	namespace time {
		namespace format {

class ZoneName : public ::java::lang::Object {
	$class(ZoneName, 0, ::java::lang::Object)
public:
	ZoneName();
	void init$();
	static $String* toZid($String* zid, ::java::util::Locale* locale);
	static $String* toZid($String* zid);
	static $StringArray* zidMap;
	static $StringArray* mzoneMap;
	static $StringArray* aliasMap;
	static ::java::util::Map* zidToMzone;
	static ::java::util::Map* mzoneToZid;
	static ::java::util::Map* mzoneToZidL;
	static ::java::util::Map* aliases;
};

		} // format
	} // time
} // java

#endif // _java_time_format_ZoneName_h_