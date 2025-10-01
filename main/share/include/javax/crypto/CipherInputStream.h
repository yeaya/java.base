#ifndef _javax_crypto_CipherInputStream_h_
#define _javax_crypto_CipherInputStream_h_
//$ class javax.crypto.CipherInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
	}
}

namespace javax {
	namespace crypto {

class $import CipherInputStream : public ::java::io::FilterInputStream {
	$class(CipherInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	CipherInputStream();
	void init$(::java::io::InputStream* is, ::javax::crypto::Cipher* c);
	void init$(::java::io::InputStream* is);
	virtual int32_t available() override;
	virtual void close() override;
	void ensureCapacity(int32_t inLen);
	int32_t getMoreData();
	virtual bool markSupported() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	::javax::crypto::Cipher* cipher = nullptr;
	::java::io::InputStream* input = nullptr;
	$bytes* ibuffer = nullptr;
	bool done = false;
	$bytes* obuffer = nullptr;
	int32_t ostart = 0;
	int32_t ofinish = 0;
	bool closed = false;
};

	} // crypto
} // javax

#endif // _javax_crypto_CipherInputStream_h_