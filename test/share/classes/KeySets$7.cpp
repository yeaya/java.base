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
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$FieldInfo _KeySets$7_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$7, val$s)},
	{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$7, val$adder)},
	{}
};

$MethodInfo _KeySets$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$7::*)($Class*,$KeySets$Adder*,$Set*)>(&KeySets$7::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$7_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoRemoval",
	"(Ljava/util/Set;LKeySets$Adder;)V"
};

$InnerClassInfo _KeySets$7_InnerClassesInfo_[] = {
	{"KeySets$7", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$7_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$7",
	"KeySets$Catch",
	nullptr,
	_KeySets$7_FieldInfo_,
	_KeySets$7_MethodInfo_,
	nullptr,
	&_KeySets$7_EnclosingMethodInfo_,
	_KeySets$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$7($Class* clazz) {
	return $of($alloc(KeySets$7));
}

void KeySets$7::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$7::go() {
	$useLocalCurrentObjectStackCache();
	$nc(this->val$adder)->add();
	$nc(this->val$s)->remove($($nc($($nc(this->val$s)->iterator()))->next()));
}

KeySets$7::KeySets$7() {
}

$Class* KeySets$7::load$($String* name, bool initialize) {
	$loadClass(KeySets$7, name, initialize, &_KeySets$7_ClassInfo_, allocate$KeySets$7);
	return class$;
}

$Class* KeySets$7::class$ = nullptr;