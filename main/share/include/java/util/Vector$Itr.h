#ifndef _java_util_Vector$Itr_h_
#define _java_util_Vector$Itr_h_
//$ class java.util.Vector$Itr
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Vector;
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

class $import Vector$Itr : public ::java::util::Iterator {
	$class(Vector$Itr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Vector$Itr();
	void init$(::java::util::Vector* this$0);
	void checkForComodification();
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Vector* this$0 = nullptr;
	int32_t cursor = 0;
	int32_t lastRet = 0;
	int32_t expectedModCount = 0;
};

	} // util
} // java

#endif // _java_util_Vector$Itr_h_