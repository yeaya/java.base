#ifndef _java_util_WeakHashMap_h_
#define _java_util_WeakHashMap_h_
//$ class java.util.WeakHashMap
//$ extends java.util.AbstractMap

#include <java/lang/Array.h>
#include <java/util/AbstractMap.h>

#pragma push_macro("DEFAULT_INITIAL_CAPACITY")
#undef DEFAULT_INITIAL_CAPACITY
#pragma push_macro("DEFAULT_LOAD_FACTOR")
#undef DEFAULT_LOAD_FACTOR
#pragma push_macro("MAXIMUM_CAPACITY")
#undef MAXIMUM_CAPACITY
#pragma push_macro("NULL_KEY")
#undef NULL_KEY

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
		class WeakHashMap$Entry;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
		}
	}
}

namespace java {
	namespace util {

class $import WeakHashMap : public ::java::util::AbstractMap {
	$class(WeakHashMap, $PRELOAD, ::java::util::AbstractMap)
public:
	WeakHashMap();
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Map* m);
	virtual void clear() override;
	virtual bool containsKey(Object$* key) override;
	bool containsNullValue();
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	void expungeStaleEntries();
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual ::java::util::WeakHashMap$Entry* getEntry(Object$* key);
	$Array<::java::util::WeakHashMap$Entry>* getTable();
	int32_t hash(Object$* k);
	static int32_t indexFor(int32_t h, int32_t length);
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	static $Object* maskNull(Object$* key);
	bool matchesKey(::java::util::WeakHashMap$Entry* e, Object$* key);
	$Array<::java::util::WeakHashMap$Entry>* newTable(int32_t n);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	using ::java::util::AbstractMap::remove;
	virtual $Object* remove(Object$* key) override;
	virtual bool removeMapping(Object$* o);
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual void resize(int32_t newCapacity);
	virtual int32_t size() override;
	void transfer($Array<::java::util::WeakHashMap$Entry>* src, $Array<::java::util::WeakHashMap$Entry>* dest);
	static $Object* unmaskNull(Object$* key);
	virtual ::java::util::Collection* values() override;
	static const int32_t DEFAULT_INITIAL_CAPACITY = 16;
	static const int32_t MAXIMUM_CAPACITY = 0x40000000; // 1 << 30
	static float DEFAULT_LOAD_FACTOR;
	$Array<::java::util::WeakHashMap$Entry>* table = nullptr;
	int32_t size$ = 0;
	int32_t threshold = 0;
	float loadFactor = 0.0;
	::java::lang::ref::ReferenceQueue* queue = nullptr;
	int32_t modCount = 0;
	static $Object* NULL_KEY;
	::java::util::Set* entrySet$ = nullptr;
};

	} // util
} // java

#pragma pop_macro("DEFAULT_INITIAL_CAPACITY")
#pragma pop_macro("DEFAULT_LOAD_FACTOR")
#pragma pop_macro("MAXIMUM_CAPACITY")
#pragma pop_macro("NULL_KEY")

#endif // _java_util_WeakHashMap_h_