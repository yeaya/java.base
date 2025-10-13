#ifndef _java_util_Hashtable_h_
#define _java_util_Hashtable_h_
//$ class java.util.Hashtable
//$ extends java.util.Dictionary
//$ implements java.util.Map,java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Integer.h>
#include <java/util/Dictionary.h>
#include <java/util/Map.h>

#pragma push_macro("ENTRIES")
#undef ENTRIES
#pragma push_macro("KEYS")
#undef KEYS
#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("VALUES")
#undef VALUES

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Hashtable$Entry;
		class Iterator;
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

class $export Hashtable : public ::java::util::Dictionary, public ::java::util::Map, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(Hashtable, $PRELOAD | $NO_CLASS_INIT, ::java::util::Dictionary, ::java::util::Map, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	Hashtable();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Map* t);
	void init$(::java::lang::Void* dummy);
	void addEntry(int32_t hash, Object$* key, Object$* value, int32_t index);
	virtual void clear() override;
	virtual $Object* clone() override;
	::java::util::Hashtable* cloneHashtable();
	virtual $Object* compute(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* computeIfAbsent(Object$* key, ::java::util::function::Function* mappingFunction) override;
	virtual $Object* computeIfPresent(Object$* key, ::java::util::function::BiFunction* remappingFunction) override;
	virtual bool contains(Object$* value);
	virtual bool containsKey(Object$* key) override;
	virtual bool containsValue(Object$* value) override;
	void defaultWriteHashtable(::java::io::ObjectOutputStream* s, int32_t length, float loadFactor);
	virtual ::java::util::Enumeration* elements() override;
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::BiConsumer* action) override;
	virtual $Object* get(Object$* key) override;
	::java::util::Enumeration* getEnumeration(int32_t type);
	::java::util::Iterator* getIterator(int32_t type);
	virtual $Object* getOrDefault(Object$* key, Object$* defaultValue) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Set* keySet() override;
	virtual ::java::util::Enumeration* keys() override;
	virtual $Object* merge(Object$* key, Object$* value, ::java::util::function::BiFunction* remappingFunction) override;
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* t) override;
	virtual $Object* putIfAbsent(Object$* key, Object$* value) override;
	virtual void readHashtable(::java::io::ObjectInputStream* s);
	void readObject(::java::io::ObjectInputStream* s);
	void reconstitutionPut($Array<::java::util::Hashtable$Entry>* tab, Object$* key, Object$* value);
	virtual void rehash();
	virtual $Object* remove(Object$* key) override;
	virtual bool remove(Object$* key, Object$* value) override;
	virtual bool replace(Object$* key, Object$* oldValue, Object$* newValue) override;
	virtual $Object* replace(Object$* key, Object$* value) override;
	virtual void replaceAll(::java::util::function::BiFunction* function) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	virtual ::java::util::Collection* values() override;
	virtual void writeHashtable(::java::io::ObjectOutputStream* s);
	void writeObject(::java::io::ObjectOutputStream* s);
	$Array<::java::util::Hashtable$Entry>* table = nullptr;
	int32_t count = 0;
	int32_t threshold = 0;
	float loadFactor = 0.0;
	int32_t modCount = 0;
	static const int64_t serialVersionUID = (int64_t)0x13BB0F25214AE4B8;
	static const int32_t MAX_ARRAY_SIZE = 0x7FFFFFF7; // ::java::lang::Integer::MAX_VALUE - 8
	$volatile(::java::util::Set*) keySet$ = nullptr;
	$volatile(::java::util::Set*) entrySet$ = nullptr;
	$volatile(::java::util::Collection*) values$ = nullptr;
	static const int32_t KEYS = 0;
	static const int32_t VALUES = 1;
	static const int32_t ENTRIES = 2;
};

	} // util
} // java

#pragma pop_macro("ENTRIES")
#pragma pop_macro("KEYS")
#pragma pop_macro("MAX_ARRAY_SIZE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("VALUES")

#endif // _java_util_Hashtable_h_