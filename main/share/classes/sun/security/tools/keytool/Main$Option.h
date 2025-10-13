#ifndef _sun_security_tools_keytool_Main$Option_h_
#define _sun_security_tools_keytool_Main$Option_h_
//$ class sun.security.tools.keytool.Main$Option
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ADDPROVIDER")
#undef ADDPROVIDER
#pragma push_macro("ALIAS")
#undef ALIAS
#pragma push_macro("CACERTS")
#undef CACERTS
#pragma push_macro("CURVENAME")
#undef CURVENAME
#pragma push_macro("DESTALIAS")
#undef DESTALIAS
#pragma push_macro("DESTKEYPASS")
#undef DESTKEYPASS
#pragma push_macro("DESTKEYSTORE")
#undef DESTKEYSTORE
#pragma push_macro("DESTPROTECTED")
#undef DESTPROTECTED
#pragma push_macro("DESTPROVIDERNAME")
#undef DESTPROVIDERNAME
#pragma push_macro("DESTSTOREPASS")
#undef DESTSTOREPASS
#pragma push_macro("DESTSTORETYPE")
#undef DESTSTORETYPE
#pragma push_macro("DNAME")
#undef DNAME
#pragma push_macro("EXT")
#undef EXT
#pragma push_macro("FILEIN")
#undef FILEIN
#pragma push_macro("FILEOUT")
#undef FILEOUT
#pragma push_macro("ID")
#undef ID
#pragma push_macro("INFILE")
#undef INFILE
#pragma push_macro("JARFILE")
#undef JARFILE
#pragma push_macro("KEYALG")
#undef KEYALG
#pragma push_macro("KEYPASS")
#undef KEYPASS
#pragma push_macro("KEYSIZE")
#undef KEYSIZE
#pragma push_macro("KEYSTORE")
#undef KEYSTORE
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("NOPROMPT")
#undef NOPROMPT
#pragma push_macro("OUTFILE")
#undef OUTFILE
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PROVIDERCLASS")
#undef PROVIDERCLASS
#pragma push_macro("PROVIDERNAME")
#undef PROVIDERNAME
#pragma push_macro("PROVIDERPATH")
#undef PROVIDERPATH
#pragma push_macro("RFC")
#undef RFC
#pragma push_macro("SIGALG")
#undef SIGALG
#pragma push_macro("SIGNER")
#undef SIGNER
#pragma push_macro("SIGNERKEYPASS")
#undef SIGNERKEYPASS
#pragma push_macro("SRCALIAS")
#undef SRCALIAS
#pragma push_macro("SRCKEYPASS")
#undef SRCKEYPASS
#pragma push_macro("SRCKEYSTORE")
#undef SRCKEYSTORE
#pragma push_macro("SRCPROTECTED")
#undef SRCPROTECTED
#pragma push_macro("SRCPROVIDERNAME")
#undef SRCPROVIDERNAME
#pragma push_macro("SRCSTOREPASS")
#undef SRCSTOREPASS
#pragma push_macro("SRCSTORETYPE")
#undef SRCSTORETYPE
#pragma push_macro("SSLSERVER")
#undef SSLSERVER
#pragma push_macro("STARTDATE")
#undef STARTDATE
#pragma push_macro("STOREPASS")
#undef STOREPASS
#pragma push_macro("STORETYPE")
#undef STORETYPE
#pragma push_macro("TLS")
#undef TLS
#pragma push_macro("TRUSTCACERTS")
#undef TRUSTCACERTS
#pragma push_macro("V")
#undef V
#pragma push_macro("VALIDITY")
#undef VALIDITY

