#ifndef _java_nio_charset_Charset$1_h_
#define _java_nio_charset_Charset$1_h_
//$ class java.nio.charset.Charset$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			namespace spi {
				class CharsetProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class ServiceLoader;
	}
}

namespace java {
	namespace nio {
		namespace charset {

class Charset$1 : public ::java::util::Iterator {
	$class(Charset$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Charset$1();
	void init$();
	bool getNext();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::lang::ClassLoader* cl = nullptr;
	::java::util::ServiceLoader* sl = nullptr;
	::java::util::Iterator* i = nullptr;
	::java::nio::charset::spi::CharsetProvider* next$ = nullptr;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_Charset$1_h_