#ifndef _sun_security_util_Resources_fr_h_
#define _sun_security_util_Resources_fr_h_
//$ class sun.security.util.Resources_fr
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace util {

class $import Resources_fr : public ::java::util::ListResourceBundle {
	$class(Resources_fr, 0, ::java::util::ListResourceBundle)
public:
	Resources_fr();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Resources_fr_h_