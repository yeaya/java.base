#ifndef _java_security_DigestInputStream_h_
#define _java_security_DigestInputStream_h_
//$ class java.security.DigestInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace java {
	namespace security {

class $import DigestInputStream : public ::java::io::FilterInputStream {
	$class(DigestInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	DigestInputStream();
	void init$(::java::io::InputStream* stream, ::java::security::MessageDigest* digest);
	virtual ::java::security::MessageDigest* getMessageDigest();
	virtual void on(bool on);
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void setMessageDigest(::java::security::MessageDigest* digest);
	virtual $String* toString() override;
	bool on$ = false;
	::java::security::MessageDigest* digest = nullptr;
};

	} // security
} // java

#endif // _java_security_DigestInputStream_h_