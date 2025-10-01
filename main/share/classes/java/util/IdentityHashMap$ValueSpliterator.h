#ifndef _java_util_IdentityHashMap$ValueSpliterator_h_
#define _java_util_IdentityHashMap$ValueSpliterator_h_
//$ class java.util.IdentityHashMap$ValueSpliterator
//$ extends java.util.IdentityHashMap$IdentityHashMapSpliterator
//$ implements java.util.Spliterator

#include <java/util/IdentityHashMap$IdentityHashMapSpliterator.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class IdentityHashMap;
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

class $export IdentityHashMap$ValueSpliterator : public ::java::util::IdentityHashMap$IdentityHashMapSpliterator, public ::java::util::Spliterator {
	$class(IdentityHashMap$ValueSpliterator, $NO_CLASS_INIT, ::java::util::IdentityHashMap$IdentityHashMapSpliterator, ::java::util::Spliterator)
public:
	IdentityHashMap$ValueSpliterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::IdentityHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$ValueSpliterator_h_