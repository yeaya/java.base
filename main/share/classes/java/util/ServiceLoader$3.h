#ifndef _java_util_ServiceLoader$3_h_
#define _java_util_ServiceLoader$3_h_
//$ class java.util.ServiceLoader$3
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ServiceLoader;
	}
}

namespace java {
	namespace util {

class ServiceLoader$3 : public ::java::util::Iterator {
	$class(ServiceLoader$3, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ServiceLoader$3();
	void init$(::java::util::ServiceLoader* this$0);
	void checkReloadCount();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::ServiceLoader* this$0 = nullptr;
	int32_t expectedReloadCount = 0;
	int32_t index = 0;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$3_h_