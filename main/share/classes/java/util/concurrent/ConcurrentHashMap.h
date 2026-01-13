#ifndef _java_util_concurrent_ConcurrentHashMap_h_
#define _java_util_concurrent_ConcurrentHashMap_h_
//$ class java.util.concurrent.ConcurrentHashMap
//$ extends java.util.AbstractMap
//$ implements java.util.concurrent.ConcurrentMap,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractMap.h>
#include <java/util/concurrent/ConcurrentMap.h>

#pragma push_macro("ABASE")
#undef ABASE
#pragma push_macro("ASHIFT")
#undef ASHIFT
#pragma push_macro("BASECOUNT")
#undef BASECOUNT
#pragma push_macro("CELLSBUSY")
#undef CELLSBUSY
#pragma push_macro("CELLVALUE")
#undef CELLVALUE
#pragma push_macro("DEFAULT_CAPACITY")
#undef DEFAULT_CAPACITY
#pragma push_macro("DEFAULT_CONCURRENCY_LEVEL")
#undef DEFAULT_CONCURRENCY_LEVEL
#pragma push_macro("HASH_BITS")
#undef HASH_BITS
#pragma push_macro("LOAD_FACTOR")
#undef LOAD_FACTOR
#pragma push_macro("MAXIMUM_CAPACITY")
#undef MAXIMUM_CAPACITY
#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE
#pragma push_macro("MAX_RESIZERS")
#undef MAX_RESIZERS
#pragma push_macro("MIN_TRANSFER_STRIDE")
#undef MIN_TRANSFER_STRIDE
#pragma push_macro("MIN_TREEIFY_CAPACITY")
#undef MIN_TREEIFY_CAPACITY
#pragma push_macro("MOVED")
#undef MOVED
#pragma push_macro("NCPU")
#undef NCPU
#pragma push_macro("RESERVED")
#undef RESERVED
#pragma push_macro("RESIZE_STAMP_BITS")
#undef RESIZE_STAMP_BITS
#pragma push_macro("RESIZE_STAMP_SHIFT")
#undef RESIZE_STAMP_SHIFT
#pragma push_macro("SIZECTL")
#undef SIZECTL
#pragma push_macro("TRANSFERINDEX")
#undef TRANSFERINDEX
#pragma push_macro("TREEBIN")
#undef TREEBIN
#pragma push_macro("TREEIFY_THRESHOLD")
#undef TREEIFY_THRESHOLD
#pragma push_macro("U")
#undef U
#pragma push_macro("UNTREEIFY_THRESHOLD")
#undef UNTREEIFY_THRESHOLD

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Map;
		class Map$Entry;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$CounterCell;
			class ConcurrentHashMap$EntrySetView;
			class ConcurrentHashMap$KeySetView;
			class ConcurrentHashMap$Node;
			class ConcurrentHashMap$ValuesView;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class Consumer;
			class DoubleBinaryOperator;
			class Function;
			class IntBinaryOperator;
			class LongBinaryOperator;
			class Predicate;
			class ToDoubleBiFunction;
			class ToDoubleFunction;
			class ToIntBiFunction;
			class ToIntFunction;
			class ToLongBiFunction;
			class ToLongFunction;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentHashMap : public ::java::util::AbstractMap, public ::java::util::concurrent::ConcurrentMap, public ::java::io::Serializable {
	$class(ConcurrentHashMap, $PRELOAD, ::java::util::AbstractMap, ::java::util::concurrent::ConcurrentMap, ::java::io::Serializable)
public:
	ConcurrentHashMap();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$(int32_t initialCapacity);
	void init$(::java::util::Map* m);
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity, float loadFactor, int32_t concurrencyLevel);
	void addCount(int64_t x, int32_t check);
	int32_t batchFor(int64_t b);
	static bool casTabAt($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t i, ::java::util::concurrent::ConcurrentHashMap$Node* c, ::java::util::concurrent::ConcurrentHashMap$Node* v);
	virtual void clear() override;
	static $Class* comparableClassFor(Object$* x);
	static int32_t compareComparables($Class* kc, Object$* k, Object$* x);
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool contains(Object$* value);
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Enumeration* elements();
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual void forEach(int64_t parallelismThreshold, ::java::util::function::BiConsumer* action);
	virtual void forEach(int64_t parallelismThreshold, ::java::util::function::BiFunction* transformer, ::java::util::function::Consumer* action);
	virtual void forEachEntry(int64_t parallelismThreshold, ::java::util::function::Consumer* action);
	virtual void forEachEntry(int64_t parallelismThreshold, ::java::util::function::Function* transformer, ::java::util::function::Consumer* action);
	virtual void forEachKey(int64_t parallelismThreshold, ::java::util::function::Consumer* action);
	virtual void forEachKey(int64_t parallelismThreshold, ::java::util::function::Function* transformer, ::java::util::function::Consumer* action);
	virtual void forEachValue(int64_t parallelismThreshold, ::java::util::function::Consumer* action);
	virtual void forEachValue(int64_t parallelismThreshold, ::java::util::function::Function* transformer, ::java::util::function::Consumer* action);
	void fullAddCount(int64_t x, bool wasUncontended);
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	$Array<::java::util::concurrent::ConcurrentHashMap$Node>* helpTransfer($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, ::java::util::concurrent::ConcurrentHashMap$Node* f);
	$Array<::java::util::concurrent::ConcurrentHashMap$Node>* initTable();
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::concurrent::ConcurrentHashMap$KeySetView* keySet(Object$* mappedValue);
	virtual ::java::util::Enumeration* keys();
	virtual int64_t mappingCount();
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	static ::java::util::concurrent::ConcurrentHashMap$KeySetView* newKeySet();
	static ::java::util::concurrent::ConcurrentHashMap$KeySetView* newKeySet(int32_t initialCapacity);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	$Object* putVal(Object$* key, Object$* value, bool onlyIfAbsent);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* reduce(int64_t parallelismThreshold, ::java::util::function::BiFunction* transformer, ::java::util::function::BiFunction* reducer);
	virtual ::java::util::Map$Entry* reduceEntries(int64_t parallelismThreshold, ::java::util::function::BiFunction* reducer);
	virtual $Object* reduceEntries(int64_t parallelismThreshold, ::java::util::function::Function* transformer, ::java::util::function::BiFunction* reducer);
	virtual double reduceEntriesToDouble(int64_t parallelismThreshold, ::java::util::function::ToDoubleFunction* transformer, double basis, ::java::util::function::DoubleBinaryOperator* reducer);
	virtual int32_t reduceEntriesToInt(int64_t parallelismThreshold, ::java::util::function::ToIntFunction* transformer, int32_t basis, ::java::util::function::IntBinaryOperator* reducer);
	virtual int64_t reduceEntriesToLong(int64_t parallelismThreshold, ::java::util::function::ToLongFunction* transformer, int64_t basis, ::java::util::function::LongBinaryOperator* reducer);
	virtual $Object* reduceKeys(int64_t parallelismThreshold, ::java::util::function::BiFunction* reducer);
	virtual $Object* reduceKeys(int64_t parallelismThreshold, ::java::util::function::Function* transformer, ::java::util::function::BiFunction* reducer);
	virtual double reduceKeysToDouble(int64_t parallelismThreshold, ::java::util::function::ToDoubleFunction* transformer, double basis, ::java::util::function::DoubleBinaryOperator* reducer);
	virtual int32_t reduceKeysToInt(int64_t parallelismThreshold, ::java::util::function::ToIntFunction* transformer, int32_t basis, ::java::util::function::IntBinaryOperator* reducer);
	virtual int64_t reduceKeysToLong(int64_t parallelismThreshold, ::java::util::function::ToLongFunction* transformer, int64_t basis, ::java::util::function::LongBinaryOperator* reducer);
	virtual double reduceToDouble(int64_t parallelismThreshold, ::java::util::function::ToDoubleBiFunction* transformer, double basis, ::java::util::function::DoubleBinaryOperator* reducer);
	virtual int32_t reduceToInt(int64_t parallelismThreshold, ::java::util::function::ToIntBiFunction* transformer, int32_t basis, ::java::util::function::IntBinaryOperator* reducer);
	virtual int64_t reduceToLong(int64_t parallelismThreshold, ::java::util::function::ToLongBiFunction* transformer, int64_t basis, ::java::util::function::LongBinaryOperator* reducer);
	virtual $Object* reduceValues(int64_t parallelismThreshold, ::java::util::function::BiFunction* reducer);
	virtual $Object* reduceValues(int64_t parallelismThreshold, ::java::util::function::Function* transformer, ::java::util::function::BiFunction* reducer);
	virtual double reduceValuesToDouble(int64_t parallelismThreshold, ::java::util::function::ToDoubleFunction* transformer, double basis, ::java::util::function::DoubleBinaryOperator* reducer);
	virtual int32_t reduceValuesToInt(int64_t parallelismThreshold, ::java::util::function::ToIntFunction* transformer, int32_t basis, ::java::util::function::IntBinaryOperator* reducer);
	virtual int64_t reduceValuesToLong(int64_t parallelismThreshold, ::java::util::function::ToLongFunction* transformer, int64_t basis, ::java::util::function::LongBinaryOperator* reducer);
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool removeEntryIf(::java::util::function::Predicate* function);
	virtual bool removeValueIf(::java::util::function::Predicate* function);
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	$Object* replaceNode(Object$* key, Object$* value, Object$* cv);
	static int32_t resizeStamp(int32_t n);
	virtual $Object* search(int64_t parallelismThreshold, ::java::util::function::BiFunction* searchFunction);
	virtual $Object* searchEntries(int64_t parallelismThreshold, ::java::util::function::Function* searchFunction);
	virtual $Object* searchKeys(int64_t parallelismThreshold, ::java::util::function::Function* searchFunction);
	virtual $Object* searchValues(int64_t parallelismThreshold, ::java::util::function::Function* searchFunction);
	static void setTabAt($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t i, ::java::util::concurrent::ConcurrentHashMap$Node* v);
	virtual int32_t size() override;
	static int32_t spread(int32_t h);
	int64_t sumCount();
	static ::java::util::concurrent::ConcurrentHashMap$Node* tabAt($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t i);
	static int32_t tableSizeFor(int32_t c);
	virtual $String* toString() override;
	void transfer($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, $Array<::java::util::concurrent::ConcurrentHashMap$Node>* nextTab);
	void treeifyBin($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t index);
	void tryPresize(int32_t size);
	static ::java::util::concurrent::ConcurrentHashMap$Node* untreeify(::java::util::concurrent::ConcurrentHashMap$Node* b);
	virtual ::java::util::Collection* values() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x6499DE129D87293D;
	static const int32_t MAXIMUM_CAPACITY = 0x40000000; // 1 << 30
	static const int32_t DEFAULT_CAPACITY = 16;
	static const int32_t MAX_ARRAY_SIZE = 0x7FFFFFF7; // Integer.MAX_VALUE - 8
	static const int32_t DEFAULT_CONCURRENCY_LEVEL = 16;
	static float LOAD_FACTOR;
	static const int32_t TREEIFY_THRESHOLD = 8;
	static const int32_t UNTREEIFY_THRESHOLD = 6;
	static const int32_t MIN_TREEIFY_CAPACITY = 64;
	static const int32_t MIN_TRANSFER_STRIDE = 16;
	static const int32_t RESIZE_STAMP_BITS = 16;
	static const int32_t MAX_RESIZERS = 65535; // (1 << (32 - RESIZE_STAMP_BITS)) - 1
	static const int32_t RESIZE_STAMP_SHIFT = 16; // 32 - RESIZE_STAMP_BITS
	static const int32_t MOVED = (-1);
	static const int32_t TREEBIN = (-2);
	static const int32_t RESERVED = (-3);
	static const int32_t HASH_BITS = 0x7FFFFFFF;
	static int32_t NCPU;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	$volatile($Array<::java::util::concurrent::ConcurrentHashMap$Node>*) table = nullptr;
	$volatile($Array<::java::util::concurrent::ConcurrentHashMap$Node>*) nextTable = nullptr;
	$volatile(int64_t) baseCount = 0;
	$volatile(int32_t) sizeCtl = 0;
	$volatile(int32_t) transferIndex = 0;
	$volatile(int32_t) cellsBusy = 0;
	$volatile($Array<::java::util::concurrent::ConcurrentHashMap$CounterCell>*) counterCells = nullptr;
	::java::util::concurrent::ConcurrentHashMap$KeySetView* keySet$ = nullptr;
	::java::util::concurrent::ConcurrentHashMap$ValuesView* values$ = nullptr;
	::java::util::concurrent::ConcurrentHashMap$EntrySetView* entrySet$ = nullptr;
	static ::jdk::internal::misc::Unsafe* U;
	static int64_t SIZECTL;
	static int64_t TRANSFERINDEX;
	static int64_t BASECOUNT;
	static int64_t CELLSBUSY;
	static int64_t CELLVALUE;
	static int32_t ABASE;
	static int32_t ASHIFT;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("ABASE")
