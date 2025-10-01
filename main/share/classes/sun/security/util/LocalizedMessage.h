#ifndef _sun_security_util_LocalizedMessage_h_
#define _sun_security_util_LocalizedMessage_h_
//$ class sun.security.util.LocalizedMessage
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RESOURCES")
#undef RESOURCES

namespace sun {
	namespace security {
		namespace util {
			class Resources;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export LocalizedMessage : public ::java::lang::Object {
	$class(LocalizedMessage, 0, ::java::lang::Object)
public:
	LocalizedMessage();
	void init$($String* key);
	virtual $String* formatLocalized($ObjectArray* arguments);
	virtual $String* formatNonlocalized($ObjectArray* arguments);
	static $String* getLocalized($String* key, $ObjectArray* arguments);
	static $String* getNonlocalized($String* key, $ObjectArray* arguments);
	static ::sun::security::util::Resources* RESOURCES;
	$String* key = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("RESOURCES")

#endif // _sun_security_util_LocalizedMessage_h_