#ifndef _java_util_Collections$SynchronizedMap_h_
#define _java_util_Collections$SynchronizedMap_h_
//$ class java.util.Collections$SynchronizedMap
//$ extends java.util.Map
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Map.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
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

class $export Collections$SynchronizedMap : public ::java::util::Map, public ::java::io::Serializable {
	$class(Collections$SynchronizedMap, $NO_CLASS_INIT, ::java::util::Map, ::java::io::Serializable)
public:
	Collections$SynchronizedMap();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::Map* m);
	void init$(::java::util::Map* m, Object$* mutex);
	virtual void clear() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual $Object* getOrDefault(Object$* k, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* map) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x1B73F9094B4B397B;
	::java::util::Map* m = nullptr;
	$Object* mutex = nullptr;
	::java::util::Set* keySet$ = nullptr;
	::java::util::Set* entrySet$ = nullptr;
	::java::util::Collection* values$ = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$SynchronizedMap_h_