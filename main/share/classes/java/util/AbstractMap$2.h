#ifndef _java_util_AbstractMap$2_h_
#define _java_util_AbstractMap$2_h_
//$ class java.util.AbstractMap$2
//$ extends java.util.AbstractCollection

#include <java/util/AbstractCollection.h>

namespace java {
	namespace util {
		class AbstractMap;
		class Iterator;
	}
}

namespace java {
	namespace util {

class AbstractMap$2 : public ::java::util::AbstractCollection {
	$class(AbstractMap$2, $NO_CLASS_INIT, ::java::util::AbstractCollection)
public:
	AbstractMap$2();
	void init$(::java::util::AbstractMap* this$0);
	virtual void clear() override;
	virtual bool contains(Object$* v) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractCollection::toArray;
	::java::util::AbstractMap* this$0 = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractMap$2_h_