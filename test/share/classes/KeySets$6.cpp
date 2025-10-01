#include <KeySets$6.h>

#include <KeySets$Adder.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets = ::KeySets;
using $KeySets$Adder = ::KeySets$Adder;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

$FieldInfo _KeySets$6_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$6, val$s)},
	{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$6, val$adder)},
	{}
};

$MethodInfo _KeySets$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$6::*)($Class*,$KeySets$Adder*,$Set*)>(&KeySets$6::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$6_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoRemoval",
	"(Ljava/util/Set;LKeySets$Adder;)V"
};

$InnerClassInfo _KeySets$6_InnerClassesInfo_[] = {
	{"KeySets$6", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$6_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$6",
	"KeySets$Catch",
	nullptr,
	_KeySets$6_FieldInfo_,
	_KeySets$6_MethodInfo_,
	nullptr,
	&_KeySets$6_EnclosingMethodInfo_,
	_KeySets$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$6($Class* clazz) {
	return $of($alloc(KeySets$6));
}

void KeySets$6::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$6::go() {
	$nc(this->val$adder)->add();
	$var($Iterator, i, $nc(this->val$s)->iterator());
	$nc(i)->next();
	i->remove();
}

KeySets$6::KeySets$6() {
}

$Class* KeySets$6::load$($String* name, bool initialize) {
	$loadClass(KeySets$6, name, initialize, &_KeySets$6_ClassInfo_, allocate$KeySets$6);
	return class$;
}

$Class* KeySets$6::class$ = nullptr;