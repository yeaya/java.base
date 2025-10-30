#include <test/FindSpecial$MyComparator.h>

#include <java/lang/Error.h>
#include <java/util/Comparator.h>
#include <test/FindSpecial.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $FindSpecial = ::test::FindSpecial;

namespace test {

$MethodInfo _FindSpecial$MyComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FindSpecial$MyComparator::*)()>(&FindSpecial$MyComparator::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"reversed", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/Object;>;", $PUBLIC},
	{}
};

$InnerClassInfo _FindSpecial$MyComparator_InnerClassesInfo_[] = {
	{"test.FindSpecial$MyComparator", "test.FindSpecial", "MyComparator", $STATIC},
	{}
};

$ClassInfo _FindSpecial$MyComparator_ClassInfo_ = {
	$ACC_SUPER,
	"test.FindSpecial$MyComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_FindSpecial$MyComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
	nullptr,
	_FindSpecial$MyComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"test.FindSpecial"
};

$Object* allocate$FindSpecial$MyComparator($Class* clazz) {
	return $of($alloc(FindSpecial$MyComparator));
}

void FindSpecial$MyComparator::init$() {
}

int32_t FindSpecial$MyComparator::compare(Object$* o1, Object$* o2) {
	return 0;
}

$Comparator* FindSpecial$MyComparator::reversed() {
	$throwNew($Error, "should not reach here"_s);
	$shouldNotReachHere();
}

FindSpecial$MyComparator::FindSpecial$MyComparator() {
}

$Class* FindSpecial$MyComparator::load$($String* name, bool initialize) {
	$loadClass(FindSpecial$MyComparator, name, initialize, &_FindSpecial$MyComparator_ClassInfo_, allocate$FindSpecial$MyComparator);
	return class$;
}

$Class* FindSpecial$MyComparator::class$ = nullptr;

} // test