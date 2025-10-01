#ifndef _java_util_concurrent_ConcurrentNavigableMap_h_
#define _java_util_concurrent_ConcurrentNavigableMap_h_
//$ interface java.util.concurrent.ConcurrentNavigableMap
//$ extends java.util.concurrent.ConcurrentMap,java.util.NavigableMap

#include <java/util/NavigableMap.h>
#include <java/util/concurrent/ConcurrentMap.h>

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentNavigableMap : public ::java::util::concurrent::ConcurrentMap, public ::java::util::NavigableMap {
	$interface(ConcurrentNavigableMap, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentMap, ::java::util::NavigableMap)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void clear() override {}
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override {return false;}
	virtual bool containsValue(Object$* value) override {return false;}
	virtual ::java::util::NavigableSet* descendingKeySet() override {return nullptr;}
	virtual ::java::util::NavigableMap* descendingMap() override {return nullptr;}
	virtual ::java::util::Set* entrySet() override {return nullptr;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override {return nullptr;}
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	virtual ::java::util::NavigableMap* headMap(Object$* toKey, bool inclusive) override {return nullptr;}
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override {return nullptr;}
	virtual bool isEmpty() override {return false;}
	virtual ::java::util::Set* keySet() override {return nullptr;}
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual ::java::util::NavigableSet* navigableKeySet() override {return nullptr;}
	virtual $Object* put(Object$* key, Object$* value) override {return nullptr;}
	virtual void putAll(::java::util::Map* m) override {}
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override {return nullptr;}
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override {return 0;}
	virtual ::java::util::NavigableMap* subMap(Object$* fromKey, bool fromInclusive, Object$* toKey, bool toInclusive) override {return nullptr;}
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override {return nullptr;}
	virtual ::java::util::NavigableMap* tailMap(Object$* fromKey, bool inclusive) override {return nullptr;}
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override {return nullptr;}
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentNavigableMap_h_