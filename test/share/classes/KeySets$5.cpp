#include <KeySets$5.h>

#include <KeySets$Adder.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
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

$FieldInfo _KeySets$5_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$5, val$s)},
	{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$5, val$adder)},
	{}
};

$MethodInfo _KeySets$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$5::*)($Class*,$KeySets$Adder*,$Set*)>(&KeySets$5::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$5_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoRemoval",
	"(Ljava/util/Set;LKeySets$Adder;)V"
};

$InnerClassInfo _KeySets$5_InnerClassesInfo_[] = {
	{"KeySets$5", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$5_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$5",
	"KeySets$Catch",
	nullptr,
	_KeySets$5_FieldInfo_,
	_KeySets$5_MethodInfo_,
	nullptr,
	&_KeySets$5_EnclosingMethodInfo_,
	_KeySets$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$5($Class* clazz) {
	return $of($alloc(KeySets$5));
}

void KeySets$5::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$5::go() {
	$nc(this->val$adder)->add();
	$nc(this->val$s)->clear();
}

KeySets$5::KeySets$5() {
}

$Class* KeySets$5::load$($String* name, bool initialize) {
	$loadClass(KeySets$5, name, initialize, &_KeySets$5_ClassInfo_, allocate$KeySets$5);
	return class$;
}

$Class* KeySets$5::class$ = nullptr;