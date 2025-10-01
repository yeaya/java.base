#ifndef _java_util_ImmutableCollections$Access$1_h_
#define _java_util_ImmutableCollections$Access$1_h_
//$ class java.util.ImmutableCollections$Access$1
//$ extends jdk.internal.access.JavaUtilCollectionAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaUtilCollectionAccess.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace util {

class ImmutableCollections$Access$1 : public ::jdk::internal::access::JavaUtilCollectionAccess {
	$class(ImmutableCollections$Access$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaUtilCollectionAccess)
public:
	ImmutableCollections$Access$1();
	void init$();
	virtual ::java::util::List* listFromTrustedArray($ObjectArray* array) override;
	virtual ::java::util::List* listFromTrustedArrayNullsAllowed($ObjectArray* array) override;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$Access$1_h_