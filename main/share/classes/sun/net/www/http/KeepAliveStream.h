#ifndef _sun_net_www_http_KeepAliveStream_h_
#define _sun_net_www_http_KeepAliveStream_h_
//$ class sun.net.www.http.KeepAliveStream
//$ extends sun.net.www.MeteredStream
//$ implements sun.net.www.http.Hurryable

#include <sun/net/www/MeteredStream.h>
#include <sun/net/www/http/Hurryable.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
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
			namespace http {
				class HttpClient;
				class KeepAliveCleanerEntry;
				class KeepAliveStreamCleaner;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class KeepAliveStream : public ::sun::net::www::MeteredStream, public ::sun::net::www::http::Hurryable {
	$class(KeepAliveStream, 0, ::sun::net::www::MeteredStream, ::sun::net::www::http::Hurryable)
public:
	KeepAliveStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::InputStream* is, ::sun::net::ProgressSource* pi, int64_t expected, ::sun::net::www::http::HttpClient* hc);
	virtual void close() override;
	virtual bool hurry() override;
	virtual void mark(int32_t limit) override;
	virtual bool markSupported() override;
	static void queueForCleanup(::sun::net::www::http::KeepAliveCleanerEntry* kace);
	using ::sun::net::www::MeteredStream::read;
	virtual int64_t remainingToRead();
	virtual void reset() override;
	virtual void setClosed();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::sun::net::www::http::HttpClient* hc = nullptr;
	bool hurried = false;
	$volatile(bool) queuedForCleanup = false;
	static ::sun::net::www::http::KeepAliveStreamCleaner* queue;
	static $Thread* cleanerThread;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_KeepAliveStream_h_