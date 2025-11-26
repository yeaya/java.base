#ifndef _sun_security_util_AuthResources_ko_h_
#define _sun_security_util_AuthResources_ko_h_
//$ class sun.security.util.AuthResources_ko
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace util {

class $export AuthResources_ko : public ::java::util::ListResourceBundle {
	$class(AuthResources_ko, 0, ::java::util::ListResourceBundle)
public:
	AuthResources_ko();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_AuthResources_ko_h_