#ifndef _java_util_Collections$CheckedNavigableMap_h_
#define _java_util_Collections$CheckedNavigableMap_h_
//$ class java.util.Collections$CheckedNavigableMap
//$ extends java.util.Collections$CheckedSortedMap
//$ implements java.util.NavigableMap

#include <java/util/Collections$CheckedSortedMap.h>
#include <java/util/NavigableMap.h>

namespace java {
	namespace util {
		class Comparator;
		class Map$Entry;
		class NavigableSet;
		class Set;
		class SortedMap;
	}
}

namespace java {
	namespace util {

class $import Collections$CheckedNavigableMap : public ::java::util::Collections$CheckedSortedMap, public ::java::util::NavigableMap {
	$class(Collections$CheckedNavigableMap, $NO_CLASS_INIT, ::java::util::Collections$CheckedSortedMap, ::java::util::NavigableMap)
public:
	Collections$CheckedNavigableMap();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* v) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::NavigableMap* m, $Class* keyType, $Class* valueType);
	virtual ::java::util::Map$Entry* ceilingEntry(Object$* key) override;
	virtual $Object* ceilingKey(Object$* key) override;
	virtual ::java::util::Comparator* comparator() override;
	virtual ::java::util::NavigableSet* descendingKeySet() override;
	virtual ::java::util::NavigableMap* descendingMap() override;
	virtual ::java::util::Map$Entry* firstEntry() override;
	virtual $Object* firstKey() override;
	virtual ::java::util::Map$Entry* floorEntry(Object$* key) override;
	virtual $Object* floorKey(Object$* key) override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) override;
	virtual ::java::util::Map$Entry* higherEntry(Object$* key) override;
	virtual $Object* higherKey(Object$* key) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Map$Entry* lastEntry() override;
	virtual $Object* lastKey() override;
	virtual ::java::util::Map$Entry* lowerEntry(Object$* key) override;
	virtual $Object* lowerKey(Object$* key) override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::util::NavigableSet* navigableKeySet() override;
	virtual ::java::util::Map$Entry* pollFirstEntry() override;
	virtual ::java::util::Map$Entry* pollLastEntry() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override;
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) override;
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override;
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0xBCA896E4074CACB0;
	::java::util::NavigableMap* nm = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedNavigableMap_h_