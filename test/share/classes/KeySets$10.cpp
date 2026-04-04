#include <KeySets$10.h>
#include <KeySets.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $KeySets = ::KeySets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Selector = ::java::nio::channels::Selector;

void KeySets$10::init$($Selector* val$sel) {
	$set(this, val$sel, val$sel);
}

void KeySets$10::add() {
	$KeySets::reg(this->val$sel);
}

KeySets$10::KeySets$10() {
}

$Class* KeySets$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$10, val$sel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/Selector;)V", "()V", 0, $method(KeySets$10, init$, void, $Selector*)},
		{"add", "()V", nullptr, $PUBLIC, $virtualMethod(KeySets$10, add, void), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"KeySets",
		"testMutability",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"KeySets$10", nullptr, nullptr, 0},
		{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"KeySets$10",
		"java.lang.Object",
		"KeySets$Adder",
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
	$loadClass(KeySets$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySets$10);
	});
	return class$;
}

$Class* KeySets$10::class$ = nullptr;