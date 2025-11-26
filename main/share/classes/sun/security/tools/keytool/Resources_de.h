#ifndef _sun_security_tools_keytool_Resources_de_h_
#define _sun_security_tools_keytool_Resources_de_h_
//$ class sun.security.tools.keytool.Resources_de
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class Resources_de : public ::java::util::ListResourceBundle {
	$class(Resources_de, 0, ::java::util::ListResourceBundle)
public:
	Resources_de();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

			} // keytool
		} // tools
	} // security
} // sun

#endif // _sun_security_tools_keytool_Resources_de_h_