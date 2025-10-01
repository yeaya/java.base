#ifndef _java_util_concurrent_ConcurrentSkipListMap$SubMap_h_
#define _java_util_concurrent_ConcurrentSkipListMap$SubMap_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$SubMap
//$ extends java.util.AbstractMap
//$ implements java.util.concurrent.ConcurrentNavigableMap,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractMap.h>
#include <java/util/concurrent/ConcurrentNavigableMap.h>

namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Map$Entry;
		class NavigableMap;
		class NavigableSet;
		class Set;
		class SortedMap;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap;
			class ConcurrentSkipListMap$EntrySet;
			class ConcurrentSkipListMap$KeySet;
			class ConcurrentSkipListMap$Node;
			class ConcurrentSkipListMap$Values;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentSkipListMap$SubMap : public ::java::util::AbstractMap, public ::java::util::concurrent::ConcurrentNavigableMap, public ::java::io::Serializable {
	$class(ConcurrentSkipListMap$SubMap, $NO_CLASS_INIT, ::java::util::AbstractMap, ::java::util::concurrent::ConcurrentNavigableMap, ::java::io::Serializable)
public:
	ConcurrentSkipListMap$SubMap();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ConcurrentSkipListMap* map, Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive, bool isDescending);
	virtual ::java::util::Map$Entry* ceilingEntry(Object$* key) override;
	virtual $Object* ceilingKey(Object$* key) override;
	void checkKeyBounds(Object$* key, ::java::util::Comparator* cmp);
	virtual void clear() override;
	virtual ::java::util::Comparator* comparator() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::NavigableSet* descendingKeySet() override;
	virtual ::java::util::NavigableMap* descendingMap() override;
	virtual ::java::util::Set* entrySet() override;
	virtual ::java::util::Map$Entry* firstEntry() override;
	virtual $Object* firstKey() override;
	virtual ::java::util::Map$Entry* floorEntry(Object$* key) override;
	virtual $Object* floorKey(Object$* key) override;
	virtual $Object* get(Object$* key) override;
	::java::util::Map$Entry* getNearEntry(Object$* key, int32_t rel);
	$Object* getNearKey(Object$* key, int32_t rel);
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	::java::util::concurrent::ConcurrentSkipListMap$Node* hiNode(::java::util::Comparator* cmp);
	virtual ::java::util::Map$Entry* higherEntry(Object$* key) override;
	virtual $Object* higherKey(Object$* key) override;
	::java::util::Map$Entry* highestEntry();
	$Object* highestKey();
	bool inBounds(Object$* key, ::java::util::Comparator* cmp);
	bool isBeforeEnd(::java::util::concurrent::ConcurrentSkipListMap$Node* n, ::java::util::Comparator* cmp);
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Map$Entry* lastEntry() override;
	virtual $Object* lastKey() override;
	::java::util::concurrent::ConcurrentSkipListMap$Node* loNode(::java::util::Comparator* cmp);
	virtual ::java::util::Map$Entry* lowerEntry(Object$* key) override;
	virtual $Object* lowerKey(Object$* key) override;
	::java::util::Map$Entry* lowestEntry();
	$Object* lowestKey();
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::util::NavigableSet* navigableKeySet() override;
	::java::util::concurrent::ConcurrentSkipListMap$SubMap* newSubMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive);
	virtual ::java::util::Map$Entry* pollFirstEntry() override;
	virtual ::java::util::Map$Entry* pollLastEntry() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	::java::util::Map$Entry* removeHighest();
	::java::util::Map$Entry* removeLowest();
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) override;
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override;
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) override;
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override;
	virtual $String* toString() override;
	bool tooHigh(Object$* key, ::java::util::Comparator* cmp);
	bool tooLow(Object$* key, ::java::util::Comparator* cmp);
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x95E01E7CCDF346A7;
	::java::util::concurrent::ConcurrentSkipListMap* m = nullptr;
	$Object* lo = nullptr;
	$Object* hi = nullptr;
	bool loInclusive = false;
	bool hiInclusive = false;
	bool isDescending = false;
	::java::util::concurrent::ConcurrentSkipListMap$KeySet* keySetView = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Values* valuesView = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$EntrySet* entrySetView = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$SubMap_h_