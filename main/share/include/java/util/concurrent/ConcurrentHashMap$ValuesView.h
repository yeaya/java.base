#ifndef _java_util_concurrent_ConcurrentHashMap$ValuesView_h_
#define _java_util_concurrent_ConcurrentHashMap$ValuesView_h_
//$ class java.util.concurrent.ConcurrentHashMap$ValuesView
//$ extends java.util.concurrent.ConcurrentHashMap$CollectionView

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
			class Predicate;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import ConcurrentHashMap$ValuesView : public ::java::util::concurrent::ConcurrentHashMap$CollectionView {
	$class(ConcurrentHashMap$ValuesView, $PRELOAD | $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$CollectionView)
public:
	ConcurrentHashMap$ValuesView();
	void init$(::java::util::concurrent::ConcurrentHashMap* map);
	virtual bool add(Object$* e) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool contains(Object$* o) override;
	virtual void forEach(::java::util::function::Consumer* action) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool removeIf(::java::util::function::Predicate* filter) override;
	virtual ::java::util::Spliterator* spliterator() override;
	using ::java::util::concurrent::ConcurrentHashMap$CollectionView::toArray;
	static const int64_t serialVersionUID = (int64_t)0x1F364C905893293D;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$ValuesView_h_