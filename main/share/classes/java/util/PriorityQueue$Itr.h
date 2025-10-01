#ifndef _java_util_PriorityQueue$Itr_h_
#define _java_util_PriorityQueue$Itr_h_
//$ class java.util.PriorityQueue$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class ArrayDeque;
		class PriorityQueue;
	}
}

namespace java {
	namespace util {

class PriorityQueue$Itr : public ::java::util::Iterator {
	$class(PriorityQueue$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	PriorityQueue$Itr();
	void init$(::java::util::PriorityQueue* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::PriorityQueue* this$0 = nullptr;
	int32_t cursor = 0;
	int32_t lastRet = 0;
	::java::util::ArrayDeque* forgetMeNot = nullptr;
	$Object* lastRetElt = nullptr;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_PriorityQueue$Itr_h_