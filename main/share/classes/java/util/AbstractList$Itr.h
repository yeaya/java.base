#ifndef _java_util_AbstractList$Itr_h_
#define _java_util_AbstractList$Itr_h_
//$ class java.util.AbstractList$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class AbstractList;
	}
}

namespace java {
	namespace util {

class AbstractList$Itr : public ::java::util::Iterator {
	$class(AbstractList$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	AbstractList$Itr();
	void init$(::java::util::AbstractList* this$0);
	void checkForComodification();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::AbstractList* this$0 = nullptr;
	int32_t cursor = 0;
	int32_t lastRet = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_AbstractList$Itr_h_