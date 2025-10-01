#ifndef _java_util_AbstractMap$2$1_h_
#define _java_util_AbstractMap$2$1_h_
//$ class java.util.AbstractMap$2$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class AbstractMap$2;
	}
}

namespace java {
	namespace util {

class AbstractMap$2$1 : public ::java::util::Iterator {
	$class(AbstractMap$2$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	AbstractMap$2$1();
	void init$(::java::util::AbstractMap$2* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::AbstractMap$2* this$1 = nullptr;
	::java::util::Iterator* i = nullptr;
};

	} // util
} // java

#endif // _java_util_AbstractMap$2$1_h_