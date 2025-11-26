#ifndef _sun_security_tools_keytool_Resources_pt_BR_h_
#define _sun_security_tools_keytool_Resources_pt_BR_h_
//$ class sun.security.tools.keytool.Resources_pt_BR
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class Resources_pt_BR : public ::java::util::ListResourceBundle {
	$class(Resources_pt_BR, 0, ::java::util::ListResourceBundle)
public:
	Resources_pt_BR();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

			} // keytool
		} // tools
	} // security
} // sun

#endif // _sun_security_tools_keytool_Resources_pt_BR_h_