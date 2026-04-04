#include <ResolveFrom$Inner.h>
#include <ResolveFrom.h>
#include <jcpp.h>

using $ResolveFrom = ::ResolveFrom;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ResolveFrom$Inner::init$($ResolveFrom* this$0) {
	$set(this, this$0, this$0);
}

ResolveFrom$Inner::ResolveFrom$Inner() {
}

$Class* ResolveFrom$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LResolveFrom;", nullptr, $FINAL | $SYNTHETIC, $field(ResolveFrom$Inner, this$0)},
		{"i", "I", nullptr, 0, $field(ResolveFrom$Inner, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LResolveFrom;)V", nullptr, $PRIVATE, $method(ResolveFrom$Inner, init$, void, $ResolveFrom*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ResolveFrom$Inner", "ResolveFrom", "Inner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ResolveFrom$Inner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ResolveFrom"
	};
	$loadClass(ResolveFrom$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolveFrom$Inner);
	});
	return class$;
}

$Class* ResolveFrom$Inner::class$ = nullptr;