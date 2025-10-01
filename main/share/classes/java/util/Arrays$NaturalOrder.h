#ifndef _java_util_Arrays$NaturalOrder_h_
#define _java_util_Arrays$NaturalOrder_h_
//$ class java.util.Arrays$NaturalOrder
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {

class $export Arrays$NaturalOrder : public ::java::util::Comparator {
	$class(Arrays$NaturalOrder, 0, ::java::util::Comparator)
public:
	Arrays$NaturalOrder();
	void init$();
	virtual int32_t compare(Object$* first, Object$* second) override;
	static ::java::util::Arrays$NaturalOrder* INSTANCE;
};

	} // util
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_util_Arrays$NaturalOrder_h_