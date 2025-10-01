#ifndef _javax_crypto_CipherOutputStream_h_
#define _javax_crypto_CipherOutputStream_h_
//$ class javax.crypto.CipherOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace javax {
	namespace crypto {

class $import CipherOutputStream : public ::java::io::FilterOutputStream {
	$class(CipherOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	CipherOutputStream();
	void init$(::java::io::OutputStream* os, ::javax::crypto::Cipher* c);
	void init$(::java::io::OutputStream* os);
	virtual void close() override;
	void ensureCapacity(int32_t inLen);
	virtual void flush() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::javax::crypto::Cipher* cipher = nullptr;
	::java::io::OutputStream* output = nullptr;
	$bytes* ibuffer = nullptr;
	$bytes* obuffer = nullptr;
	bool closed = false;
};

	} // crypto
} // javax

#endif // _javax_crypto_CipherOutputStream_h_