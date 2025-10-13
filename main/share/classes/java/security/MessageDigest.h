#ifndef _java_security_MessageDigest_h_
#define _java_security_MessageDigest_h_
//$ class java.security.MessageDigest
//$ extends java.security.MessageDigestSpi

#include <java/lang/Array.h>
#include <java/security/MessageDigestSpi.h>

#pragma push_macro("INITIAL")
#undef INITIAL
#pragma push_macro("IN_PROGRESS")
#undef IN_PROGRESS

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace java {
	namespace security {

class $export MessageDigest : public ::java::security::MessageDigestSpi {
	$class(MessageDigest, 0, ::java::security::MessageDigestSpi)
public:
	MessageDigest();
	void init$($String* algorithm);
	void init$($String* algorithm, ::java::security::Provider* p);
	virtual $Object* clone() override;
	virtual $bytes* digest();
	virtual int32_t digest($bytes* buf, int32_t offset, int32_t len);
	virtual $bytes* digest($bytes* input);
	$String* getAlgorithm();
	int32_t getDigestLength();
	static ::java::security::MessageDigest* getInstance($String* algorithm);
	static ::java::security::MessageDigest* getInstance($String* algorithm, $String* provider);
	static ::java::security::MessageDigest* getInstance($String* algorithm, ::java::security::Provider* provider);
	::java::security::Provider* getProvider();
	$String* getProviderName();
	static bool isEqual($bytes* digesta, $bytes* digestb);
	virtual void reset();
	virtual $String* toString() override;
	virtual void update(int8_t input);
	virtual void update($bytes* input, int32_t offset, int32_t len);
	virtual void update($bytes* input);
	void update(::java::nio::ByteBuffer* input);
	static ::sun::security::util::Debug* pdebug;
	static bool skipDebug;
	$String* algorithm = nullptr;
	static const int32_t INITIAL = 0;
	static const int32_t IN_PROGRESS = 1;
	int32_t state = 0;
	::java::security::Provider* provider = nullptr;
};

	} // security
} // java

#pragma pop_macro("INITIAL")
#pragma pop_macro("IN_PROGRESS")

#endif // _java_security_MessageDigest_h_