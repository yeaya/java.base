#ifndef _java_util_concurrent_CopyOnWriteArraySet_h_
#define _java_util_concurrent_CopyOnWriteArraySet_h_
//$ class java.util.concurrent.CopyOnWriteArraySet
//$ extends java.util.AbstractSet
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Set;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CopyOnWriteArrayList;
		}
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
		namespace concurrent {

class $export CopyOnWriteArraySet : public ::java::util::AbstractSet, public ::java::io::Serializable {
	$class(CopyOnWriteArraySet, $NO_CLASS_INIT, ::java::util::AbstractSet, ::java::io::Serializable)
public:
	CopyOnWriteArraySet();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	static int32_t compareSets($ObjectArray* snapshot, ::java::util::Set* set);
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x4BBDD092901569D7;
	::java::util::concurrent::CopyOnWriteArrayList* al = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_CopyOnWriteArraySet_h_