#ifndef _java_util_TreeMap_h_
#define _java_util_TreeMap_h_
//$ class java.util.TreeMap
//$ extends java.util.AbstractMap
//$ implements java.util.NavigableMap,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractMap.h>
#include <java/util/NavigableMap.h>

#pragma push_macro("BLACK")
#undef BLACK
#pragma push_macro("RED")
#undef RED
#pragma push_macro("UNBOUNDED")
#undef UNBOUNDED

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class Iterator;
		class Map;
		class Map$Entry;
		class NavigableSet;
		class Set;
		class SortedMap;
		class SortedSet;
		class Spliterator;
		class TreeMap$Entry;
		class TreeMap$EntrySet;
		class TreeMap$KeySet;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class Function;
		}
	}
}

namespace java {
	namespace util {

class $import TreeMap : public ::java::util::AbstractMap, public ::java::util::NavigableMap, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(TreeMap, 0, ::java::util::AbstractMap, ::java::util::NavigableMap, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	TreeMap();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	void init$();
	void init$(::java::util::Comparator* comparator);
	void init$(::java::util::Map* m);
	void init$(::java::util::SortedMap* m);
	virtual void addAllForTreeSet(::java::util::SortedSet* set, Object$* defaultVal);
	void addEntry(Object$* key, Object$* value, ::java::util::TreeMap$Entry* parent, bool addToLeft);
	void addEntryToEmptyMap(Object$* key, Object$* value);
	void buildFromSorted(int32_t size, ::java::util::Iterator* it, ::java::io::ObjectInputStream* str, Object$* defaultVal);
	::java::util::TreeMap$Entry* buildFromSorted(int32_t level, int32_t lo, int32_t hi, int32_t redLevel, ::java::util::Iterator* it, ::java::io::ObjectInputStream* str, Object$* defaultVal);
	$Object* callMappingFunctionWithCheck(Object$* key, ::java::util::function::Function* mappingFunction);
	$Object* callRemappingFunctionWithCheck(Object$* key, Object$* oldValue, ::java::util::function::BiFunction* remappingFunction);
	virtual ::java::util::Map$Entry* ceilingEntry(Object$* key) override;
	virtual $Object* ceilingKey(Object$* key) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	static bool colorOf(::java::util::TreeMap$Entry* p);
	virtual ::java::util::Comparator* comparator() override;
	int32_t compare(Object$* k1, Object$* k2);
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	static int32_t computeRedLevel(int32_t size);
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	void deleteEntry(::java::util::TreeMap$Entry* p);
	virtual ::java::util::Iterator* descendingKeyIterator();
	virtual ::java::util::NavigableSet* descendingKeySet() override;
	::java::util::Spliterator* descendingKeySpliterator();
	virtual ::java::util::NavigableMap* descendingMap() override;
	virtual ::java::util::Set* entrySet() override;
	static ::java::util::Map$Entry* exportEntry(::java::util::TreeMap$Entry* e);
	virtual ::java::util::Map$Entry* firstEntry() override;
	virtual $Object* firstKey() override;
	void fixAfterDeletion(::java::util::TreeMap$Entry* x);
	void fixAfterInsertion(::java::util::TreeMap$Entry* x);
	virtual ::java::util::Map$Entry* floorEntry(Object$* key) override;
	virtual $Object* floorKey(Object$* key) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	::java::util::TreeMap$Entry* getCeilingEntry(Object$* key);
	::java::util::TreeMap$Entry* getEntry(Object$* key);
	::java::util::TreeMap$Entry* getEntryUsingComparator(Object$* key);
	::java::util::TreeMap$Entry* getFirstEntry();
	::java::util::TreeMap$Entry* getFloorEntry(Object$* key);
	::java::util::TreeMap$Entry* getHigherEntry(Object$* key);
	::java::util::TreeMap$Entry* getLastEntry();
	::java::util::TreeMap$Entry* getLowerEntry(Object$* key);
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	virtual ::java::util::Map$Entry* higherEntry(Object$* key) override;
	virtual $Object* higherKey(Object$* key) override;
	static $Object* key(::java::util::TreeMap$Entry* e);
	virtual ::java::util::Iterator* keyIterator();
	static $Object* keyOrNull(::java::util::TreeMap$Entry* e);
	virtual ::java::util::Set* keySet() override;
	::java::util::Spliterator* keySpliterator();
	static ::java::util::Spliterator* keySpliteratorFor(::java::util::NavigableMap* m);
	virtual ::java::util::Map$Entry* lastEntry() override;
	virtual $Object* lastKey() override;
	static ::java::util::TreeMap$Entry* leftOf(::java::util::TreeMap$Entry* p);
	virtual ::java::util::Map$Entry* lowerEntry(Object$* key) override;
	virtual $Object* lowerKey(Object$* key) override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	$Object* mergeValue(::java::util::TreeMap$Entry* t, Object$* value, ::java::util::function::BiFunction* remappingFunction);
	virtual ::java::util::NavigableSet* navigableKeySet() override;
	static ::java::util::TreeMap$Entry* parentOf(::java::util::TreeMap$Entry* p);
	virtual ::java::util::Map$Entry* pollFirstEntry() override;
	virtual ::java::util::Map$Entry* pollLastEntry() override;
	static ::java::util::TreeMap$Entry* predecessor(::java::util::TreeMap$Entry* t);
	virtual $Object* put(Object$* key, Object$* value) override;
	$Object* put(Object$* key, Object$* value, bool replaceOld);
	virtual void putAll(::java::util::Map* map) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void readTreeSet(int32_t size, ::java::io::ObjectInputStream* s, Object$* defaultVal);
	$Object* remapValue(::java::util::TreeMap$Entry* t, Object$* key, ::java::util::function::BiFunction* remappingFunction);
	virtual bool remove(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	static ::java::util::TreeMap$Entry* rightOf(::java::util::TreeMap$Entry* p);
	void rotateLeft(::java::util::TreeMap$Entry* p);
	void rotateRight(::java::util::TreeMap$Entry* p);
	static void setColor(::java::util::TreeMap$Entry* p, bool c);
	virtual int32_t size() override;
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) override;
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override;
	static ::java::util::TreeMap$Entry* successor(::java::util::TreeMap$Entry* t);
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) override;
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override;
	virtual $String* toString() override;
	static bool valEquals(Object$* o1, Object$* o2);
	virtual ::java::util::Collection* values() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::Comparator* comparator$ = nullptr;
	::java::util::TreeMap$Entry* root = nullptr;
	int32_t size$ = 0;
	int32_t modCount = 0;
	::java::util::TreeMap$EntrySet* entrySet$ = nullptr;
	::java::util::TreeMap$KeySet* navigableKeySet$ = nullptr;
	::java::util::NavigableMap* descendingMap$ = nullptr;
	static $Object* UNBOUNDED;
	static const bool RED = false;
	static const bool BLACK = true;
	static const int64_t serialVersionUID = (int64_t)0x0CC1F63E2D256AE6;
};

	} // util
} // java

#pragma pop_macro("BLACK")
#pragma pop_macro("RED")
#pragma pop_macro("UNBOUNDED")

#endif // _java_util_TreeMap_h_