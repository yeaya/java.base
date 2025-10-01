#ifndef _java_util_ServiceLoader$ProviderSpliterator_h_
#define _java_util_ServiceLoader$ProviderSpliterator_h_
//$ class java.util.ServiceLoader$ProviderSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class Iterator;
		class ServiceLoader;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {

class ServiceLoader$ProviderSpliterator : public ::java::util::Spliterator {
	$class(ServiceLoader$ProviderSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	ServiceLoader$ProviderSpliterator();
	void init$(::java::util::ServiceLoader* this$0, ::java::util::Iterator* iterator);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::ServiceLoader* this$0 = nullptr;
	int32_t expectedReloadCount = 0;
	::java::util::Iterator* iterator = nullptr;
	int32_t index = 0;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$ProviderSpliterator_h_