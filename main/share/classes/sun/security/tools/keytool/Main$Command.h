#ifndef _sun_security_tools_keytool_Main$Command_h_
#define _sun_security_tools_keytool_Main$Command_h_
//$ class sun.security.tools.keytool.Main$Command
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CERTREQ")
#undef CERTREQ
#pragma push_macro("CHANGEALIAS")
#undef CHANGEALIAS
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("EXPORTCERT")
#undef EXPORTCERT
#pragma push_macro("GENCERT")
#undef GENCERT
#pragma push_macro("GENCRL")
#undef GENCRL
#pragma push_macro("GENKEYPAIR")
#undef GENKEYPAIR
#pragma push_macro("GENSECKEY")
#undef GENSECKEY
#pragma push_macro("IDENTITYDB")
#undef IDENTITYDB
#pragma push_macro("IMPORTCERT")
#undef IMPORTCERT
#pragma push_macro("IMPORTKEYSTORE")
#undef IMPORTKEYSTORE
#pragma push_macro("IMPORTPASS")
#undef IMPORTPASS
#pragma push_macro("KEYCLONE")
#undef KEYCLONE
#pragma push_macro("KEYPASSWD")
#undef KEYPASSWD
#pragma push_macro("LIST")
#undef LIST
#pragma push_macro("PRINTCERT")
#undef PRINTCERT
#pragma push_macro("PRINTCERTREQ")
#undef PRINTCERTREQ
#pragma push_macro("PRINTCRL")
#undef PRINTCRL
#pragma push_macro("SELFCERT")
#undef SELFCERT
#pragma push_macro("SHOWINFO")
#undef SHOWINFO
#pragma push_macro("STOREPASSWD")
#undef STOREPASSWD

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {
				class Main$Option;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class Main$Command : public ::java::lang::Enum {
	$class(Main$Command, 0, ::java::lang::Enum)
public:
	Main$Command();
	static $Array<::sun::security::tools::keytool::Main$Command>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* d, $Array<::sun::security::tools::keytool::Main$Option>* o);
	virtual $String* getAltName();
	static ::sun::security::tools::keytool::Main$Command* getCommand($String* cmd);
	virtual void setAltName($String* altName);
	virtual $String* toString() override;
	static ::sun::security::tools::keytool::Main$Command* valueOf($String* name);
	static $Array<::sun::security::tools::keytool::Main$Command>* values();
	static ::sun::security::tools::keytool::Main$Command* CERTREQ;
	static ::sun::security::tools::keytool::Main$Command* CHANGEALIAS;
	static ::sun::security::tools::keytool::Main$Command* DELETE;
	static ::sun::security::tools::keytool::Main$Command* EXPORTCERT;
	static ::sun::security::tools::keytool::Main$Command* GENKEYPAIR;
	static ::sun::security::tools::keytool::Main$Command* GENSECKEY;
	static ::sun::security::tools::keytool::Main$Command* GENCERT;
	static ::sun::security::tools::keytool::Main$Command* IMPORTCERT;
	static ::sun::security::tools::keytool::Main$Command* IMPORTPASS;
	static ::sun::security::tools::keytool::Main$Command* IMPORTKEYSTORE;
	static ::sun::security::tools::keytool::Main$Command* KEYPASSWD;
	static ::sun::security::tools::keytool::Main$Command* LIST;
	static ::sun::security::tools::keytool::Main$Command* PRINTCERT;
	static ::sun::security::tools::keytool::Main$Command* PRINTCERTREQ;
	static ::sun::security::tools::keytool::Main$Command* PRINTCRL;
	static ::sun::security::tools::keytool::Main$Command* STOREPASSWD;
	static ::sun::security::tools::keytool::Main$Command* SHOWINFO;
	static ::sun::security::tools::keytool::Main$Command* KEYCLONE;
	static ::sun::security::tools::keytool::Main$Command* SELFCERT;
	static ::sun::security::tools::keytool::Main$Command* GENCRL;
	static ::sun::security::tools::keytool::Main$Command* IDENTITYDB;
	static $Array<::sun::security::tools::keytool::Main$Command>* $VALUES;
	$String* description = nullptr;
	$Array<::sun::security::tools::keytool::Main$Option>* options = nullptr;
	$String* name$ = nullptr;
	$String* altName = nullptr;
};

			} // keytool
		} // tools
	} // security
} // sun

#pragma pop_macro("CERTREQ")
#pragma pop_macro("CHANGEALIAS")
#pragma pop_macro("DELETE")
#pragma pop_macro("EXPORTCERT")
#pragma pop_macro("GENCERT")
#pragma pop_macro("GENCRL")
#pragma pop_macro("GENKEYPAIR")
#pragma pop_macro("GENSECKEY")
#pragma pop_macro("IDENTITYDB")
#pragma pop_macro("IMPORTCERT")
#pragma pop_macro("IMPORTKEYSTORE")
#pragma pop_macro("IMPORTPASS")
#pragma pop_macro("KEYCLONE")
#pragma pop_macro("KEYPASSWD")
#pragma pop_macro("LIST")
#pragma pop_macro("PRINTCERT")
#pragma pop_macro("PRINTCERTREQ")
#pragma pop_macro("PRINTCRL")
#pragma pop_macro("SELFCERT")
#pragma pop_macro("SHOWINFO")
#pragma pop_macro("STOREPASSWD")

#endif // _sun_security_tools_keytool_Main$Command_h_