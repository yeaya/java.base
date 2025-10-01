#ifndef _java_util_ServiceLoader$LayerLookupIterator_h_
#define _java_util_ServiceLoader$LayerLookupIterator_h_
//$ class java.util.ServiceLoader$LayerLookupIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class ModuleLayer;
	}
}
namespace java {
	namespace util {
		class Deque;
		class ServiceConfigurationError;
		class ServiceLoader;
		class ServiceLoader$Provider;
		class Set;
	}
}

namespace java {
	namespace util {

class ServiceLoader$LayerLookupIterator : public ::java::util::Iterator {
	$class(ServiceLoader$LayerLookupIterator, 0, ::java::util::Iterator)
public:
	ServiceLoader$LayerLookupIterator();
	void init$(::java::util::ServiceLoader* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::Iterator* providers(::java::lang::ModuleLayer* layer);
	::java::util::ServiceLoader* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::util::Deque* stack = nullptr;
	::java::util::Set* visited = nullptr;
	::java::util::Iterator* iterator = nullptr;
	::java::util::ServiceLoader$Provider* nextProvider = nullptr;
	::java::util::ServiceConfigurationError* nextError = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$LayerLookupIterator_h_