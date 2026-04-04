#include <KeySets$7.h>
#include <KeySets$Adder.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets$Adder = ::KeySets$Adder;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

void KeySets$7::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$7::go() {
	$useLocalObjectStack();
	$nc(this->val$adder)->add();
	$nc(this->val$s)->remove($($$nc($nc(this->val$s)->iterator())->next()));
}

KeySets$7::KeySets$7() {
}

$Class* KeySets$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$7, val$s)},
		{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$7, val$adder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(KeySets$7, init$, void, $Class*, $KeySets$Adder*, $Set*), "java.lang.Exception"},
		{"go", "()V", nullptr, 0, $virtualMethod(KeySets$7, go, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeySets",
		"testNoRemoval",
		"(Ljava/util/Set;LKeySets$Adder;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$7", nullptr, nullptr, 0},
		{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
		{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeySets$7",
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
	$loadClass(KeySets$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$7);
	});
	return class$;
}

$Class* KeySets$7::class$ = nullptr;