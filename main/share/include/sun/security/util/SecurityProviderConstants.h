#ifndef _sun_security_util_SecurityProviderConstants_h_
#define _sun_security_util_SecurityProviderConstants_h_
//$ class sun.security.util.SecurityProviderConstants
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEF_EC_KEY_SIZE")
#undef DEF_EC_KEY_SIZE
#pragma push_macro("DEF_DH_KEY_SIZE")
#undef DEF_DH_KEY_SIZE
#pragma push_macro("KEY_LENGTH_PROP")
#undef KEY_LENGTH_PROP
#pragma push_macro("DEF_XEC_KEY_SIZE")
#undef DEF_XEC_KEY_SIZE
#pragma push_macro("DEF_ED_KEY_SIZE")
#undef DEF_ED_KEY_SIZE
#pragma push_macro("DEF_DSA_KEY_SIZE")
#undef DEF_DSA_KEY_SIZE
#pragma push_macro("DEF_RSASSA_PSS_KEY_SIZE")
#undef DEF_RSASSA_PSS_KEY_SIZE
#pragma push_macro("DEF_RSA_KEY_SIZE")
#undef DEF_RSA_KEY_SIZE

namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class KnownOIDs;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import SecurityProviderConstants : public ::java::lang::Object {
	$class(SecurityProviderConstants, 0, ::java::lang::Object)
public:
	SecurityProviderConstants();
	void init$();
	static ::java::util::List* getAliases($String* o);
	static int32_t getDefDSASubprimeSize(int32_t primeSize);
	static ::java::util::List* store($String* stdName, ::sun::security::util::KnownOIDs* oid, $StringArray* extraAliases);
	static ::sun::security::util::Debug* debug;
	static ::java::util::concurrent::ConcurrentHashMap* aliasesMap;
	static int32_t DEF_DSA_KEY_SIZE;
	static int32_t DEF_RSA_KEY_SIZE;
	static int32_t DEF_RSASSA_PSS_KEY_SIZE;
	static int32_t DEF_DH_KEY_SIZE;
	static int32_t DEF_EC_KEY_SIZE;
	static int32_t DEF_ED_KEY_SIZE;
	static int32_t DEF_XEC_KEY_SIZE;
	static $String* KEY_LENGTH_PROP;
};

		} // util
	} // security
} // sun

#pragma pop_macro("DEF_EC_KEY_SIZE")
#pragma pop_macro("DEF_DH_KEY_SIZE")
#pragma pop_macro("KEY_LENGTH_PROP")
#pragma pop_macro("DEF_XEC_KEY_SIZE")
#pragma pop_macro("DEF_ED_KEY_SIZE")
#pragma pop_macro("DEF_DSA_KEY_SIZE")
#pragma pop_macro("DEF_RSASSA_PSS_KEY_SIZE")
#pragma pop_macro("DEF_RSA_KEY_SIZE")

#endif // _sun_security_util_SecurityProviderConstants_h_