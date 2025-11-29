#include <KeySets$8.h>

#include <KeySets$Adder.h>
#include <KeySets$Catch.h>
#include <KeySets.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets$Adder = ::KeySets$Adder;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

$FieldInfo _KeySets$8_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$8, val$s)},
	{"val$adder", "LKeySets$Adder;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$8, val$adder)},
	{}
};

$MethodInfo _KeySets$8_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;LKeySets$Adder;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$8::*)($Class*,$KeySets$Adder*,$Set*)>(&KeySets$8::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$8_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoRemoval",
	"(Ljava/util/Set;LKeySets$Adder;)V"
};

$InnerClassInfo _KeySets$8_InnerClassesInfo_[] = {
	{"KeySets$8", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$8_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$8",
	"KeySets$Catch",
	nullptr,
	_KeySets$8_FieldInfo_,
	_KeySets$8_MethodInfo_,
	nullptr,
	&_KeySets$8_EnclosingMethodInfo_,
	_KeySets$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$8($Class* clazz) {
	return $of($alloc(KeySets$8));
}

void KeySets$8::init$($Class* xc, $KeySets$Adder* val$adder, $Set* val$s) {
	$set(this, val$adder, val$adder);
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$8::go() {
	$nc(this->val$adder)->add();
	$var($HashSet, hs, $new($HashSet));
	hs->addAll(this->val$s);
	$nc(this->val$s)->removeAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(hs))));
}

KeySets$8::KeySets$8() {
}

$Class* KeySets$8::load$($String* name, bool initialize) {
	$loadClass(KeySets$8, name, initialize, &_KeySets$8_ClassInfo_, allocate$KeySets$8);
	return class$;
}

$Class* KeySets$8::class$ = nullptr;