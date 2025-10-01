#ifndef _sun_security_tools_keytool_Resources_ja_h_
#define _sun_security_tools_keytool_Resources_ja_h_
//$ class sun.security.tools.keytool.Resources_ja
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class Resources_ja : public ::java::util::ListResourceBundle {
	$class(Resources_ja, 0, ::java::util::ListResourceBundle)
public:
	Resources_ja();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

			} // keytool
		} // tools
	} // security
} // sun

#endif // _sun_security_tools_keytool_Resources_ja_h_