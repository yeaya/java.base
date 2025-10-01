#ifndef _sun_net_www_MeteredStream_h_
#define _sun_net_www_MeteredStream_h_
//$ class sun.net.www.MeteredStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
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
	namespace net {
		class ProgressSource;
	}
}

namespace sun {
	namespace net {
		namespace www {

class $export MeteredStream : public ::java::io::FilterInputStream {
	$class(MeteredStream, $HAS_FINALIZE, ::java::io::FilterInputStream)
public:
	MeteredStream();
	void init$(::java::io::InputStream* is, ::sun::net::ProgressSource* pi, int64_t expected);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void finalize() override;
	bool isLockHeldByCurrentThread();
	bool isMarked();
	void justRead(int64_t n);
	void lock();
	virtual void mark(int32_t readLimit) override;
	virtual bool markSupported() override;
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	void unlock();
	static bool $assertionsDisabled;
	bool closed = false;
	int64_t expected = 0;
	int64_t count = 0;
	int64_t markedCount = 0;
	int32_t markLimit = 0;
	::sun::net::ProgressSource* pi = nullptr;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_MeteredStream_h_