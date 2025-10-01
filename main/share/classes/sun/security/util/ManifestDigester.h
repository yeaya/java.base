#ifndef _sun_security_util_ManifestDigester_h_
#define _sun_security_util_ManifestDigester_h_
//$ class sun.security.util.ManifestDigester
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MF_MAIN_ATTRS")
#undef MF_MAIN_ATTRS

namespace java {
	namespace security {
		class MessageDigest;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ManifestDigester$Entry;
			class ManifestDigester$Position;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ManifestDigester : public ::java::lang::Object {
	$class(ManifestDigester, 0, ::java::lang::Object)
public:
	ManifestDigester();
	void init$($bytes* bytes);
	bool findSection(int32_t offset, ::sun::security::util::ManifestDigester$Position* pos);
	virtual ::sun::security::util::ManifestDigester$Entry* get($String* name);
	virtual ::sun::security::util::ManifestDigester$Entry* get($String* name, bool oldStyle);
	virtual ::sun::security::util::ManifestDigester$Entry* getMainAttsEntry();
	virtual ::sun::security::util::ManifestDigester$Entry* getMainAttsEntry(bool oldStyle);
	bool isNameAttr($bytes* bytes, int32_t start);
	static ::sun::security::util::ManifestDigester$Entry* lambda$new$0($String* dummy);
	virtual $bytes* manifestDigest(::java::security::MessageDigest* md);
	static $String* MF_MAIN_ATTRS;
	$bytes* rawBytes = nullptr;
	::sun::security::util::ManifestDigester$Entry* mainAttsEntry = nullptr;
	::java::util::HashMap* entries = nullptr;
};

		} // util
	} // security
} // sun

#pragma pop_macro("MF_MAIN_ATTRS")

#endif // _sun_security_util_ManifestDigester_h_