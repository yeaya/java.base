#ifndef _sun_security_util_AuthResources_de_h_
#define _sun_security_util_AuthResources_de_h_
//$ class sun.security.util.AuthResources_de
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace util {

class $import AuthResources_de : public ::java::util::ListResourceBundle {
	$class(AuthResources_de, 0, ::java::util::ListResourceBundle)
public:
	AuthResources_de();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_AuthResources_de_h_