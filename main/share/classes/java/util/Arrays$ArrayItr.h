#ifndef _java_util_Arrays$ArrayItr_h_
#define _java_util_Arrays$ArrayItr_h_
//$ class java.util.Arrays$ArrayItr
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {

class Arrays$ArrayItr : public ::java::util::Iterator {
	$class(Arrays$ArrayItr, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Arrays$ArrayItr();
	void init$($ObjectArray* a);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	int32_t cursor = 0;
	$ObjectArray* a = nullptr;
};

	} // util
} // java

#endif // _java_util_Arrays$ArrayItr_h_