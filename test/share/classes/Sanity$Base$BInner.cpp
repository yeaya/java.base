#include <Sanity$Base$BInner.h>
#include <Sanity$Base.h>
#include <jcpp.h>

using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Base$BInner::init$($Sanity$Base* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Base$BInner::Sanity$Base$BInner() {
}

$Class* Sanity$Base$BInner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSanity$Base;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base$BInner, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity$Base;)V", nullptr, $PUBLIC, $method(Sanity$Base$BInner, init$, void, $Sanity$Base*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Base", "Sanity", "Base", $PUBLIC},
		{"Sanity$Base$BInner", "Sanity$Base", "BInner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity$Base$BInner",
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
	$loadClass(Sanity$Base$BInner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Base$BInner);
	});
	return class$;
}

$Class* Sanity$Base$BInner::class$ = nullptr;