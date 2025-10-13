#ifndef _sun_nio_ch_NioSocketImpl_h_
#define _sun_nio_ch_NioSocketImpl_h_
//$ class sun.nio.ch.NioSocketImpl
//$ extends java.net.SocketImpl
//$ implements sun.net.PlatformSocketImpl

#include <java/lang/Array.h>
#include <java/net/SocketImpl.h>
#include <sun/net/PlatformSocketImpl.h>

#pragma push_macro("MAX_BUFFER_SIZE")
#undef MAX_BUFFER_SIZE
#pragma push_macro("ST_CLOSED")
#undef ST_CLOSED
#pragma push_macro("ST_CLOSING")
#undef ST_CLOSING
#pragma push_macro("ST_CONNECTED")
#undef ST_CONNECTED
#pragma push_macro("ST_CONNECTING")
#undef ST_CONNECTING
#pragma push_macro("ST_NEW")
#undef ST_NEW
#pragma push_macro("ST_UNCONNECTED")
#undef ST_UNCONNECTED

namespace java {
	namespace io {
		class FileDescriptor;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class InetSocketAddress;
		class ProtocolFamily;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
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
	namespace nio {
		namespace ch {
			class NativeDispatcher;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import NioSocketImpl : public ::java::net::SocketImpl, public ::sun::net::PlatformSocketImpl {
	$class(NioSocketImpl, 0, ::java::net::SocketImpl, ::sun::net::PlatformSocketImpl)
public:
	NioSocketImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool server);
	virtual void accept(::java::net::SocketImpl* si) override;
	virtual int32_t available() override;
	::java::io::FileDescriptor* beginAccept();
	::java::io::FileDescriptor* beginConnect(::java::net::InetAddress* address, int32_t port);
	::java::io::FileDescriptor* beginRead();
	::java::io::FileDescriptor* beginWrite();
	virtual void bind(::java::net::InetAddress* host, int32_t port) override;
	bool booleanValue(Object$* value, $String* desc);
	virtual void close() override;
	static ::java::lang::Runnable* closerFor(::java::io::FileDescriptor* fd, bool stream);
	void configureBlocking(::java::io::FileDescriptor* fd);
	void configureNonBlocking(::java::io::FileDescriptor* fd);
	virtual void connect(::java::net::SocketAddress* remote, int32_t millis) override;
	virtual void connect($String* host, int32_t port) override;
	virtual void connect(::java::net::InetAddress* address, int32_t port) override;
	virtual void create(bool stream) override;
	void endAccept(bool completed);
	void endConnect(::java::io::FileDescriptor* fd, bool completed);
	void endRead(bool completed);
	void endWrite(bool completed);
	void ensureOpen();
	void ensureOpenAndConnected();
	static ::java::net::ProtocolFamily* family();
	virtual ::java::io::InputStream* getInputStream() override;
	virtual $Object* getOption(::java::net::SocketOption* opt) override;
	virtual $Object* getOption(int32_t opt) override;
	virtual ::java::io::OutputStream* getOutputStream() override;
	int32_t implRead($bytes* b, int32_t off, int32_t len);
	int32_t implWrite($bytes* b, int32_t off, int32_t len);
	int32_t intValue(Object$* value, $String* desc);
	bool isOpen();
	static void lambda$closerFor$0(::java::io::FileDescriptor* fd);
	static void lambda$closerFor$1(::java::io::FileDescriptor* fd);
	virtual void listen(int32_t backlog) override;
	void park(::java::io::FileDescriptor* fd, int32_t event, int64_t nanos);
	void park(::java::io::FileDescriptor* fd, int32_t event);
	int32_t read($bytes* b, int32_t off, int32_t len);
	virtual void sendUrgentData(int32_t data) override;
	virtual void setOption(::java::net::SocketOption* opt, Object$* value) override;
	virtual void setOption(int32_t opt, Object$* value) override;
	virtual void shutdownInput() override;
	virtual void shutdownOutput() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual bool supportsUrgentData() override;
	int32_t timedAccept(::java::io::FileDescriptor* fd, ::java::io::FileDescriptor* newfd, $Array<::java::net::InetSocketAddress>* isaa, int64_t nanos);
	bool timedFinishConnect(::java::io::FileDescriptor* fd, int64_t nanos);
	int32_t timedRead(::java::io::FileDescriptor* fd, $bytes* b, int32_t off, int32_t len, int64_t nanos);
	virtual $String* toString() override;
	bool tryClose();
	void tryFinishClose();
	static int64_t tryLock(::java::util::concurrent::locks::ReentrantLock* lock, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	int32_t tryRead(::java::io::FileDescriptor* fd, $bytes* b, int32_t off, int32_t len);
	int32_t tryWrite(::java::io::FileDescriptor* fd, $bytes* b, int32_t off, int32_t len);
	void write($bytes* b, int32_t off, int32_t len);
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	static const int32_t MAX_BUFFER_SIZE = 131072; // 128 * 1024
	bool server = false;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
	::java::util::concurrent::locks::ReentrantLock* writeLock = nullptr;
	$Object* stateLock = nullptr;
	static const int32_t ST_NEW = 0;
	static const int32_t ST_UNCONNECTED = 1;
	static const int32_t ST_CONNECTING = 2;
	static const int32_t ST_CONNECTED = 3;
	static const int32_t ST_CLOSING = 4;
	static const int32_t ST_CLOSED = 5;
	$volatile(int32_t) state = 0;
	bool stream = false;
	::java::lang::ref::Cleaner$Cleanable* cleaner = nullptr;
	$volatile(bool) nonBlocking = false;
	int64_t readerThread = 0;
	int64_t writerThread = 0;
	bool isReuseAddress = false;
	$volatile(int32_t) timeout = 0;
	$volatile(bool) isInputClosed = false;
	$volatile(bool) isOutputClosed = false;
	bool readEOF = false;
	bool connectionReset = false;
	static $volatile(::java::util::Set*) clientSocketOptions;
	static $volatile(::java::util::Set*) serverSocketOptions;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("MAX_BUFFER_SIZE")
#pragma pop_macro("ST_CLOSED")
#pragma pop_macro("ST_CLOSING")
#pragma pop_macro("ST_CONNECTED")
#pragma pop_macro("ST_CONNECTING")
#pragma pop_macro("ST_NEW")
#pragma pop_macro("ST_UNCONNECTED")

#endif // _sun_nio_ch_NioSocketImpl_h_