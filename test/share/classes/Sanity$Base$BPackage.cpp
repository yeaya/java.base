#include <Sanity$Base$BPackage.h>
#include <Sanity$Base.h>
#include <jcpp.h>

using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Base$BPackage::init$($Sanity$Base* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Base$BPackage::Sanity$Base$BPackage() {
}

$Class* Sanity$Base$BPackage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSanity$Base;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Base$BPackage, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity$Base;)V", nullptr, 0, $method(Sanity$Base$BPackage, init$, void, $Sanity$Base*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Base", "Sanity", "Base", $PUBLIC},
		{"Sanity$Base$BPackage", "Sanity$Base", "BPackage", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sanity$Base$BPackage",
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
	$loadClass(Sanity$Base$BPackage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Base$BPackage);
	});
	return class$;
}

$Class* Sanity$Base$BPackage::class$ = nullptr;