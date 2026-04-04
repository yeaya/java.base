#include <KeySets$3.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

void KeySets$3::init$($Class* xc, $Set* val$s) {
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$3::go() {
	$nc(this->val$s)->add($$new($Object));
}

KeySets$3::KeySets$3() {
}

$Class* KeySets$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$3, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/util/Set;)V", nullptr, 0, $method(KeySets$3, init$, void, $Class*, $Set*), "java.lang.Exception"},
		{"go", "()V", nullptr, 0, $virtualMethod(KeySets$3, go, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeySets",
		"testNoAddition",
		"(Ljava/util/Set;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$3", nullptr, nullptr, 0},
		{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeySets$3",
		"KeySets$Catch",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"KeySets"
	};
	$loadClass(KeySets$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$3);
	});
	return class$;
}

$Class* KeySets$3::class$ = nullptr;