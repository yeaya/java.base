#ifndef _java_util_AbstractMap_h_
#define _java_util_AbstractMap_h_
//$ class java.util.AbstractMap
//$ extends java.util.Map

#include <java/util/Map.h>

namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}

namespace java {
	namespace util {

class $import AbstractMap : public ::java::util::Map {
	$class(AbstractMap, $PRELOAD | $NO_CLASS_INIT, ::java::util::Map)
public:
	AbstractMap();
	virtual ::java::util::Set* entrySet() override {return nullptr;}
	void init$();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	static bool eq(Object$* o1, Object$* o2);
	virtual bool equals(Object$* o) override;
	virtual $Object* get(Object$* key) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	using ::java::util::Map::remove;
	virtual $Object* remove(Object$* key) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	::java::util::Set* keySet$ = nullptr;
	::java::util::Collection* values$ = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractMap_h_