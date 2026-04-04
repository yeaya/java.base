#include <Sanity$Derived$DPackage.h>
#include <Sanity$Derived.h>
#include <jcpp.h>

using $Sanity$Derived = ::Sanity$Derived;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Derived$DPackage::init$($Sanity$Derived* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Derived$DPackage::Sanity$Derived$DPackage() {
}

$Class* Sanity$Derived$DPackage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSanity$Derived;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived$DPackage, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity$Derived;)V", nullptr, 0, $method(Sanity$Derived$DPackage, init$, void, $Sanity$Derived*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
		{"Sanity$Derived$DPackage", "Sanity$Derived", "DPackage", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sanity$Derived$DPackage",
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
	$loadClass(Sanity$Derived$DPackage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Derived$DPackage);
	});
	return class$;
}

$Class* Sanity$Derived$DPackage::class$ = nullptr;