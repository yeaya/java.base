#ifndef _java_util_concurrent_ConcurrentHashMap$KeySetView_h_
#define _java_util_concurrent_ConcurrentHashMap$KeySetView_h_
//$ class java.util.concurrent.ConcurrentHashMap$KeySetView
//$ extends java.util.concurrent.ConcurrentHashMap$CollectionView
//$ implements java.util.Set

#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap$CollectionView.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
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
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$KeySetView : public ::java::util::concurrent::ConcurrentHashMap$CollectionView, public ::java::util::Set {
	$class(ConcurrentHashMap$KeySetView, $PRELOAD | $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$CollectionView, ::java::util::Set)
public:
	ConcurrentHashMap$KeySetView();
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void finalize() override;
	void init$(::java::util::concurrent::ConcurrentHashMap* map, Object$* value);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool contains(Object$* o) override;
	virtual bool equals(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::concurrent::ConcurrentHashMap* getMap() override;
	virtual $Object* getMappedValue();
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
	static const int64_t serialVersionUID = (int64_t)0x6499DE129D87293D;
	$Object* value = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$KeySetView_h_