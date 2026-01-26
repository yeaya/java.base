#include <pkg/A.h>

#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace pkg {

$MethodInfo _A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(A, init$, void)},
	{"m1", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(A, m1, $String*)},
	{"m2", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(A, m2, $String*)},
	{"m3", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT, $virtualMethod(A, m3, $String*, $StringArray*)},
	{}
};

$ClassInfo _A_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"pkg.A",
	"java.lang.Object",
	nullptr,
	nullptr,
	_A_MethodInfo_
};

$Object* allocate$A($Class* clazz) {
	return $of($alloc(A));
}

void A::init$() {
}

$String* A::m1() {
	return $of(this)->getClass()->getSimpleName();
}

$String* A::m2() {
	return $of(this)->getClass()->getSimpleName();
}

$String* A::m3($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($StringArray, arr$, args);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			sb->append(s);
		}
	}
	$var($String, var$0, $($of(this)->getClass()->getSimpleName()));
	return $concat(var$0, $(sb->toString()));
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$loadClass(A, name, initialize, &_A_ClassInfo_, allocate$A);
	return class$;
}

$Class* A::class$ = nullptr;

} // pkg