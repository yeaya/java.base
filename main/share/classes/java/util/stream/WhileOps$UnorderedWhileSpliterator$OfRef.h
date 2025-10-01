#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator
//$ implements java.util.function.Consumer

#include <java/util/function/Consumer.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
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
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfRef : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator, public ::java::util::function::Consumer {
	$class(WhileOps$UnorderedWhileSpliterator$OfRef, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator, ::java::util::function::Consumer)
public:
	WhileOps$UnorderedWhileSpliterator$OfRef();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator* s, bool noSplitting, ::java::util::function::Predicate* p);
	void init$(::java::util::Spliterator* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef* parent);
	virtual void accept(Object$* t) override;
	virtual $String* toString() override;
	::java::util::function::Predicate* p = nullptr;
	$Object* t = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef_h_