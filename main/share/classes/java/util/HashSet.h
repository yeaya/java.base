#ifndef _java_util_HashSet_h_
#define _java_util_HashSet_h_
//$ class java.util.HashSet
//$ extends java.util.AbstractSet
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/util/AbstractSet.h>

#pragma push_macro("PRESENT")
#undef PRESENT

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class Iterator;
		class Spliterator;
	}
}

namespace java {
	namespace util {

class $export HashSet : public ::java::util::AbstractSet, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(HashSet, $PRELOAD, ::java::util::AbstractSet, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	HashSet();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(int32_t initialCapacity);
	void init$(int32_t initialCapacity, float loadFactor, bool dummy);
	virtual bool add(Object$* e) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xBA44859596B8B734;
	::java::util::HashMap* map = nullptr;
	static $Object* PRESENT;
};

	} // util
} // java

#pragma pop_macro("PRESENT")

#endif // _java_util_HashSet_h_