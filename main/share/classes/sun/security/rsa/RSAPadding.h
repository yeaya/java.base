#ifndef _sun_security_rsa_RSAPadding_h_
#define _sun_security_rsa_RSAPadding_h_
//$ class sun.security.rsa.RSAPadding
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PAD_OAEP_MGF1")
#undef PAD_OAEP_MGF1
#pragma push_macro("PAD_BLOCKTYPE_2")
#undef PAD_BLOCKTYPE_2
#pragma push_macro("M")
#undef M
#pragma push_macro("PAD_BLOCKTYPE_1")
#undef PAD_BLOCKTYPE_1
#pragma push_macro("PAD_NONE")
#undef PAD_NONE

namespace java {
	namespace security {
		class MessageDigest;
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace crypto {
		namespace spec {
			class OAEPParameterSpec;
		}
	}
}
namespace sun {
	namespace security {
		namespace rsa {
			class MGF1;
		}
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $export RSAPadding : public ::java::lang::Object {
	$class(RSAPadding, 0, ::java::lang::Object)
public:
	RSAPadding();
	void init$(int32_t type, int32_t paddedSize, ::java::security::SecureRandom* random, ::javax::crypto::spec::OAEPParameterSpec* spec);
	static $bytes* getInitialHash(::java::security::MessageDigest* md, $bytes* digestInput);
	static ::sun::security::rsa::RSAPadding* getInstance(int32_t type, int32_t paddedSize);
	static ::sun::security::rsa::RSAPadding* getInstance(int32_t type, int32_t paddedSize, ::java::security::SecureRandom* random);
	static ::sun::security::rsa::RSAPadding* getInstance(int32_t type, int32_t paddedSize, ::java::security::SecureRandom* random, ::javax::crypto::spec::OAEPParameterSpec* spec);
	int32_t getMaxDataSize();
	$bytes* pad($bytes* data);
	$bytes* pad($bytes* data, int32_t ofs, int32_t len);
	$bytes* padOAEP($bytes* M, int32_t ofs, int32_t len);
	$bytes* padV15($bytes* data, int32_t ofs, int32_t len);
	$bytes* unpad($bytes* padded);
	$bytes* unpadOAEP($bytes* padded);
	$bytes* unpadV15($bytes* padded);
	static const int32_t PAD_BLOCKTYPE_1 = 1;
	static const int32_t PAD_BLOCKTYPE_2 = 2;
	static const int32_t PAD_NONE = 3;
	static const int32_t PAD_OAEP_MGF1 = 4;
	int32_t type = 0;
	int32_t paddedSize = 0;
	::java::security::SecureRandom* random = nullptr;
	int32_t maxDataSize = 0;
	::java::security::MessageDigest* md = nullptr;
	::sun::security::rsa::MGF1* mgf = nullptr;
	$bytes* lHash = nullptr;
	static ::java::util::Map* emptyHashes;
};

		} // rsa
	} // security
} // sun

#pragma pop_macro("PAD_OAEP_MGF1")
#pragma pop_macro("PAD_BLOCKTYPE_2")
#pragma pop_macro("M")
#pragma pop_macro("PAD_BLOCKTYPE_1")
#pragma pop_macro("PAD_NONE")

#endif // _sun_security_rsa_RSAPadding_h_