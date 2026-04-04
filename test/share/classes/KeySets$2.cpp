#include <KeySets$2.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/nio/channels/Selector.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

void KeySets$2::init$($Class* xc, $Selector* val$sel) {
	$set(this, val$sel, val$sel);
	$KeySets$Catch::init$(xc);
}

void KeySets$2::go() {
	$nc(this->val$sel)->selectedKeys();
}

KeySets$2::KeySets$2() {
}

$Class* KeySets$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$2, val$sel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/nio/channels/Selector;)V", nullptr, 0, $method(KeySets$2, init$, void, $Class*, $Selector*), "java.lang.Exception"},
		{"go", "()V", nullptr, 0, $virtualMethod(KeySets$2, go, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeySets",
		"testClose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$2", nullptr, nullptr, 0},
		{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeySets$2",
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
	$loadClass(KeySets$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$2);
	});
	return class$;
}

$Class* KeySets$2::class$ = nullptr;