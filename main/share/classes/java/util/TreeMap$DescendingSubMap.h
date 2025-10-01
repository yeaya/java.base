#ifndef _java_util_TreeMap$DescendingSubMap_h_
#define _java_util_TreeMap$DescendingSubMap_h_
//$ class java.util.TreeMap$DescendingSubMap
//$ extends java.util.TreeMap$NavigableSubMap

#include <java/util/TreeMap$NavigableSubMap.h>

namespace java {
	namespace util {
		class Comparator;
		class Iterator;
		class NavigableMap;
		class Set;
		class Spliterator;
		class TreeMap;
		class TreeMap$Entry;
	}
}

namespace java {
	namespace util {

class $export TreeMap$DescendingSubMap : public ::java::util::TreeMap$NavigableSubMap {
	$class(TreeMap$DescendingSubMap, $NO_CLASS_INIT, ::java::util::TreeMap$NavigableSubMap)
public:
	TreeMap$DescendingSubMap();
	using ::java::util::TreeMap$NavigableSubMap::headMap;
	void init$(::java::util::TreeMap* m, bool fromStart, Object$* lo, bool loInclusive, bool toEnd, Object$* hi, bool hiInclusive);
	virtual ::java::util::Comparator* comparator() override;
	virtual ::java::util::Iterator* descendingKeyIterator() override;
	virtual ::java::util::NavigableMap* descendingMap() override;
	virtual ::java::util::Set* entrySet() override;
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) override;
	virtual ::java::util::Iterator* keyIterator() override;
	virtual ::java::util::Spliterator* keySpliterator() override;
	using ::java::util::TreeMap$NavigableSubMap::remove;
	virtual ::java::util::TreeMap$Entry* subCeiling(Object$* key) override;
	virtual ::java::util::TreeMap$Entry* subFloor(Object$* key) override;
	virtual ::java::util::TreeMap$Entry* subHigher(Object$* key) override;
	virtual ::java::util::TreeMap$Entry* subHighest() override;
	virtual ::java::util::TreeMap$Entry* subLower(Object$* key) override;
	virtual ::java::util::TreeMap$Entry* subLowest() override;
	using ::java::util::TreeMap$NavigableSubMap::subMap;
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) override;
	using ::java::util::TreeMap$NavigableSubMap::tailMap;
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) override;
	static const int64_t serialVersionUID = (int64_t)0x0CAB946D1F0F9D0C;
	::java::util::Comparator* reverseComparator = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$DescendingSubMap_h_