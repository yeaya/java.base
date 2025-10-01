#ifndef _java_util_concurrent_ConcurrentSkipListMap$Values_h_
#define _java_util_concurrent_ConcurrentSkipListMap$Values_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$Values
//$ extends java.util.AbstractCollection

#include <java/lang/Array.h>
#include <java/util/AbstractCollection.h>

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

class $import ConcurrentSkipListMap$Values : public ::java::util::AbstractCollection {
	$class(ConcurrentSkipListMap$Values, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	ConcurrentSkipListMap$Values();
	void init$(::java::util::concurrent::ConcurrentNavigableMap* map);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::AbstractCollection::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	::java::util::concurrent::ConcurrentNavigableMap* m = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$Values_h_