#pragma pop_macro("ASHIFT")
#pragma pop_macro("BASECOUNT")
#pragma pop_macro("CELLSBUSY")
#pragma pop_macro("CELLVALUE")
#pragma pop_macro("DEFAULT_CAPACITY")
#pragma pop_macro("DEFAULT_CONCURRENCY_LEVEL")
#pragma pop_macro("HASH_BITS")
#pragma pop_macro("LOAD_FACTOR")
#pragma pop_macro("MAXIMUM_CAPACITY")
#pragma pop_macro("MAX_ARRAY_SIZE")
#pragma pop_macro("MAX_RESIZERS")
#pragma pop_macro("MIN_TRANSFER_STRIDE")
#pragma pop_macro("MIN_TREEIFY_CAPACITY")
#pragma pop_macro("MOVED")
#pragma pop_macro("NCPU")
#pragma pop_macro("RESERVED")
#pragma pop_macro("RESIZE_STAMP_BITS")
#pragma pop_macro("RESIZE_STAMP_SHIFT")
#pragma pop_macro("SIZECTL")
#pragma pop_macro("TRANSFERINDEX")
#pragma pop_macro("TREEBIN")
#pragma pop_macro("TREEIFY_THRESHOLD")
#pragma pop_macro("U")
#pragma pop_macro("UNTREEIFY_THRESHOLD")

#endif // _java_util_concurrent_ConcurrentHashMap_h_