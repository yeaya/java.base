#ifndef _test_FindSpecial$MyComparator_h_
#define _test_FindSpecial$MyComparator_h_
//$ class test.FindSpecial$MyComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace test {

class $export FindSpecial$MyComparator : public ::java::util::Comparator {
	$class(FindSpecial$MyComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	FindSpecial$MyComparator();
	void init$();
	virtual int32_t compare(Object$* o1, Object$* o2) override;
	virtual ::java::util::Comparator* reversed() override;
};

} // test

#endif // _test_FindSpecial$MyComparator_h_