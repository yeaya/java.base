#ifndef _java_util_Collections$CheckedMap_h_
#define _java_util_Collections$CheckedMap_h_
//$ class java.util.Collections$CheckedMap
//$ extends java.util.Map
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Map.h>

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

class $import Collections$CheckedMap : public ::java::util::Map, public ::java::io::Serializable {
	$class(Collections$CheckedMap, $NO_CLASS_INIT, ::java::util::Map, ::java::io::Serializable)
public:
	Collections$CheckedMap();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::Map* m, $Class* keyType, $Class* valueType);
	$String* badKeyMsg(Object$* key);
	$String* badValueMsg(Object$* value);
	virtual void clear() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* v) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	$Object* lambda$computeIfAbsent$1(::java::util::function::Function* mappingFunction, Object$* k);
	$Object* lambda$merge$2(::java::util::function::BiFunction* remappingFunction, Object$* v1, Object$* v2);
	$Object* lambda$typeCheck$0(::java::util::function::BiFunction* func, Object$* k, Object$* v);
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	void typeCheck(Object$* key, Object$* value);
	::java::util::function::BiFunction* typeCheck(::java::util::function::BiFunction* func);
	virtual ::java::util::Collection* values() override;
	static const int64_t serialVersionUID = (int64_t)0x4FB2BCDF0D186368;
	::java::util::Map* m = nullptr;
	$Class* keyType = nullptr;
	$Class* valueType = nullptr;
	::java::util::Set* entrySet$ = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CheckedMap_h_