#ifndef _java_util_concurrent_ConcurrentHashMap$EntrySetView_h_
#define _java_util_concurrent_ConcurrentHashMap$EntrySetView_h_
//$ class java.util.concurrent.ConcurrentHashMap$EntrySetView
//$ extends java.util.concurrent.ConcurrentHashMap$CollectionView
//$ implements java.util.Set

#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Map$Entry;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
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

class $export ConcurrentHashMap$EntrySetView : public ::java::util::concurrent::ConcurrentHashMap$CollectionView, public ::java::util::Set {
	$class(ConcurrentHashMap$EntrySetView, $PRELOAD | $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$CollectionView, ::java::util::Set)
public:
	ConcurrentHashMap$EntrySetView();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void finalize() override;
	void init$(::java::util::concurrent::ConcurrentHashMap* map);
	bool add(::java::util::Map$Entry* e);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* generator) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1F364C905893293D;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$EntrySetView_h_