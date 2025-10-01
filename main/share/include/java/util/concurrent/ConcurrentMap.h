#ifndef _java_util_concurrent_ConcurrentMap_h_
#define _java_util_concurrent_ConcurrentMap_h_
//$ interface java.util.concurrent.ConcurrentMap
//$ extends java.util.Map

#include <java/util/Map.h>

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
		namespace concurrent {

class $import ConcurrentMap : public ::java::util::Map {
	$interface(ConcurrentMap, $PRELOAD | $NO_CLASS_INIT, ::java::util::Map)
public:
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	void lambda$replaceAll$0(::java::util::function::BiFunction* function, Object$* k, Object$* v);
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override {return nullptr;}
	using ::java::util::Map::remove;
	virtual bool remove(Object$* key, Object$* value) override {return false;}
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override {return false;}
	virtual $Object* replace(Object$* key, Object$* value) override {return nullptr;}
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentMap_h_