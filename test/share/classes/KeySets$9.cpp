#include <KeySets$9.h>

#include <KeySets$Adder.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef EMPTY_SET

using $KeySets = ::KeySets;
using $KeySets$Adder = ::KeySets$Adder;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;

$FieldInfo _KeySets$9_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$9, val$s)},
	{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$9, val$adder)},
	{}
};

$MethodInfo _KeySets$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$9::*)($Class*,$KeySets$Adder*,$Set*)>(&KeySets$9::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$9_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoRemoval",
	"(Ljava/util/Set;LKeySets$Adder;)V"
};

$InnerClassInfo _KeySets$9_InnerClassesInfo_[] = {
	{"KeySets$9", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$9_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$9",
	"KeySets$Catch",
	nullptr,
	_KeySets$9_FieldInfo_,
	_KeySets$9_MethodInfo_,
	nullptr,
	&_KeySets$9_EnclosingMethodInfo_,
	_KeySets$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$9($Class* clazz) {
	return $of($alloc(KeySets$9));
}

void KeySets$9::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$9::go() {
	$nc(this->val$adder)->add();
	$init($Collections);
	$nc(this->val$s)->retainAll($Collections::EMPTY_SET);
}

KeySets$9::KeySets$9() {
}

$Class* KeySets$9::load$($String* name, bool initialize) {
	$loadClass(KeySets$9, name, initialize, &_KeySets$9_ClassInfo_, allocate$KeySets$9);
	return class$;
}

$Class* KeySets$9::class$ = nullptr;