#ifndef _java_util_WeakHashMap$EntrySpliterator_h_
#define _java_util_WeakHashMap$EntrySpliterator_h_
//$ class java.util.WeakHashMap$EntrySpliterator
//$ extends java.util.WeakHashMap$WeakHashMapSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/WeakHashMap$WeakHashMapSpliterator.h>

namespace java {
	namespace util {
		class WeakHashMap;
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

class $import WeakHashMap$EntrySpliterator : public ::java::util::WeakHashMap$WeakHashMapSpliterator, public ::java::util::Spliterator {
	$class(WeakHashMap$EntrySpliterator, $NO_CLASS_INIT, ::java::util::WeakHashMap$WeakHashMapSpliterator, ::java::util::Spliterator)
public:
	WeakHashMap$EntrySpliterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_WeakHashMap$EntrySpliterator_h_