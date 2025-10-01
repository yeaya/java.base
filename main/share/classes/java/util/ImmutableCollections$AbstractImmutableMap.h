#ifndef _java_util_ImmutableCollections$AbstractImmutableMap_h_
#define _java_util_ImmutableCollections$AbstractImmutableMap_h_
//$ class java.util.ImmutableCollections$AbstractImmutableMap
//$ extends java.util.AbstractMap
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/AbstractMap.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class Function;
		}
	}
}

namespace java {
	namespace util {

class ImmutableCollections$AbstractImmutableMap : public ::java::util::AbstractMap, public ::java::io::Serializable {
	$class(ImmutableCollections$AbstractImmutableMap, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractMap, ::java::io::Serializable)
public:
	ImmutableCollections$AbstractImmutableMap();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void clear() override;
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* rf) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mf) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* rf) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* rf) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual void replaceAll(::java::util::function::BiFunction* f) override;
	virtual $String* toString() override;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$AbstractImmutableMap_h_