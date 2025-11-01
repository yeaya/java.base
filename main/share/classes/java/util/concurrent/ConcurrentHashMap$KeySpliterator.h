#ifndef _java_util_concurrent_ConcurrentHashMap$KeySpliterator_h_
#define _java_util_concurrent_ConcurrentHashMap$KeySpliterator_h_
//$ class java.util.concurrent.ConcurrentHashMap$KeySpliterator
//$ extends java.util.concurrent.ConcurrentHashMap$Traverser
//$ implements java.util.Spliterator

#include <java/lang/Array.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap$Traverser.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap$Node;
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

class $export ConcurrentHashMap$KeySpliterator : public ::java::util::concurrent::ConcurrentHashMap$Traverser, public ::java::util::Spliterator {
	$class(ConcurrentHashMap$KeySpliterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentHashMap$Traverser, ::java::util::Spliterator)
public:
	ConcurrentHashMap$KeySpliterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<::java::util::concurrent::ConcurrentHashMap$Node>* tab, int32_t size, int32_t index, int32_t limit, int64_t est);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	int64_t est = 0;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentHashMap$KeySpliterator_h_