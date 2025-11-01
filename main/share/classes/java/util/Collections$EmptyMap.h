#ifndef _java_util_Collections$EmptyMap_h_
#define _java_util_Collections$EmptyMap_h_
//$ class java.util.Collections$EmptyMap
//$ extends java.util.AbstractMap
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractMap.h>

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

class Collections$EmptyMap : public ::java::util::AbstractMap, public ::java::io::Serializable {
	$class(Collections$EmptyMap, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractMap, ::java::io::Serializable)
public:
	Collections$EmptyMap();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
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
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	$Object* readResolve();
	using ::java::util::AbstractMap::remove;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x593614855ADCE7D0;
};

	} // util
} // java

#endif // _java_util_Collections$EmptyMap_h_