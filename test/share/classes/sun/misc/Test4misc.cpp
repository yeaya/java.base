#include <sun/misc/Test4misc.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

#undef LOOKUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace sun {
	namespace misc {

$FieldInfo _Test4misc_FieldInfo_[] = {
	{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Test4misc, LOOKUP)},
	{}
};

$MethodInfo _Test4misc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Test4misc, init$, void)},
	{}
};

$ClassInfo _Test4misc_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.misc.Test4misc",
	"java.lang.Object",
	nullptr,
	_Test4misc_FieldInfo_,
	_Test4misc_MethodInfo_
};

$Object* allocate$Test4misc($Class* clazz) {
	return $of($alloc(Test4misc));
}

$MethodHandles$Lookup* Test4misc::LOOKUP = nullptr;

void Test4misc::init$() {
}

void clinit$Test4misc($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(Test4misc::LOOKUP, $MethodHandles::lookup());
}

Test4misc::Test4misc() {
}

$Class* Test4misc::load$($String* name, bool initialize) {
	$loadClass(Test4misc, name, initialize, &_Test4misc_ClassInfo_, clinit$Test4misc, allocate$Test4misc);
	return class$;
}

$Class* Test4misc::class$ = nullptr;

	} // misc
} // sun