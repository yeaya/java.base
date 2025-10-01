#ifndef _java_net_URL$1_h_
#define _java_net_URL$1_h_
//$ class java.net.URL$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		namespace spi {
			class URLStreamHandlerProvider;
		}
	}
}
namespace java {
	namespace util {
		class ServiceLoader;
	}
}

namespace java {
	namespace net {

class URL$1 : public ::java::util::Iterator {
	$class(URL$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	URL$1();
	void init$();
	bool getNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::lang::ClassLoader* cl = nullptr;
	::java::util::ServiceLoader* sl = nullptr;
	::java::util::Iterator* i = nullptr;
	::java::net::spi::URLStreamHandlerProvider* next$ = nullptr;
};

	} // net
} // java

#endif // _java_net_URL$1_h_