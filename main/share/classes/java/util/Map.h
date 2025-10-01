#ifndef _java_util_Map_h_
#define _java_util_Map_h_
//$ interface java.util.Map
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Collection;
		class Map$Entry;
		class Set;
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

class $export Map : public ::java::lang::Object {
	$interface(Map, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clear() {}
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction);
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction);
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction);
	virtual bool containsKey(Object$* key) {return false;}
	virtual bool containsValue(Object$* value) {return false;}
	static ::java::util::Map* copyOf(::java::util::Map* map);
	static ::java::util::Map$Entry* entry(Object$* k, Object$* v);
	virtual ::java::util::Set* entrySet() {return nullptr;}
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action);
	virtual $Object* get(Object$* key) {return nullptr;}
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue);
	virtual int32_t hashCode() override;
	virtual bool isEmpty() {return false;}
	virtual ::java::util::Set* keySet() {return nullptr;}
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction);
	static ::java::util::Map* of();
	static ::java::util::Map* of(Object$* k1, Object$* v1);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7, Object$* k8, Object$* v8);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7, Object$* k8, Object$* v8, Object$* k9, Object$* v9);
	static ::java::util::Map* of(Object$* k1, Object$* v1, Object$* k2, Object$* v2, Object$* k3, Object$* v3, Object$* k4, Object$* v4, Object$* k5, Object$* v5, Object$* k6, Object$* v6, Object$* k7, Object$* v7, Object$* k8, Object$* v8, Object$* k9, Object$* v9, Object$* k10, Object$* v10);
	static ::java::util::Map* ofEntries($Array<::java::util::Map$Entry>* entries);
	virtual $Object* put(Object$* key, Object$* value) {return nullptr;}
	virtual void putAll(::java::util::Map* m) {}
	virtual $Object* putIfAbsent(Object$* key, Object$* value);
	virtual $Object* remove(Object$* key) {return nullptr;}
	virtual bool remove(Object$* key, Object$* value);
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue);
	virtual $Object* replace(Object$* key, Object$* value);
	virtual void replaceAll(::java::util::function::BiFunction* function);
	virtual int32_t size() {return 0;}
	virtual ::java::util::Collection* values() {return nullptr;}
};

	} // util
} // java

#endif // _java_util_Map_h_