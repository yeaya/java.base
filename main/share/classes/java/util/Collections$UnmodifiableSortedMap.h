#ifndef _java_util_Collections$UnmodifiableSortedMap_h_
#define _java_util_Collections$UnmodifiableSortedMap_h_
//$ class java.util.Collections$UnmodifiableSortedMap
//$ extends java.util.Collections$UnmodifiableMap
//$ implements java.util.SortedMap

#include <java/util/Collections$UnmodifiableMap.h>
#include <java/util/SortedMap.h>

namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {

class $export Collections$UnmodifiableSortedMap : public ::java::util::Collections$UnmodifiableMap, public ::java::util::SortedMap {
	$class(Collections$UnmodifiableSortedMap, $NO_CLASS_INIT, ::java::util::Collections$UnmodifiableMap, ::java::util::SortedMap)
public:
	Collections$UnmodifiableSortedMap();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* val) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* k, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::SortedMap* m);
	virtual ::java::util::Comparator* comparator() override;
	virtual $Object* firstKey() override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* lastKey() override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) override;
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x85C82928D3A5D70A;
	::java::util::SortedMap* sm = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableSortedMap_h_