#include <java/util/Comparators.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _Comparators_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Comparators::*)()>(&Comparators::init$))},
	{}
};

$InnerClassInfo _Comparators_InnerClassesInfo_[] = {
	{"java.util.Comparators$NullComparator", "java.util.Comparators", "NullComparator", $STATIC | $FINAL},
	{"java.util.Comparators$NaturalOrderComparator", "java.util.Comparators", "NaturalOrderComparator", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Comparators_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Comparators",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Comparators_MethodInfo_,
	nullptr,
	nullptr,
	_Comparators_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Comparators$NullComparator,java.util.Comparators$NaturalOrderComparator"
};

$Object* allocate$Comparators($Class* clazz) {
	return $of($alloc(Comparators));
}

void Comparators::init$() {
	$throwNew($AssertionError, $of("no instances"_s));
}

Comparators::Comparators() {
}

$Class* Comparators::load$($String* name, bool initialize) {
	$loadClass(Comparators, name, initialize, &_Comparators_ClassInfo_, allocate$Comparators);
	return class$;
}

$Class* Comparators::class$ = nullptr;

	} // util
} // java