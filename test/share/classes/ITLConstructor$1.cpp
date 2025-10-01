#include <ITLConstructor$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ITLConstructor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ITLConstructor$1::*)()>(&ITLConstructor$1::init$))},
	{"childValue", "(Ljava/lang/Integer;)Ljava/lang/Integer;", nullptr, $PROTECTED},
	{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ITLConstructor$1_EnclosingMethodInfo_ = {
	"ITLConstructor",
	nullptr,
	nullptr
};

$InnerClassInfo _ITLConstructor$1_InnerClassesInfo_[] = {
	{"ITLConstructor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ITLConstructor$1_ClassInfo_ = {
	$ACC_SUPER,
	"ITLConstructor$1",
	"java.lang.InheritableThreadLocal",
	nullptr,
	nullptr,
	_ITLConstructor$1_MethodInfo_,
	"Ljava/lang/InheritableThreadLocal<Ljava/lang/Integer;>;",
	&_ITLConstructor$1_EnclosingMethodInfo_,
	_ITLConstructor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ITLConstructor"
};

$Object* allocate$ITLConstructor$1($Class* clazz) {
	return $of($alloc(ITLConstructor$1));
}

void ITLConstructor$1::init$() {
	$InheritableThreadLocal::init$();
}

$Object* ITLConstructor$1::initialValue() {
	return $of($Integer::valueOf(0));
}

$Integer* ITLConstructor$1::childValue($Integer* parentValue) {
	return $Integer::valueOf($nc(parentValue)->intValue() + 1);
}

$Object* ITLConstructor$1::childValue(Object$* parentValue) {
	return $of(this->childValue($cast($Integer, parentValue)));
}

ITLConstructor$1::ITLConstructor$1() {
}

$Class* ITLConstructor$1::load$($String* name, bool initialize) {
	$loadClass(ITLConstructor$1, name, initialize, &_ITLConstructor$1_ClassInfo_, allocate$ITLConstructor$1);
	return class$;
}

$Class* ITLConstructor$1::class$ = nullptr;