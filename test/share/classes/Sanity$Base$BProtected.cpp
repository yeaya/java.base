#include <Sanity$Base$BProtected.h>
#include <Sanity$Base.h>
#include <jcpp.h>

using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Base$BProtected::init$($Sanity$Base* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Base$BProtected::Sanity$Base$BProtected() {
}

$Class* Sanity$Base$BProtected::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSanity$Base;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base$BProtected, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity$Base;)V", nullptr, $PROTECTED, $method(Sanity$Base$BProtected, init$, void, $Sanity$Base*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Base", "Sanity", "Base", $PUBLIC},
		{"Sanity$Base$BProtected", "Sanity$Base", "BProtected", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity$Base$BProtected",
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
		"Sanity"
	};
	$loadClass(Sanity$Base$BProtected, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Base$BProtected);
	});
	return class$;
}

$Class* Sanity$Base$BProtected::class$ = nullptr;