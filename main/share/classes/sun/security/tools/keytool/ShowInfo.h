#ifndef _sun_security_tools_keytool_ShowInfo_h_
#define _sun_security_tools_keytool_ShowInfo_h_
//$ class sun.security.tools.keytool.ShowInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class ShowInfo : public ::java::lang::Object {
	$class(ShowInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ShowInfo();
	void init$();
	static void tls(bool verbose);
};

			} // keytool
		} // tools
	} // security
} // sun

#endif // _sun_security_tools_keytool_ShowInfo_h_