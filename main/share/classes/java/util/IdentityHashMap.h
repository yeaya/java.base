#ifndef _java_util_IdentityHashMap_h_
#define _java_util_IdentityHashMap_h_
//$ class java.util.IdentityHashMap
//$ extends java.util.AbstractMap
//$ implements java.io.Serializable,java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractMap.h>

#pragma push_macro("DEFAULT_CAPACITY")
#undef DEFAULT_CAPACITY
#pragma push_macro("MAXIMUM_CAPACITY")
#undef MAXIMUM_CAPACITY
#pragma push_macro("MINIMUM_CAPACITY")
#undef MINIMUM_CAPACITY
#pragma push_macro("NULL_KEY")
#undef NULL_KEY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
		}
	}
}

namespace java {
	namespace util {

class $export IdentityHashMap : public ::java::util::AbstractMap, public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(IdentityHashMap, 0, ::java::util::AbstractMap, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	IdentityHashMap();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$();
	void init$(int32_t expectedMaxSize);
	void init$(::java::util::Map* m);
	static int32_t capacity(int32_t expectedMaxSize);
	virtual void clear() override;
	virtual $Object* clone() override;
	void closeDeletion(int32_t d);
	virtual bool containsKey(Object$* key) override;
	bool containsMapping(Object$* key, Object$* value);
	virtual bool containsValue(Object$* value) override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	static int32_t hash(Object$* x, int32_t length);
	virtual int32_t hashCode() override;
	void init(int32_t initCapacity);
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	static $Object* maskNull(Object$* key);
	static int32_t nextKeyIndex(int32_t i, int32_t len);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	void putForCreate(Object$* key, Object$* value);
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::util::AbstractMap::remove;
	virtual $Object* remove(Object$* key) override;
	bool removeMapping(Object$* key, Object$* value);
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	bool resize(int32_t newCapacity);
	virtual int32_t size() override;
	virtual $String* toString() override;
	static $Object* unmaskNull(Object$* key);
	virtual ::java::util::Collection* values() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t DEFAULT_CAPACITY = 32;
	static const int32_t MINIMUM_CAPACITY = 4;
	static const int32_t MAXIMUM_CAPACITY = 0x20000000; // 1 << 29
	$ObjectArray* table = nullptr;
	int32_t size$ = 0;
	int32_t modCount = 0;
	static $Object* NULL_KEY;
	::java::util::Set* entrySet$ = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x71A2650133F2E980;
};

	} // util
} // java

#pragma pop_macro("DEFAULT_CAPACITY")
#pragma pop_macro("MAXIMUM_CAPACITY")
#pragma pop_macro("MINIMUM_CAPACITY")
#pragma pop_macro("NULL_KEY")

#endif // _java_util_IdentityHashMap_h_