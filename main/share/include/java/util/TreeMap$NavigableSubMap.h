#ifndef _java_util_TreeMap$NavigableSubMap_h_
#define _java_util_TreeMap$NavigableSubMap_h_
//$ class java.util.TreeMap$NavigableSubMap
//$ extends java.util.AbstractMap
//$ implements java.util.NavigableMap,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractMap.h>
#include <java/util/NavigableMap.h>

namespace java {
	namespace util {
		class Iterator;
		class Map$Entry;
		class NavigableSet;
		class Set;
		class SortedMap;
		class Spliterator;
		class TreeMap;
		class TreeMap$Entry;
		class TreeMap$KeySet;
		class TreeMap$NavigableSubMap$EntrySetView;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
		}
	}
}

namespace java {
	namespace util {

class $import TreeMap$NavigableSubMap : public ::java::util::AbstractMap, public ::java::util::NavigableMap, public ::java::io::Serializable {
	$class(TreeMap$NavigableSubMap, $NO_CLASS_INIT, ::java::util::AbstractMap, ::java::util::NavigableMap, ::java::io::Serializable)
public:
	TreeMap$NavigableSubMap();
	using ::java::util::NavigableMap::headMap;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override {return nullptr;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::TreeMap* m, bool fromStart, Object$* lo, bool loInclusive, bool toEnd, Object$* hi, bool hiInclusive);
	::java::util::TreeMap$Entry* absCeiling(Object$* key);
	::java::util::TreeMap$Entry* absFloor(Object$* key);
	::java::util::TreeMap$Entry* absHighFence();
	::java::util::TreeMap$Entry* absHigher(Object$* key);
	::java::util::TreeMap$Entry* absHighest();
	::java::util::TreeMap$Entry* absLowFence();
	::java::util::TreeMap$Entry* absLower(Object$* key);
	::java::util::TreeMap$Entry* absLowest();
	virtual ::java::util::Map$Entry* ceilingEntry(Object$* key) override;
	virtual $Object* ceilingKey(Object$* key) override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual ::java::util::Iterator* descendingKeyIterator() {return nullptr;}
	virtual ::java::util::NavigableSet* descendingKeySet() override;
	virtual ::java::util::Map$Entry* firstEntry() override;
	virtual $Object* firstKey() override;
	virtual ::java::util::Map$Entry* floorEntry(Object$* key) override;
	virtual $Object* floorKey(Object$* key) override;
	virtual $Object* get(Object$* key) override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	virtual ::java::util::Map$Entry* higherEntry(Object$* key) override;
	virtual $Object* higherKey(Object$* key) override;
	bool inClosedRange(Object$* key);
	bool inRange(Object$* key);
	bool inRange(Object$* key, bool inclusive);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* keyIterator() {return nullptr;}
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Spliterator* keySpliterator() {return nullptr;}
	virtual ::java::util::Map$Entry* lastEntry() override;
	virtual $Object* lastKey() override;
	virtual ::java::util::Map$Entry* lowerEntry(Object$* key) override;
	virtual $Object* lowerKey(Object$* key) override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::util::NavigableSet* navigableKeySet() override;
	virtual ::java::util::Map$Entry* pollFirstEntry() override;
	virtual ::java::util::Map$Entry* pollLastEntry() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual ::java::util::TreeMap$Entry* subCeiling(Object$* key) {return nullptr;}
	virtual ::java::util::TreeMap$Entry* subFloor(Object$* key) {return nullptr;}
	virtual ::java::util::TreeMap$Entry* subHigher(Object$* key) {return nullptr;}
	virtual ::java::util::TreeMap$Entry* subHighest() {return nullptr;}
	virtual ::java::util::TreeMap$Entry* subLower(Object$* key) {return nullptr;}
	virtual ::java::util::TreeMap$Entry* subLowest() {return nullptr;}
	using ::java::util::NavigableMap::subMap;
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override;
	using ::java::util::NavigableMap::tailMap;
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override;
	virtual $String* toString() override;
	bool tooHigh(Object$* key);
	bool tooLow(Object$* key);
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0xE2D0A70E64210E08;
	::java::util::TreeMap* m = nullptr;
	$Object* lo = nullptr;
	$Object* hi = nullptr;
	bool fromStart = false;
	bool toEnd = false;
	bool loInclusive = false;
	bool hiInclusive = false;
	::java::util::NavigableMap* descendingMapView = nullptr;
	::java::util::TreeMap$NavigableSubMap$EntrySetView* entrySetView = nullptr;
	::java::util::TreeMap$KeySet* navigableKeySetView = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$NavigableSubMap_h_