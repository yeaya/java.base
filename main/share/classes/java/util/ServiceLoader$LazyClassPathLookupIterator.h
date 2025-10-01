#ifndef _java_util_ServiceLoader$LazyClassPathLookupIterator_h_
#define _java_util_ServiceLoader$LazyClassPathLookupIterator_h_
//$ class java.util.ServiceLoader$LazyClassPathLookupIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

#pragma push_macro("PREFIX")
#undef PREFIX

namespace java {
	namespace io {
		class BufferedReader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class ServiceConfigurationError;
		class ServiceLoader;
		class ServiceLoader$Provider;
		class Set;
	}
}

namespace java {
	namespace util {

class ServiceLoader$LazyClassPathLookupIterator : public ::java::util::Iterator {
	$class(ServiceLoader$LazyClassPathLookupIterator, 0, ::java::util::Iterator)
public:
	ServiceLoader$LazyClassPathLookupIterator();
	void init$(::java::util::ServiceLoader* this$0);
	virtual bool hasNext() override;
	bool hasNextService();
	virtual $Object* next() override;
	$Class* nextProviderClass();
	::java::util::ServiceLoader$Provider* nextService();
	::java::util::Iterator* parse(::java::net::URL* u);
	int32_t parseLine(::java::net::URL* u, ::java::io::BufferedReader* r, int32_t lc, ::java::util::Set* names);
	::java::util::ServiceLoader* this$0 = nullptr;
	static bool $assertionsDisabled;
	static $String* PREFIX;
	::java::util::Set* providerNames = nullptr;
	::java::util::Enumeration* configs = nullptr;
	::java::util::Iterator* pending = nullptr;
	::java::util::ServiceLoader$Provider* nextProvider = nullptr;
	::java::util::ServiceConfigurationError* nextError = nullptr;
};

	} // util
} // java

#pragma pop_macro("PREFIX")

#endif // _java_util_ServiceLoader$LazyClassPathLookupIterator_h_