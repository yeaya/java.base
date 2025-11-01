#ifndef _java_util_concurrent_ConcurrentSkipListMap_h_
#define _java_util_concurrent_ConcurrentSkipListMap_h_
//$ class java.util.concurrent.ConcurrentSkipListMap
//$ extends java.util.AbstractMap
//$ implements java.util.concurrent.ConcurrentNavigableMap,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractMap.h>
#include <java/util/concurrent/ConcurrentNavigableMap.h>

#pragma push_macro("ADDER")
#undef ADDER
#pragma push_macro("EQ")
#undef EQ
#pragma push_macro("GT")
#undef GT
#pragma push_macro("HEAD")
#undef HEAD
#pragma push_macro("LT")
#undef LT
#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("VAL")
#undef VAL

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace util {
		class AbstractMap$SimpleImmutableEntry;
		class Collection;
		class Comparator;
		class List;
		class Map;
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
			class ConcurrentSkipListMap$EntrySet;
			class ConcurrentSkipListMap$EntrySpliterator;
			class ConcurrentSkipListMap$Index;
			class ConcurrentSkipListMap$KeySet;
			class ConcurrentSkipListMap$KeySpliterator;
			class ConcurrentSkipListMap$Node;
			class ConcurrentSkipListMap$SubMap;
			class ConcurrentSkipListMap$ValueSpliterator;
			class ConcurrentSkipListMap$Values;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class LongAdder;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class Function;
			class Predicate;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentSkipListMap : public ::java::util::AbstractMap, public ::java::util::concurrent::ConcurrentNavigableMap, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(ConcurrentSkipListMap, 0, ::java::util::AbstractMap, ::java::util::concurrent::ConcurrentNavigableMap, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	ConcurrentSkipListMap();
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Comparator* comparator);
	void init$(::java::util::Map* m);
	void init$(::java::util::SortedMap* m);
	void addCount(int64_t c);
	static bool addIndices(::java::util::concurrent::ConcurrentSkipListMap$Index* q, int32_t skips, ::java::util::concurrent::ConcurrentSkipListMap$Index* x, ::java::util::Comparator* cmp);
	::java::util::concurrent::ConcurrentSkipListMap$Node* baseHead();
	void buildFromSorted(::java::util::SortedMap* map);
	virtual ::java::util::Map$Entry* ceilingEntry(Object$* key) override;
	virtual $Object* ceilingKey(Object$* key) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual ::java::util::Comparator* comparator() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	static int32_t cpr(::java::util::Comparator* c, Object$* x, Object$* y);
	virtual ::java::util::NavigableSet* descendingKeySet() override;
	virtual ::java::util::NavigableMap* descendingMap() override;
	$Object* doGet(Object$* key);
	$Object* doPut(Object$* key, Object$* value, bool onlyIfAbsent);
	$Object* doRemove(Object$* key, Object$* value);
	::java::util::AbstractMap$SimpleImmutableEntry* doRemoveFirstEntry();
	::java::util::Map$Entry* doRemoveLastEntry();
	virtual ::java::util::Set* entrySet() override;
	::java::util::concurrent::ConcurrentSkipListMap$EntrySpliterator* entrySpliterator();
	virtual bool equals(Object$* o) override;
	::java::util::concurrent::ConcurrentSkipListMap$Node* findFirst();
	::java::util::AbstractMap$SimpleImmutableEntry* findFirstEntry();
	::java::util::concurrent::ConcurrentSkipListMap$Node* findLast();
	::java::util::AbstractMap$SimpleImmutableEntry* findLastEntry();
	::java::util::concurrent::ConcurrentSkipListMap$Node* findNear(Object$* key, int32_t rel, ::java::util::Comparator* cmp);
	::java::util::AbstractMap$SimpleImmutableEntry* findNearEntry(Object$* key, int32_t rel, ::java::util::Comparator* cmp);
	::java::util::concurrent::ConcurrentSkipListMap$Node* findNode(Object$* key);
	::java::util::concurrent::ConcurrentSkipListMap$Node* findPredecessor(Object$* key, ::java::util::Comparator* cmp);
	virtual ::java::util::Map$Entry* firstEntry() override;
	virtual $Object* firstKey() override;
	virtual ::java::util::Map$Entry* floorEntry(Object$* key) override;
	virtual $Object* floorKey(Object$* key) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	int64_t getAdderCount();
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	virtual ::java::util::Map$Entry* higherEntry(Object$* key) override;
	virtual $Object* higherKey(Object$* key) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	::java::util::concurrent::ConcurrentSkipListMap$KeySpliterator* keySpliterator();
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
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool removeEntryIf(::java::util::function::Predicate* function);
	virtual bool removeValueIf(::java::util::function::Predicate* function);
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) override;
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override;
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) override;
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override;
	static ::java::util::List* toList(::java::util::Collection* c);
	virtual $String* toString() override;
	void tryReduceLevel();
	static void unlinkNode(::java::util::concurrent::ConcurrentSkipListMap$Node* b, ::java::util::concurrent::ConcurrentSkipListMap$Node* n);
	::java::util::concurrent::ConcurrentSkipListMap$ValueSpliterator* valueSpliterator();
	virtual ::java::util::Collection* values() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x884675AE061146A7;
	::java::util::Comparator* comparator$ = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Index* head = nullptr;
	::java::util::concurrent::atomic::LongAdder* adder = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$KeySet* keySet$ = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Values* values$ = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$EntrySet* entrySet$ = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$SubMap* descendingMap$ = nullptr;
	static const int32_t EQ = 1;
	static const int32_t LT = 2;
	static const int32_t GT = 0;
	static ::java::lang::invoke::VarHandle* HEAD;
	static ::java::lang::invoke::VarHandle* ADDER;
	static ::java::lang::invoke::VarHandle* NEXT;
	static ::java::lang::invoke::VarHandle* VAL;
	static ::java::lang::invoke::VarHandle* RIGHT;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ADDER")
#pragma pop_macro("EQ")
#pragma pop_macro("GT")
#pragma pop_macro("HEAD")
#pragma pop_macro("LT")
#pragma pop_macro("NEXT")
#pragma pop_macro("RIGHT")
#pragma pop_macro("VAL")

#endif // _java_util_concurrent_ConcurrentSkipListMap_h_