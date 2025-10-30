#include <KeySets$10.h>

#include <KeySets.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <jcpp.h>

using $KeySets = ::KeySets;
using $KeySets$Adder = ::KeySets$Adder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;

$FieldInfo _KeySets$10_FieldInfo_[] = {
	{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$10, val$sel)},
	{}
};

$MethodInfo _KeySets$10_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/Selector;)V", "()V", 0, $method(static_cast<void(KeySets$10::*)($Selector*)>(&KeySets$10::init$))},
	{"add", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _KeySets$10_EnclosingMethodInfo_ = {
	"KeySets",
	"testMutability",
	"()V"
};

$InnerClassInfo _KeySets$10_InnerClassesInfo_[] = {
	{"KeySets$10", nullptr, nullptr, 0},
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$10_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$10",
	"java.lang.Object",
	"KeySets$Adder",
	_KeySets$10_FieldInfo_,
	_KeySets$10_MethodInfo_,
	nullptr,
	&_KeySets$10_EnclosingMethodInfo_,
	_KeySets$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$10($Class* clazz) {
	return $of($alloc(KeySets$10));
}

void KeySets$10::init$($Selector* val$sel) {
	$set(this, val$sel, val$sel);
}

void KeySets$10::add() {
	$KeySets::reg(this->val$sel);
}

KeySets$10::KeySets$10() {
}

$Class* KeySets$10::load$($String* name, bool initialize) {
	$loadClass(KeySets$10, name, initialize, &_KeySets$10_ClassInfo_, allocate$KeySets$10);
	return class$;
}

$Class* KeySets$10::class$ = nullptr;