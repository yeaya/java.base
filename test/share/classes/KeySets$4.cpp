#include <KeySets$4.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Set = ::java::util::Set;

void KeySets$4::init$($Class* xc, $Set* val$s) {
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$4::go() {
	$useLocalObjectStack();
	$var($ArrayList, al, $new($ArrayList));
	al->add($$new($Object));
	$nc(this->val$s)->addAll($cast($AbstractCollection, al));
}

KeySets$4::KeySets$4() {
}

$Class* KeySets$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$4, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/util/Set;)V", nullptr, 0, $method(KeySets$4, init$, void, $Class*, $Set*), "java.lang.Exception"},
		{"go", "()V", nullptr, 0, $virtualMethod(KeySets$4, go, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeySets",
		"testNoAddition",
		"(Ljava/util/Set;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$4", nullptr, nullptr, 0},
		{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeySets$4",
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
	$loadClass(KeySets$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$4);
	});
	return class$;
}

$Class* KeySets$4::class$ = nullptr;