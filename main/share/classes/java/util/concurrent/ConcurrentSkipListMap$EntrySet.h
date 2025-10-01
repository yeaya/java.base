#ifndef _java_util_concurrent_ConcurrentSkipListMap$EntrySet_h_
#define _java_util_concurrent_ConcurrentSkipListMap$EntrySet_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$EntrySet
//$ extends java.util.AbstractSet

#include <java/lang/Array.h>
#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentNavigableMap;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ConcurrentSkipListMap$EntrySet : public ::java::util::AbstractSet {
	$class(ConcurrentSkipListMap$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	ConcurrentSkipListMap$EntrySet();
	void init$(::java::util::concurrent::ConcurrentNavigableMap* map);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::concurrent::ConcurrentNavigableMap* m = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$EntrySet_h_