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

$FieldInfo _KeySets$2_FieldInfo_[] = {
	{"val$sel", "Ljava/nio/channels/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$2, val$sel)},
	{}
};

$MethodInfo _KeySets$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/nio/channels/Selector;)V", nullptr, 0, $method(KeySets$2, init$, void, $Class*, $Selector*), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, $virtualMethod(KeySets$2, go, void), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$2_EnclosingMethodInfo_ = {
	"KeySets",
	"testClose",
	"()V"
};

$InnerClassInfo _KeySets$2_InnerClassesInfo_[] = {
	{"KeySets$2", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$2_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$2",
	"KeySets$Catch",
	nullptr,
	_KeySets$2_FieldInfo_,
	_KeySets$2_MethodInfo_,
	nullptr,
	&_KeySets$2_EnclosingMethodInfo_,
	_KeySets$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$2($Class* clazz) {
	return $of($alloc(KeySets$2));
}

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
	$loadClass(KeySets$2, name, initialize, &_KeySets$2_ClassInfo_, allocate$KeySets$2);
	return class$;
}

$Class* KeySets$2::class$ = nullptr;