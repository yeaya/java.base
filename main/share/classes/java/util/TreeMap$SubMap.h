#ifndef _java_util_TreeMap$SubMap_h_
#define _java_util_TreeMap$SubMap_h_
//$ class java.util.TreeMap$SubMap
//$ extends java.util.AbstractMap
//$ implements java.util.SortedMap,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractMap.h>
#include <java/util/SortedMap.h>

namespace java {
	namespace util {
		class Comparator;
		class Set;
		class TreeMap;
	}
}

namespace java {
	namespace util {

class TreeMap$SubMap : public ::java::util::AbstractMap, public ::java::util::SortedMap, public ::java::io::Serializable {
	$class(TreeMap$SubMap, $NO_CLASS_INIT, ::java::util::AbstractMap, ::java::util::SortedMap, ::java::io::Serializable)
public:
	TreeMap$SubMap();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::TreeMap* this$0);
	virtual ::java::util::Comparator* comparator() override;
	virtual ::java::util::Set* entrySet() override;
	virtual $Object* firstKey() override;
	virtual ::java::util::SortedMap* headMap(Object$* toKey) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* lastKey() override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	$Object* readResolve();
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
	::java::util::TreeMap* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xA5818343A213C27F;
	bool fromStart = false;
	bool toEnd = false;
	$Object* fromKey = nullptr;
	$Object* toKey = nullptr;
};

	} // util
} // java

#endif // _java_util_TreeMap$SubMap_h_