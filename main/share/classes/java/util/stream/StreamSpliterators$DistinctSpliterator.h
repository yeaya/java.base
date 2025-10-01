#ifndef _java_util_stream_StreamSpliterators$DistinctSpliterator_h_
#define _java_util_stream_StreamSpliterators$DistinctSpliterator_h_
//$ class java.util.stream.StreamSpliterators$DistinctSpliterator
//$ extends java.util.Spliterator
//$ implements java.util.function.Consumer

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>

#pragma push_macro("NULL_VALUE")
#undef NULL_VALUE

namespace java {
	namespace util {
		class Comparator;
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
		namespace stream {

class StreamSpliterators$DistinctSpliterator : public ::java::util::Spliterator, public ::java::util::function::Consumer {
	$class(StreamSpliterators$DistinctSpliterator, 0, ::java::util::Spliterator, ::java::util::function::Consumer)
public:
	StreamSpliterators$DistinctSpliterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator* s);
	void init$(::java::util::Spliterator* s, ::java::util::concurrent::ConcurrentHashMap* seen);
	virtual void accept(Object$* t) override;
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	void lambda$forEachRemaining$0(::java::util::function::Consumer* action, Object$* t);
	$Object* mapNull(Object$* t);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	static $Object* NULL_VALUE;
	::java::util::Spliterator* s = nullptr;
	::java::util::concurrent::ConcurrentHashMap* seen = nullptr;
	$Object* tmpSlot = nullptr;
};

		} // stream
	} // util
} // java

#pragma pop_macro("NULL_VALUE")

#endif // _java_util_stream_StreamSpliterators$DistinctSpliterator_h_