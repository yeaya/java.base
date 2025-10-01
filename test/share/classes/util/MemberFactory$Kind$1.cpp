#include <util/MemberFactory$Kind$1.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <util/MemberFactory$Kind.h>
#include <util/MemberFactory.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Field = ::java::lang::reflect::Field;
using $MemberFactory = ::util::MemberFactory;
using $MemberFactory$Kind = ::util::MemberFactory$Kind;

namespace util {

$FieldInfo _MemberFactory$Kind$1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberFactory$Kind$1, $assertionsDisabled)},
	{}
};

$MethodInfo _MemberFactory$Kind$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(MemberFactory$Kind$1::*)($String*,int32_t)>(&MemberFactory$Kind$1::init$))},
	{"apply", "(Ljava/lang/Class;Lutil/MemberFactory;)Ljava/lang/reflect/AccessibleObject;", "(Ljava/lang/Class<*>;Lutil/MemberFactory;)Ljava/lang/reflect/AccessibleObject;", $PUBLIC, $method(static_cast<$AccessibleObject*(MemberFactory$Kind$1::*)($Class*,$MemberFactory*)>(&MemberFactory$Kind$1::apply))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _MemberFactory$Kind$1_EnclosingMethodInfo_ = {
	"util.MemberFactory$Kind",
	nullptr,
	nullptr
};

$InnerClassInfo _MemberFactory$Kind$1_InnerClassesInfo_[] = {
	{"util.MemberFactory$Kind", "util.MemberFactory", "Kind", $STATIC | $ABSTRACT | $ENUM},
	{"util.MemberFactory$Kind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _MemberFactory$Kind$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"util.MemberFactory$Kind$1",
	"util.MemberFactory$Kind",
	nullptr,
	_MemberFactory$Kind$1_FieldInfo_,
	_MemberFactory$Kind$1_MethodInfo_,
	nullptr,
	&_MemberFactory$Kind$1_EnclosingMethodInfo_,
	_MemberFactory$Kind$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"util.MemberFactory"
};

$Object* allocate$MemberFactory$Kind$1($Class* clazz) {
	return $of($alloc(MemberFactory$Kind$1));
}

bool MemberFactory$Kind$1::$assertionsDisabled = false;

void MemberFactory$Kind$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$MemberFactory$Kind::init$($enum$name, $enum$ordinal);
}

$AccessibleObject* MemberFactory$Kind$1::apply($Class* declaringClass, $MemberFactory* factory) {
	$beforeCallerSensitive();
	if (!MemberFactory$Kind$1::$assertionsDisabled && !$equals($nc(factory)->kind, this)) {
		$throwNew($AssertionError);
	}
	try {
		return $nc(declaringClass)->getDeclaredField($nc(factory)->name$);
	} catch ($NoSuchFieldException&) {
		$var($NoSuchFieldException, e, $catch());
		$throwNew($RuntimeException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$Object* MemberFactory$Kind$1::apply(Object$* declaringClass, Object$* factory) {
	return $of(this->apply($cast($Class, declaringClass), $cast($MemberFactory, factory)));
}

void clinit$MemberFactory$Kind$1($Class* class$) {
	$load($MemberFactory);
	MemberFactory$Kind$1::$assertionsDisabled = !$MemberFactory::class$->desiredAssertionStatus();
}

MemberFactory$Kind$1::MemberFactory$Kind$1() {
}

$Class* MemberFactory$Kind$1::load$($String* name, bool initialize) {
	$loadClass(MemberFactory$Kind$1, name, initialize, &_MemberFactory$Kind$1_ClassInfo_, clinit$MemberFactory$Kind$1, allocate$MemberFactory$Kind$1);
	return class$;
}

$Class* MemberFactory$Kind$1::class$ = nullptr;

} // util