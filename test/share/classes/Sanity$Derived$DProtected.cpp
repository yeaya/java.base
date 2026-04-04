#include <Sanity$Derived$DProtected.h>
#include <Sanity$Derived.h>
#include <jcpp.h>

using $Sanity$Derived = ::Sanity$Derived;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Derived$DProtected::init$($Sanity$Derived* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Derived$DProtected::Sanity$Derived$DProtected() {
}

$Class* Sanity$Derived$DProtected::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSanity$Derived;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived$DProtected, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity$Derived;)V", nullptr, $PROTECTED, $method(Sanity$Derived$DProtected, init$, void, $Sanity$Derived*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
		{"Sanity$Derived$DProtected", "Sanity$Derived", "DProtected", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity$Derived$DProtected",
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
	$loadClass(Sanity$Derived$DProtected, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Derived$DProtected);
	});
	return class$;
}

$Class* Sanity$Derived$DProtected::class$ = nullptr;