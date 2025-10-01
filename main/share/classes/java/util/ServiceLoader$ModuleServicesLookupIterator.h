#ifndef _java_util_ServiceLoader$ModuleServicesLookupIterator_h_
#define _java_util_ServiceLoader$ModuleServicesLookupIterator_h_
//$ class java.util.ServiceLoader$ModuleServicesLookupIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
		class ModuleLayer;
	}
}
namespace java {
	namespace util {
		class List;
		class ServiceConfigurationError;
		class ServiceLoader;
		class ServiceLoader$Provider;
	}
}

namespace java {
	namespace util {

class ServiceLoader$ModuleServicesLookupIterator : public ::java::util::Iterator {
	$class(ServiceLoader$ModuleServicesLookupIterator, 0, ::java::util::Iterator)
public:
	ServiceLoader$ModuleServicesLookupIterator();
	void init$(::java::util::ServiceLoader* this$0);
	virtual bool hasNext() override;
	::java::util::Iterator* iteratorFor(::java::lang::ClassLoader* loader);
	::java::lang::ClassLoader* loaderFor(::java::lang::Module* module);
	virtual $Object* next() override;
	::java::util::List* providers(::java::lang::ModuleLayer* layer);
	::java::util::ServiceLoader* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::lang::ClassLoader* currentLoader = nullptr;
	::java::util::Iterator* iterator = nullptr;
	::java::util::ServiceLoader$Provider* nextProvider = nullptr;
	::java::util::ServiceConfigurationError* nextError = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$ModuleServicesLookupIterator_h_