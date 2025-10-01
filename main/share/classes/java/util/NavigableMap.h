#ifndef _java_util_NavigableMap_h_
#define _java_util_NavigableMap_h_
//$ interface java.util.NavigableMap
//$ extends java.util.SortedMap

#include <java/util/SortedMap.h>

namespace java {
	namespace util {
		class Map$Entry;
		class NavigableSet;
	}
}

namespace java {
	namespace util {

class $export NavigableMap : public ::java::util::SortedMap {
	$interface(NavigableMap, $NO_CLASS_INIT, ::java::util::SortedMap)
public:
	virtual ::java::util::Map$Entry* ceilingEntry(Object$* key) {return nullptr;}
	virtual $Object* ceilingKey(Object$* key) {return nullptr;}
	virtual ::java::util::NavigableSet* descendingKeySet() {return nullptr;}
	virtual ::java::util::NavigableMap* descendingMap() {return nullptr;}
	virtual ::java::util::Map$Entry* firstEntry() {return nullptr;}
	virtual ::java::util::Map$Entry* floorEntry(Object$* key) {return nullptr;}
	virtual $Object* floorKey(Object$* key) {return nullptr;}
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override {return nullptr;}
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) {return nullptr;}
	virtual ::java::util::Map$Entry* higherEntry(Object$* key) {return nullptr;}
	virtual $Object* higherKey(Object$* key) {return nullptr;}
	virtual ::java::util::Map$Entry* lastEntry() {return nullptr;}
	virtual ::java::util::Map$Entry* lowerEntry(Object$* key) {return nullptr;}
	virtual $Object* lowerKey(Object$* key) {return nullptr;}
	virtual ::java::util::NavigableSet* navigableKeySet() {return nullptr;}
	virtual ::java::util::Map$Entry* pollFirstEntry() {return nullptr;}
	virtual ::java::util::Map$Entry* pollLastEntry() {return nullptr;}
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override {return nullptr;}
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) {return nullptr;}
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override {return nullptr;}
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) {return nullptr;}
};

	} // util
} // java

#endif // _java_util_NavigableMap_h_