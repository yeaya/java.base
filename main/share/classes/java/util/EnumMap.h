#ifndef _java_util_EnumMap_h_
#define _java_util_EnumMap_h_
//$ class java.util.EnumMap
//$ extends java.util.AbstractMap
//$ implements java.io.Serializable,java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractMap.h>

#pragma push_macro("NULL")
#undef NULL

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Enum;
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

class $export EnumMap : public ::java::util::AbstractMap, public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(EnumMap, $PRELOAD, ::java::util::AbstractMap, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	EnumMap();
	virtual void finalize() override;
	void init$($Class* keyType);
	void init$(::java::util::EnumMap* m);
	void init$(::java::util::Map* m);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsKey(Object$* key) override;
	bool containsMapping(Object$* key, Object$* value);
	virtual bool containsValue(Object$* value) override;
	int32_t entryHashCode(int32_t index);
	virtual ::java::util::Set* entrySet() override;
	virtual bool equals(Object$* o) override;
	bool equals(::java::util::EnumMap* em);
	virtual $Object* get(Object$* key) override;
	static $Array<::java::lang::Enum>* getKeyUniverse($Class* keyType);
	virtual int32_t hashCode() override;
	bool isValidKey(Object$* key);
	virtual ::java::util::Set* keySet() override;
	$Object* maskNull(Object$* value);
	virtual $Object* put(::java::lang::Enum* key, Object$* value);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putAll(::java::util::Map* m) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::util::AbstractMap::remove;
	virtual $Object* remove(Object$* key) override;
	bool removeMapping(Object$* key, Object$* value);
	virtual int32_t size() override;
	virtual $String* toString() override;
	void typeCheck(::java::lang::Enum* key);
	$Object* unmaskNull(Object$* value);
	virtual ::java::util::Collection* values() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	$Class* keyType = nullptr;
	$Array<::java::lang::Enum>* keyUniverse = nullptr;
	$ObjectArray* vals = nullptr;
	int32_t size$ = 0;
	static $Object* NULL;
	::java::util::Set* entrySet$ = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x065D7DF7BE907CA1;
};

	} // util
} // java

#pragma pop_macro("NULL")

#endif // _java_util_EnumMap_h_