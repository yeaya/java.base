#ifndef _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_h_
#define _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_h_
//$ class java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet
//$ extends java.util.Collections$UnmodifiableSet

#include <java/lang/Array.h>
#include <java/util/Collections$UnmodifiableSet.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Map$Entry;
		class Set;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
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

class Collections$UnmodifiableMap$UnmodifiableEntrySet : public ::java::util::Collections$UnmodifiableSet {
	$class(Collections$UnmodifiableMap$UnmodifiableEntrySet, $NO_CLASS_INIT, ::java::util::Collections$UnmodifiableSet)
public:
	Collections$UnmodifiableMap$UnmodifiableEntrySet();
	void init$(::java::util::Set* s);
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* coll) override;
	static ::java::util::function::Consumer* entryConsumer(::java::util::function::Consumer* action);
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	static void lambda$entryConsumer$0(::java::util::function::Consumer* action, ::java::util::Map$Entry* e);
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	using ::java::util::Collections$UnmodifiableSet::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	static const int64_t serialVersionUID = (int64_t)0x6D0066A59F08EAB5;
};

	} // util
} // java

#endif // _java_util_Collections$UnmodifiableMap$UnmodifiableEntrySet_h_