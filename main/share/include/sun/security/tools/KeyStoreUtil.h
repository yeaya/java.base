#ifndef _sun_security_tools_KeyStoreUtil_h_
#define _sun_security_tools_KeyStoreUtil_h_
//$ class sun.security.tools.KeyStoreUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace text {
		class Collator;
	}
}
namespace java {
	namespace util {
		class List;
		class ResourceBundle;
	}
}

namespace sun {
	namespace security {
		namespace tools {

class $import KeyStoreUtil : public ::java::lang::Object {
	$class(KeyStoreUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyStoreUtil();
	void init$();
	static $StringArray* expandArgs($String* tool, $String* file, $String* c1, $String* c2, $StringArray* args);
	static $String* getCacerts();
	static ::java::security::KeyStore* getCacertsKeyStore();
	static $chars* getPassWithModifier($String* modifier, $String* arg, ::java::util::ResourceBundle* rb, ::java::text::Collator* collator);
	static bool isSelfSigned(::java::security::cert::X509Certificate* cert);
	static bool isWindowsKeyStore($String* storetype);
	static void loadProviderByClass($String* provClass, $String* arg, ::java::lang::ClassLoader* cl);
	static void loadProviderByName($String* provName, $String* arg);
	static $String* niceStoreTypeName($String* storetype);
	static void parseArgsLine(::java::util::List* list, $String* s);
	static bool signedBy(::java::security::cert::X509Certificate* end, ::java::security::cert::X509Certificate* ca);
};

		} // tools
	} // security
} // sun

#endif // _sun_security_tools_KeyStoreUtil_h_