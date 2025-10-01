#include <ITLRemoveTest$1.h>

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

$MethodInfo _ITLRemoveTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ITLRemoveTest$1::*)()>(&ITLRemoveTest$1::init$))},
	{"childValue", "(Ljava/lang/Integer;)Ljava/lang/Integer;", nullptr, $PROTECTED},
	{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ITLRemoveTest$1_EnclosingMethodInfo_ = {
	"ITLRemoveTest",
	nullptr,
	nullptr
};

$InnerClassInfo _ITLRemoveTest$1_InnerClassesInfo_[] = {
	{"ITLRemoveTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ITLRemoveTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ITLRemoveTest$1",
	"java.lang.InheritableThreadLocal",
	nullptr,
	nullptr,
	_ITLRemoveTest$1_MethodInfo_,
	"Ljava/lang/InheritableThreadLocal<Ljava/lang/Integer;>;",
	&_ITLRemoveTest$1_EnclosingMethodInfo_,
	_ITLRemoveTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ITLRemoveTest"
};

$Object* allocate$ITLRemoveTest$1($Class* clazz) {
	return $of($alloc(ITLRemoveTest$1));
}

void ITLRemoveTest$1::init$() {
	$InheritableThreadLocal::init$();
}

$Object* ITLRemoveTest$1::initialValue() {
	return $of($Integer::valueOf((int32_t)0x80000000));
}

$Integer* ITLRemoveTest$1::childValue($Integer* parentValue) {
	return $Integer::valueOf(($nc(parentValue)->intValue() + 1));
}

$Object* ITLRemoveTest$1::childValue(Object$* parentValue) {
	return $of(this->childValue($cast($Integer, parentValue)));
}

ITLRemoveTest$1::ITLRemoveTest$1() {
}

$Class* ITLRemoveTest$1::load$($String* name, bool initialize) {
	$loadClass(ITLRemoveTest$1, name, initialize, &_ITLRemoveTest$1_ClassInfo_, allocate$ITLRemoveTest$1);
	return class$;
}

$Class* ITLRemoveTest$1::class$ = nullptr;