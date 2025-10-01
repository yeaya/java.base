#include <IsSynthetic$1.h>

#include <IsSynthetic.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IsSynthetic = ::IsSynthetic;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IsSynthetic$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IsSynthetic$1::*)()>(&IsSynthetic$1::init$))},
	{}
};

$EnclosingMethodInfo _IsSynthetic$1_EnclosingMethodInfo_ = {
	"IsSynthetic",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _IsSynthetic$1_InnerClassesInfo_[] = {
	{"IsSynthetic$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IsSynthetic$1_ClassInfo_ = {
	$ACC_SUPER,
	"IsSynthetic$1",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_IsSynthetic$1_MethodInfo_,
	nullptr,
	&_IsSynthetic$1_EnclosingMethodInfo_,
	_IsSynthetic$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsSynthetic"
};

$Object* allocate$IsSynthetic$1($Class* clazz) {
	return $of($alloc(IsSynthetic$1));
}

void IsSynthetic$1::init$() {
}

IsSynthetic$1::IsSynthetic$1() {
}

$Class* IsSynthetic$1::load$($String* name, bool initialize) {
	$loadClass(IsSynthetic$1, name, initialize, &_IsSynthetic$1_ClassInfo_, allocate$IsSynthetic$1);
	return class$;
}

$Class* IsSynthetic$1::class$ = nullptr;