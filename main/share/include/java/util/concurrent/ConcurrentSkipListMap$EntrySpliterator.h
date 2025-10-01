#ifndef _java_util_concurrent_ConcurrentSkipListMap$EntrySpliterator_h_
#define _java_util_concurrent_ConcurrentSkipListMap$EntrySpliterator_h_
//$ class java.util.concurrent.ConcurrentSkipListMap$EntrySpliterator
//$ extends java.util.concurrent.ConcurrentSkipListMap$CSLMSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentSkipListMap$CSLMSpliterator.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}
namespace java {
	namespace util {
		class Comparator;
		class Map$Entry;
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

class $import ConcurrentSkipListMap$EntrySpliterator : public ::java::util::concurrent::ConcurrentSkipListMap$CSLMSpliterator, public ::java::util::Spliterator {
	$class(ConcurrentSkipListMap$EntrySpliterator, $NO_CLASS_INIT, ::java::util::concurrent::ConcurrentSkipListMap$CSLMSpliterator, ::java::util::Spliterator)
public:
	ConcurrentSkipListMap$EntrySpliterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Comparator* comparator, ::java::util::concurrent::ConcurrentSkipListMap$Index* row, ::java::util::concurrent::ConcurrentSkipListMap$Node* origin, Object$* fence, int64_t est);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	static int32_t lambda$getComparator$d5a01062$1(::java::util::Map$Entry* e1, ::java::util::Map$Entry* e2);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // concurrent
	} // util
} // java

#endif // _java_util_concurrent_ConcurrentSkipListMap$EntrySpliterator_h_