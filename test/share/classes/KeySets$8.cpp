#include <KeySets$8.h>
#include <KeySets$Adder.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/AbstractCollection.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets$Adder = ::KeySets$Adder;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

void KeySets$8::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$8::go() {
	$nc(this->val$adder)->add();
	$var($HashSet, hs, $new($HashSet));
	hs->addAll(this->val$s);
	$nc(this->val$s)->removeAll($cast($AbstractCollection, hs));
}

KeySets$8::KeySets$8() {
}

$Class* KeySets$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$8, val$s)},
		{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$8, val$adder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(KeySets$8, init$, void, $Class*, $KeySets$Adder*, $Set*), "java.lang.Exception"},
		{"go", "()V", nullptr, 0, $virtualMethod(KeySets$8, go, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeySets",
		"testNoRemoval",
		"(Ljava/util/Set;LKeySets$Adder;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$8", nullptr, nullptr, 0},
		{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
		{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeySets$8",
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
	$loadClass(KeySets$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$8);
	});
	return class$;
}

$Class* KeySets$8::class$ = nullptr;