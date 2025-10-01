#ifndef _java_security_MessageDigestSpi_h_
#define _java_security_MessageDigestSpi_h_
//$ class java.security.MessageDigestSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace security {

class $import MessageDigestSpi : public ::java::lang::Object {
	$class(MessageDigestSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MessageDigestSpi();
	void init$();
	virtual $Object* clone() override;
	virtual $bytes* engineDigest() {return nullptr;}
	virtual int32_t engineDigest($bytes* buf, int32_t offset, int32_t len);
	virtual int32_t engineGetDigestLength();
	virtual void engineReset() {}
	virtual void engineUpdate(int8_t input) {}
	virtual void engineUpdate($bytes* input, int32_t offset, int32_t len) {}
	virtual void engineUpdate(::java::nio::ByteBuffer* input);
	$bytes* tempArray = nullptr;
};

	} // security
} // java

#endif // _java_security_MessageDigestSpi_h_