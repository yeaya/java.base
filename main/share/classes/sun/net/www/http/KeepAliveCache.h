#ifndef _sun_net_www_http_KeepAliveCache_h_
#define _sun_net_www_http_KeepAliveCache_h_
//$ class sun.net.www.http.KeepAliveCache
//$ extends java.util.HashMap
//$ implements java.lang.Runnable

#include <java/lang/Runnable.h>
#include <java/util/HashMap.h>

#pragma push_macro("MAX_CONNECTIONS")
#undef MAX_CONNECTIONS
#pragma push_macro("LIFETIME")
#undef LIFETIME

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace net {
		class URL;
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
				class KeepAliveKey;
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace http {

class KeepAliveCache : public ::java::util::HashMap, public ::java::lang::Runnable {
	$class(KeepAliveCache, 0, ::java::util::HashMap, ::java::lang::Runnable)
public:
	KeepAliveCache();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::HashMap::get;
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::sun::net::www::http::HttpClient* get(::java::net::URL* url, Object$* obj);
	static int32_t getMaxConnections();
	using ::java::util::HashMap::put;
	virtual void put(::java::net::URL* url, Object$* obj, ::sun::net::www::http::HttpClient* http);
	void readObject(::java::io::ObjectInputStream* stream);
	using ::java::util::HashMap::remove;
	virtual void remove(::sun::net::www::http::HttpClient* h, Object$* obj);
	void removeVector(::sun::net::www::http::KeepAliveKey* k);
	virtual void run() override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* stream);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xD73D10D10495D483;
	static const int32_t MAX_CONNECTIONS = 5;
	static int32_t result;
	static const int32_t LIFETIME = 5000;
	::java::util::concurrent::locks::ReentrantLock* cacheLock = nullptr;
	$Thread* keepAliveTimer = nullptr;
};

			} // http
		} // www
	} // net
} // sun

#pragma pop_macro("MAX_CONNECTIONS")
#pragma pop_macro("LIFETIME")

#endif // _sun_net_www_http_KeepAliveCache_h_