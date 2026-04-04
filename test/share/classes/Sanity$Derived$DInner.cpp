#include <Sanity$Derived$DInner.h>
#include <Sanity$Derived.h>
#include <jcpp.h>

using $Sanity$Derived = ::Sanity$Derived;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Sanity$Derived$DInner::init$($Sanity$Derived* this$1) {
	$set(this, this$1, this$1);
}

Sanity$Derived$DInner::Sanity$Derived$DInner() {
}

$Class* Sanity$Derived$DInner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LSanity$Derived;", nullptr, $FINAL | $SYNTHETIC, $field(Sanity$Derived$DInner, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LSanity$Derived;)V", nullptr, $PUBLIC, $method(Sanity$Derived$DInner, init$, void, $Sanity$Derived*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Sanity$Derived", "Sanity", "Derived", $PUBLIC},
		{"Sanity$Derived$DInner", "Sanity$Derived", "DInner", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Sanity$Derived$DInner",
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
	$loadClass(Sanity$Derived$DInner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sanity$Derived$DInner);
	});
	return class$;
}

$Class* Sanity$Derived$DInner::class$ = nullptr;