#ifndef _java_security_SecureRandomSpi_h_
#define _java_security_SecureRandomSpi_h_
//$ class java.security.SecureRandomSpi
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {
		class SecureRandomParameters;
	}
}

namespace java {
	namespace security {

class $export SecureRandomSpi : public ::java::io::Serializable {
	$class(SecureRandomSpi, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SecureRandomSpi();
	void init$();
	void init$(::java::security::SecureRandomParameters* params);
	virtual $bytes* engineGenerateSeed(int32_t numBytes) {return nullptr;}
	virtual ::java::security::SecureRandomParameters* engineGetParameters();
	virtual void engineNextBytes($bytes* bytes) {}
	virtual void engineNextBytes($bytes* bytes, ::java::security::SecureRandomParameters* params);
	virtual void engineReseed(::java::security::SecureRandomParameters* params);
	virtual void engineSetSeed($bytes* seed) {}
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD67ACC7DF945D46A;
};

	} // security
} // java

#endif // _java_security_SecureRandomSpi_h_