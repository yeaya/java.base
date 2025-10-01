#include <KeySets$4.h>

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
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $KeySets = ::KeySets;
using $KeySets$Catch = ::KeySets$Catch;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Set = ::java::util::Set;

$FieldInfo _KeySets$4_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(KeySets$4, val$s)},
	{}
};

$MethodInfo _KeySets$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(KeySets$4::*)($Class*,$Set*)>(&KeySets$4::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeySets$4_EnclosingMethodInfo_ = {
	"KeySets",
	"testNoAddition",
	"(Ljava/util/Set;)V"
};

$InnerClassInfo _KeySets$4_InnerClassesInfo_[] = {
	{"KeySets$4", nullptr, nullptr, 0},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _KeySets$4_ClassInfo_ = {
	$ACC_SUPER,
	"KeySets$4",
	"KeySets$Catch",
	nullptr,
	_KeySets$4_FieldInfo_,
	_KeySets$4_MethodInfo_,
	nullptr,
	&_KeySets$4_EnclosingMethodInfo_,
	_KeySets$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeySets"
};

$Object* allocate$KeySets$4($Class* clazz) {
	return $of($alloc(KeySets$4));
}

void KeySets$4::init$($Class* xc, $Set* val$s) {
	$set(this, val$s, val$s);
	$KeySets$Catch::init$(xc);
}

void KeySets$4::go() {
	$var($ArrayList, al, $new($ArrayList));
	al->add($$new($Object));
	$nc(this->val$s)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(al))));
}

KeySets$4::KeySets$4() {
}

$Class* KeySets$4::load$($String* name, bool initialize) {
	$loadClass(KeySets$4, name, initialize, &_KeySets$4_ClassInfo_, allocate$KeySets$4);
	return class$;
}

$Class* KeySets$4::class$ = nullptr;