#ifndef _java_util_concurrent_ConcurrentSkipListMap$KeySpliterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$KeySpliterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$KeySpliterator
//$ extends java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap$Index;
			class ConcurrentSkipListMap$Node;
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

class $import ConcurrentSkipListMap$KeySpliterator : public ::java::util::concurrent::ConcurrentSkipListMap$CSLMSpliterator, public ::java::util::Spliterator {
	$class(ConcurrentSkipListMap$KeySpliterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$CSLMSpliterator, ::java::util::Spliterator)
public:
	ConcurrentSkipListMap$KeySpliterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Comparator* comparator, ::java::util::concurrent::ConcurrentSkipListMap$Index* row, ::java::util::concurrent::ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$KeySpliterator_h_