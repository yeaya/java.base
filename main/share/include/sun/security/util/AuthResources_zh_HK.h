#ifndef _sun_security_util_AuthResources_zh_HK_h_
#define _sun_security_util_AuthResources_zh_HK_h_
//$ class sun.security.util.AuthResources_zh_HK
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace util {

class $import AuthResources_zh_HK : public ::java::util::ListResourceBundle {
	$class(AuthResources_zh_HK, 0, ::java::util::ListResourceBundle)
public:
	AuthResources_zh_HK();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_AuthResources_zh_HK_h_