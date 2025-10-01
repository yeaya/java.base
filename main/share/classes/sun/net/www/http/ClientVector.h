#ifndef _sun_net_www_http_ClientVector_h_
#define _sun_net_www_http_ClientVector_h_
//$ class sun.net.www.http.ClientVector
//$ extends java.util.ArrayDeque

#include <java/util/ArrayDeque.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
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
		namespace www {
			namespace http {
				class HttpClient;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class ClientVector : public ::java::util::ArrayDeque {
	$class(ClientVector, $NO_CLASS_INIT, ::java::util::ArrayDeque)
public:
	ClientVector();
	void init$(int32_t nap);
	virtual ::sun::net::www::http::HttpClient* get();
	void lock();
	virtual void put(::sun::net::www::http::HttpClient* h);
	void readObject(::java::io::ObjectInputStream* stream);
	using ::java::util::ArrayDeque::remove;
	virtual bool remove(::sun::net::www::http::HttpClient* h);
	using ::java::util::ArrayDeque::toArray;
	void unlock();
	void writeObject(::java::io::ObjectOutputStream* stream);
	static const int64_t serialVersionUID = (int64_t)0x87888E0A02F0A18D;
	::java::util::concurrent::locks::ReentrantLock* lock$ = nullptr;
	int32_t nap = 0;
};

			} // http
		} // www
	} // net
} // sun

#endif // _sun_net_www_http_ClientVector_h_