#ifndef _java_util_Collections$CopiesList_h_
#define _java_util_Collections$CopiesList_h_
//$ class java.util.Collections$CopiesList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace util {
		class List;
		class Spliterator;
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

class Collections$CopiesList : public ::java::util::AbstractList, public ::java::util::RandomAccess, public ::java::io::Serializable {
	$class(Collections$CopiesList, 0, ::java::util::AbstractList, ::java::util::RandomAccess, ::java::io::Serializable)
public:
	Collections$CopiesList();
	using ::java::util::AbstractList::addAll;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t n, Object$* e);
	virtual bool contains(Object$* obj) override;
	virtual bool equals(Object$* o) override;
	virtual $Object* get(int32_t index) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	$Object* lambda$stream$0(int32_t i);
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	void readObject(::java::io::ObjectInputStream* ois);
	using ::java::util::AbstractList::remove;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x26033C45B17003F8;
	int32_t n = 0;
	$Object* element = nullptr;
};

	} // util
} // java

#endif // _java_util_Collections$CopiesList_h_