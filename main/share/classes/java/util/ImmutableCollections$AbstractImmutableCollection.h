#ifndef _java_util_ImmutableCollections$AbstractImmutableCollection_h_
#define _java_util_ImmutableCollections$AbstractImmutableCollection_h_
//$ class java.util.ImmutableCollections$AbstractImmutableCollection
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class Collection;
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

class ImmutableCollections$AbstractImmutableCollection : public ::java::util::AbstractCollection {
	$class(ImmutableCollections$AbstractImmutableCollection, $PRELOAD | $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	ImmutableCollections$AbstractImmutableCollection();
	void init$();
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void clear() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	using ::java::util::AbstractCollection::toArray;
};

	} // util
} // java

#endif // _java_util_ImmutableCollections$AbstractImmutableCollection_h_