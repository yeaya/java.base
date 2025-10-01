#include <IsSynthetic$1LocalClass.h>

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
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IsSynthetic$1LocalClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IsSynthetic$1LocalClass::*)()>(&IsSynthetic$1LocalClass::init$))},
	{}
};

$EnclosingMethodInfo _IsSynthetic$1LocalClass_EnclosingMethodInfo_ = {
	"IsSynthetic",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _IsSynthetic$1LocalClass_InnerClassesInfo_[] = {
	{"IsSynthetic$1LocalClass", nullptr, "LocalClass", 0},
	{}
};

$ClassInfo _IsSynthetic$1LocalClass_ClassInfo_ = {
	$ACC_SUPER,
	"IsSynthetic$1LocalClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsSynthetic$1LocalClass_MethodInfo_,
	nullptr,
	&_IsSynthetic$1LocalClass_EnclosingMethodInfo_,
	_IsSynthetic$1LocalClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsSynthetic"
};

$Object* allocate$IsSynthetic$1LocalClass($Class* clazz) {
	return $of($alloc(IsSynthetic$1LocalClass));
}

void IsSynthetic$1LocalClass::init$() {
}

IsSynthetic$1LocalClass::IsSynthetic$1LocalClass() {
}

$Class* IsSynthetic$1LocalClass::load$($String* name, bool initialize) {
	$loadClass(IsSynthetic$1LocalClass, name, initialize, &_IsSynthetic$1LocalClass_ClassInfo_, allocate$IsSynthetic$1LocalClass);
	return class$;
}

$Class* IsSynthetic$1LocalClass::class$ = nullptr;