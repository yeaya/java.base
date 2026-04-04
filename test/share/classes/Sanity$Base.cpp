#include <Sanity$Base.h>
#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Base::init$($Sanity* this$0) {
	$set(this, this$0, this$0);
}

Sanity$Base::Sanity$Base() {
}

$Class* Sanity$Base::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSanity;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity;)V", nullptr, $PUBLIC, $method(Sanity$Base, init$, void, $Sanity*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Base", "Sanity", "Base", $PUBLIC},
		{"Sanity$Base$BPackage", "Sanity$Base", "BPackage", 0},
		{"Sanity$Base$BProtected", "Sanity$Base", "BProtected", $PROTECTED},
		{"Sanity$Base$BInner", "Sanity$Base", "BInner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity$Base",
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
	$loadClass(Sanity$Base, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Base);
	});
	return class$;
}

$Class* Sanity$Base::class$ = nullptr;