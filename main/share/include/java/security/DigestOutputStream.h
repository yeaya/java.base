#ifndef _java_security_DigestOutputStream_h_
#define _java_security_DigestOutputStream_h_
//$ class java.security.DigestOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}

namespace java {
	namespace security {

class $import DigestOutputStream : public ::java::io::FilterOutputStream {
	$class(DigestOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	DigestOutputStream();
	void init$(::java::io::OutputStream* stream, ::java::security::MessageDigest* digest);
	virtual ::java::security::MessageDigest* getMessageDigest();
	virtual void on(bool on);
	virtual void setMessageDigest(::java::security::MessageDigest* digest);
	virtual $String* toString() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	bool on$ = false;
	::java::security::MessageDigest* digest = nullptr;
};

	} // security
} // java

#endif // _java_security_DigestOutputStream_h_