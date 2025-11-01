#ifndef _java_util_Collections$SetFromMap_h_
#define _java_util_Collections$SetFromMap_h_
//$ class java.util.Collections$SetFromMap
//$ extends java.util.AbstractSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Map;
		class Set;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {

class Collections$SetFromMap : public ::java::util::AbstractSet, public ::java::io::Serializable {
	$class(Collections$SetFromMap, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractSet, ::java::io::Serializable)
public:
	Collections$SetFromMap();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::Map* map);
	virtual bool add(Object$* e) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::java::util::Map* m = nullptr;
	::java::util::Set* s = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2210B25045F21FC4;
};

	} // util
} // java

#endif // _java_util_Collections$SetFromMap_h_