#ifndef _sun_security_util_Resources_zh_CN_h_
#define _sun_security_util_Resources_zh_CN_h_
//$ class sun.security.util.Resources_zh_CN
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace util {

class $export Resources_zh_CN : public ::java::util::ListResourceBundle {
	$class(Resources_zh_CN, 0, ::java::util::ListResourceBundle)
public:
	Resources_zh_CN();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Resources_zh_CN_h_