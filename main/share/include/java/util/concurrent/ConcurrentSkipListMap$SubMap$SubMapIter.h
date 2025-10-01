#ifndef _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapIter_h_
#define _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapIter_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$SubMap$SubMapIter
//$ extends java.util.Iterator
//$ implements java.util.Spliterator

#include <java/util/Iterator.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentSkipListMap$Node;
			class ConcurrentSkipListMap$SubMap;
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

class $import ConcurrentSkipListMap$SubMap$SubMapIter : public ::java::util::Iterator, public ::java::util::Spliterator {
	$class(ConcurrentSkipListMap$SubMap$SubMapIter, $NO_CLASS_INIT, ::java::util::Iterator, ::java::util::Spliterator)
public:
	ConcurrentSkipListMap$SubMap$SubMapIter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0);
	void advance();
	void ascend();
	void descend();
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual void remove() override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::concurrent::ConcurrentSkipListMap$SubMap* this$0 = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Node* lastReturned = nullptr;
	::java::util::concurrent::ConcurrentSkipListMap$Node* next$ = nullptr;
	$Object* nextValue = nullptr;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$SubMap$SubMapIter_h_