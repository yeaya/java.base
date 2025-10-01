#ifndef _java_util_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_h_
#define _java_util_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_h_
//$ class java.util.Collections$UnmodifiableNavigableSet$EmptyNavigableSet
//$ extends java.util.Collections$UnmodifiableNavigableSet

#include <java/util/Collections$UnmodifiableNavigableSet.h>

namespace java {
	namespace util {

class Collections$UnmodifiableNavigableSet$EmptyNavigableSet : public ::java::util::Collections$UnmodifiableNavigableSet {
	$class(Collections$UnmodifiableNavigableSet$EmptyNavigableSet, $NO_CLASS_INIT, ::java::util::Collections$UnmodifiableNavigableSet)
public:
	Collections$UnmodifiableNavigableSet$EmptyNavigableSet();
	using ::java::util::Collections$UnmodifiableNavigableSet::headSet;
	void init$();
	$Object* readResolve();
	using ::java::util::Collections$UnmodifiableNavigableSet::subSet;
	using ::java::util::Collections$UnmodifiableNavigableSet::tailSet;
	static const int64_t serialVersionUID = (int64_t)0xA8B0FAD0DE1DE942;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableNavigableSet$EmptyNavigableSet_h_