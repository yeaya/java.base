#ifndef _java_util_Vector$1_h_
#define _java_util_Vector$1_h_
//$ class java.util.Vector$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace util {

class Vector$1 : public ::java::util::Enumeration {
	$class(Vector$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Vector$1();
	void init$(::java::util::Vector* this$0);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Vector* this$0 = nullptr;
	int32_t count = 0;
};

	} // util
} // java

#endif // _java_util_Vector$1_h_