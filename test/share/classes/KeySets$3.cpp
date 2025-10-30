#include <KeySets$3.h>

#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets = ::KeySets;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

$FieldInfo _KeySets$3_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$3, val$s)},
	{}
};

$MethodInfo _KeySets$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$3::*)($Class*,$Set*)>(&KeySets$3::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$3_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoAddition",
	"(Ljava/util/Set;)V"
};

$InnerClassInfo _KeySets$3_InnerClassesInfo_[] = {
	{"KeySets$3", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$3_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$3",
	"KeySets$Catch",
	nullptr,
	_KeySets$3_FieldInfo_,
	_KeySets$3_MethodInfo_,
	nullptr,
	&_KeySets$3_EnclosingMethodInfo_,
	_KeySets$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$3($Class* clazz) {
	return $of($alloc(KeySets$3));
}

void KeySets$3::init$($Class* xc, $Set* val$s) {
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$3::go() {
	$nc(this->val$s)->add($$new($Object));
}

KeySets$3::KeySets$3() {
}

$Class* KeySets$3::load$($String* name, bool initialize) {
	$loadClass(KeySets$3, name, initialize, &_KeySets$3_ClassInfo_, allocate$KeySets$3);
	return class$;
}

$Class* KeySets$3::class$ = nullptr;