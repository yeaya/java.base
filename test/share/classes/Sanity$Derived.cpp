#include <Sanity$Derived.h>
#include <Sanity$Base.h>
#include <Sanity.h>
#include <jcpp.h>

using $Sanity = ::Sanity;
using $Sanity$Base = ::Sanity$Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Derived::init$($Sanity* this$0) {
	$set(this, this$0, this$0);
	$Sanity$Base::init$(this$0);
}

Sanity$Derived::Sanity$Derived() {
}

$Class* Sanity$Derived::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LSanity;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity;)V", nullptr, $PUBLIC, $method(Sanity$Derived, init$, void, $Sanity*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
		{"Sanity$Base", "Sanity", "Base", $PUBLIC},
		{"Sanity$Derived$DPackage", "Sanity$Derived", "DPackage", 0},
		{"Sanity$Derived$DProtected", "Sanity$Derived", "DProtected", $PROTECTED},
		{"Sanity$Derived$DInner", "Sanity$Derived", "DInner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity$Derived",
		"Sanity$Base",
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
	$loadClass(Sanity$Derived, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Derived);
	});
	return class$;
}

$Class* Sanity$Derived::class$ = nullptr;