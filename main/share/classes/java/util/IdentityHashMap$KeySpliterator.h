#ifndef _java_util_IdentityHashMap$KeySpliterator_h_
#define _java_util_IdentityHashMap$KeySpliterator_h_
//$ class java.util.IdentityHashMap$KeySpliterator
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

class $export IdentityHashMap$KeySpliterator : public ::java::util::IdentityHashMap$IdentityHashMapSpliterator, public ::java::util::Spliterator {
	$class(IdentityHashMap$KeySpliterator, $NO_CLASS_INIT, ::java::util::IdentityHashMap$IdentityHashMapSpliterator, ::java::util::Spliterator)
public:
	IdentityHashMap$KeySpliterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::IdentityHashMap* map, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_IdentityHashMap$KeySpliterator_h_