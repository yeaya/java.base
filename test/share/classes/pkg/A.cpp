#include <pkg/A.h>
#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace pkg {

void A::init$() {
}

$String* A::m1() {
	return this->getClass()->getSimpleName();
}

$String* A::m2() {
	return this->getClass()->getSimpleName();
}

$String* A::m3($StringArray* args) {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($StringArray, arr$, args);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			sb->append(s);
		}
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(this->getClass()->getSimpleName()));
	var$0->append($(sb->toString()));
	return $str(var$0);
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(A, init$, void)},
		{"m1", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(A, m1, $String*)},
		{"m2", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(A, m2, $String*)},
		{"m3", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT, $virtualMethod(A, m3, $String*, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"pkg.A",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A);
	});
	return class$;
}

$Class* A::class$ = nullptr;

} // pkg