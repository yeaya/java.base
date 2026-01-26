#include <KeySets$1.h>

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

$FieldInfo _KeySets$1_FieldInfo_[] = {
	{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$1, val$sel)},
	{}
};

$MethodInfo _KeySets$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/nio/channels/Selector;)V", nullptr, 0, $method(KeySets$1, init$, void, $Class*, $Selector*), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, $virtualMethod(KeySets$1, go, void), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$1_EnclosingMethodInfo_ = {
	"KeySets",
	"testClose",
	"()V"
};

$InnerClassInfo _KeySets$1_InnerClassesInfo_[] = {
	{"KeySets$1", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$1_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$1",
	"KeySets$Catch",
	nullptr,
	_KeySets$1_FieldInfo_,
	_KeySets$1_MethodInfo_,
	nullptr,
	&_KeySets$1_EnclosingMethodInfo_,
	_KeySets$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$1($Class* clazz) {
	return $of($alloc(KeySets$1));
}

void KeySets$1::init$($Class* xc, $Selector* val$sel) {
	$set(this, val$sel, val$sel);
	$KeySets$Catch::init$(xc);
}

void KeySets$1::go() {
	$nc(this->val$sel)->keys();
}

KeySets$1::KeySets$1() {
}

$Class* KeySets$1::load$($String* name, bool initialize) {
	$loadClass(KeySets$1, name, initialize, &_KeySets$1_ClassInfo_, allocate$KeySets$1);
	return class$;
}

$Class* KeySets$1::class$ = nullptr;