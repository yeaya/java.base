#ifndef _java_util_AbstractMap$1_h_
#define _java_util_AbstractMap$1_h_
//$ class java.util.AbstractMap$1
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class AbstractMap;
		class Iterator;
	}
}

namespace java {
	namespace util {

class AbstractMap$1 : public ::java::util::AbstractSet {
	$class(AbstractMap$1, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	AbstractMap$1();
	void init$(::java::util::AbstractMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* k) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::java::util::AbstractMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractMap$1_h_