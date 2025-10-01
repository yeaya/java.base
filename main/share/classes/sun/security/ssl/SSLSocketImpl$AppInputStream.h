#ifndef _sun_security_ssl_SSLSocketImpl$AppInputStream_h_
#define _sun_security_ssl_SSLSocketImpl$AppInputStream_h_
//$ class sun.security.ssl.SSLSocketImpl$AppInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLSocketImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSocketImpl$AppInputStream : public ::java::io::InputStream {
	$class(SSLSocketImpl$AppInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SSLSocketImpl$AppInputStream();
	void init$(::sun::security::ssl::SSLSocketImpl* this$0);
	virtual int32_t available() override;
	bool checkEOF();
	virtual void close() override;
	void deplete();
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	void readLockedDeplete();
	virtual int64_t skip(int64_t n) override;
	::sun::security::ssl::SSLSocketImpl* this$0 = nullptr;
	$bytes* oneByte = nullptr;
	::java::nio::ByteBuffer* buffer = nullptr;
	$volatile(bool) appDataIsAvailable = false;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
	$volatile(bool) isClosing = false;
	$volatile(bool) hasDepleted = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSocketImpl$AppInputStream_h_