namespace sun {
	namespace security {
		namespace tools {
			namespace keytool {

class Main$Option : public ::java::lang::Enum {
	$class(Main$Option, 0, ::java::lang::Enum)
public:
	Main$Option();
	static $Array<::sun::security::tools::keytool::Main$Option>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $String* arg, $String* description);
	virtual $String* toString() override;
	static ::sun::security::tools::keytool::Main$Option* valueOf($String* name);
	static $Array<::sun::security::tools::keytool::Main$Option>* values();
	static ::sun::security::tools::keytool::Main$Option* ALIAS;
	static ::sun::security::tools::keytool::Main$Option* CURVENAME;
	static ::sun::security::tools::keytool::Main$Option* DESTALIAS;
	static ::sun::security::tools::keytool::Main$Option* DESTKEYPASS;
	static ::sun::security::tools::keytool::Main$Option* DESTKEYSTORE;
	static ::sun::security::tools::keytool::Main$Option* DESTPROTECTED;
	static ::sun::security::tools::keytool::Main$Option* DESTPROVIDERNAME;
	static ::sun::security::tools::keytool::Main$Option* DESTSTOREPASS;
	static ::sun::security::tools::keytool::Main$Option* DESTSTORETYPE;
	static ::sun::security::tools::keytool::Main$Option* DNAME;
	static ::sun::security::tools::keytool::Main$Option* EXT;
	static ::sun::security::tools::keytool::Main$Option* FILEOUT;
	static ::sun::security::tools::keytool::Main$Option* FILEIN;
	static ::sun::security::tools::keytool::Main$Option* ID;
	static ::sun::security::tools::keytool::Main$Option* INFILE;
	static ::sun::security::tools::keytool::Main$Option* KEYALG;
	static ::sun::security::tools::keytool::Main$Option* KEYPASS;
	static ::sun::security::tools::keytool::Main$Option* KEYSIZE;
	static ::sun::security::tools::keytool::Main$Option* KEYSTORE;
	static ::sun::security::tools::keytool::Main$Option* CACERTS;
	static ::sun::security::tools::keytool::Main$Option* NEW;
	static ::sun::security::tools::keytool::Main$Option* NOPROMPT;
	static ::sun::security::tools::keytool::Main$Option* OUTFILE;
	static ::sun::security::tools::keytool::Main$Option* PROTECTED;
	static ::sun::security::tools::keytool::Main$Option* PROVIDERCLASS;
	static ::sun::security::tools::keytool::Main$Option* ADDPROVIDER;
	static ::sun::security::tools::keytool::Main$Option* PROVIDERNAME;
	static ::sun::security::tools::keytool::Main$Option* PROVIDERPATH;
	static ::sun::security::tools::keytool::Main$Option* RFC;
	static ::sun::security::tools::keytool::Main$Option* SIGALG;
	static ::sun::security::tools::keytool::Main$Option* SIGNER;
	static ::sun::security::tools::keytool::Main$Option* SIGNERKEYPASS;
	static ::sun::security::tools::keytool::Main$Option* SRCALIAS;
	static ::sun::security::tools::keytool::Main$Option* SRCKEYPASS;
	static ::sun::security::tools::keytool::Main$Option* SRCKEYSTORE;
	static ::sun::security::tools::keytool::Main$Option* SRCPROTECTED;
	static ::sun::security::tools::keytool::Main$Option* SRCPROVIDERNAME;
	static ::sun::security::tools::keytool::Main$Option* SRCSTOREPASS;
	static ::sun::security::tools::keytool::Main$Option* SRCSTORETYPE;
	static ::sun::security::tools::keytool::Main$Option* SSLSERVER;
	static ::sun::security::tools::keytool::Main$Option* JARFILE;
	static ::sun::security::tools::keytool::Main$Option* STARTDATE;
	static ::sun::security::tools::keytool::Main$Option* STOREPASS;
	static ::sun::security::tools::keytool::Main$Option* STORETYPE;
	static ::sun::security::tools::keytool::Main$Option* TLS;
	static ::sun::security::tools::keytool::Main$Option* TRUSTCACERTS;
	static ::sun::security::tools::keytool::Main$Option* V;
	static ::sun::security::tools::keytool::Main$Option* VALIDITY;
	static $Array<::sun::security::tools::keytool::Main$Option>* $VALUES;
	$String* name$ = nullptr;
	$String* arg = nullptr;
	$String* description = nullptr;
};

			} // keytool
		} // tools
	} // security
} // sun

#pragma pop_macro("ADDPROVIDER")
#pragma pop_macro("ALIAS")
#pragma pop_macro("CACERTS")
#pragma pop_macro("CURVENAME")
#pragma pop_macro("DESTALIAS")
#pragma pop_macro("DESTKEYPASS")
#pragma pop_macro("DESTKEYSTORE")
#pragma pop_macro("DESTPROTECTED")
#pragma pop_macro("DESTPROVIDERNAME")
#pragma pop_macro("DESTSTOREPASS")
#pragma pop_macro("DESTSTORETYPE")
#pragma pop_macro("DNAME")
#pragma pop_macro("EXT")
#pragma pop_macro("FILEIN")
#pragma pop_macro("FILEOUT")
#pragma pop_macro("ID")
#pragma pop_macro("INFILE")
#pragma pop_macro("JARFILE")
#pragma pop_macro("KEYALG")
#pragma pop_macro("KEYPASS")
#pragma pop_macro("KEYSIZE")
#pragma pop_macro("KEYSTORE")
#pragma pop_macro("NEW")
#pragma pop_macro("NOPROMPT")
#pragma pop_macro("OUTFILE")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PROVIDERCLASS")
#pragma pop_macro("PROVIDERNAME")
#pragma pop_macro("PROVIDERPATH")
#pragma pop_macro("RFC")
#pragma pop_macro("SIGALG")
#pragma pop_macro("SIGNER")
#pragma pop_macro("SIGNERKEYPASS")
#pragma pop_macro("SRCALIAS")
#pragma pop_macro("SRCKEYPASS")
#pragma pop_macro("SRCKEYSTORE")
#pragma pop_macro("SRCPROTECTED")
#pragma pop_macro("SRCPROVIDERNAME")
#pragma pop_macro("SRCSTOREPASS")
#pragma pop_macro("SRCSTORETYPE")
#pragma pop_macro("SSLSERVER")
#pragma pop_macro("STARTDATE")
#pragma pop_macro("STOREPASS")
#pragma pop_macro("STORETYPE")
#pragma pop_macro("TLS")
#pragma pop_macro("TRUSTCACERTS")
#pragma pop_macro("V")
#pragma pop_macro("VALIDITY")

#endif // _sun_security_tools_keytool_Main$Option_h_