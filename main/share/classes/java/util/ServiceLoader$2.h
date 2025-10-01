#ifndef _java_util_ServiceLoader$2_h_
#define _java_util_ServiceLoader$2_h_
//$ class java.util.ServiceLoader$2
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ServiceLoader;
	}
}

namespace java {
	namespace util {

class ServiceLoader$2 : public ::java::util::Iterator {
	$class(ServiceLoader$2, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ServiceLoader$2();
	void init$(::java::util::ServiceLoader* this$0, ::java::util::Iterator* val$first, ::java::util::Iterator* val$second);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::ServiceLoader* this$0 = nullptr;
	::java::util::Iterator* val$second = nullptr;
	::java::util::Iterator* val$first = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$2_h_