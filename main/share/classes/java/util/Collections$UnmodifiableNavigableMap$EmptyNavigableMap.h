#ifndef _java_util_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_h_
#define _java_util_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_h_
//$ class java.util.Collections$UnmodifiableNavigableMap$EmptyNavigableMap
//$ extends java.util.Collections$UnmodifiableNavigableMap

#include <java/util/Collections$UnmodifiableNavigableMap.h>

namespace java {
	namespace util {
		class NavigableSet;
	}
}

namespace java {
	namespace util {

class Collections$UnmodifiableNavigableMap$EmptyNavigableMap : public ::java::util::Collections$UnmodifiableNavigableMap {
	$class(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, $NO_CLASS_INIT, ::java::util::Collections$UnmodifiableNavigableMap)
public:
	Collections$UnmodifiableNavigableMap$EmptyNavigableMap();
	using ::java::util::Collections$UnmodifiableNavigableMap::headMap;
	void init$();
	virtual ::java::util::NavigableSet* navigableKeySet() override;
	$Object* readResolve();
	using ::java::util::Collections$UnmodifiableNavigableMap::subMap;
	using ::java::util::Collections$UnmodifiableNavigableMap::tailMap;
	static const int64_t serialVersionUID = (int64_t)0xE0EC54FE7D1C0D6C;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_h_