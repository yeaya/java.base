#ifndef _java_util_HashMap$ValueSpliterator_h_
#define _java_util_HashMap$ValueSpliterator_h_
//$ class java.util.HashMap$ValueSpliterator
//$ extends java.util.HashMap$HashMapSpliterator
//$ implements java.util.Spliterator

#include <java/util/HashMap$HashMapSpliterator.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class HashMap;
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

class $import HashMap$ValueSpliterator : public ::java::util::HashMap$HashMapSpliterator, public ::java::util::Spliterator {
	$class(HashMap$ValueSpliterator, $NO_CLASS_INIT, ::java::util::HashMap$HashMapSpliterator, ::java::util::Spliterator)
public:
	HashMap$ValueSpliterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount);
	virtual int32_t characteristics() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

	} // util
} // java

#endif // _java_util_HashMap$ValueSpliterator_h_