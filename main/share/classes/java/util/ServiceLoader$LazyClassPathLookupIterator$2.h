#ifndef _java_util_ServiceLoader$LazyClassPathLookupIterator$2_h_
#define _java_util_ServiceLoader$LazyClassPathLookupIterator$2_h_
//$ class java.util.ServiceLoader$LazyClassPathLookupIterator$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		class ServiceLoader$LazyClassPathLookupIterator;
	}
}

namespace java {
	namespace util {

class ServiceLoader$LazyClassPathLookupIterator$2 : public ::java::security::PrivilegedAction {
	$class(ServiceLoader$LazyClassPathLookupIterator$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ServiceLoader$LazyClassPathLookupIterator$2();
	void init$(::java::util::ServiceLoader$LazyClassPathLookupIterator* this$1);
	virtual $Object* run() override;
	::java::util::ServiceLoader$LazyClassPathLookupIterator* this$1 = nullptr;
};

	} // util
} // java

#endif // _java_util_ServiceLoader$LazyClassPathLookupIterator$2_h_