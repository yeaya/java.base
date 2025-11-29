#include <IsSynthetic$NestedClass.h>

#include <IsSynthetic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IsSynthetic$NestedClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IsSynthetic$NestedClass::*)()>(&IsSynthetic$NestedClass::init$))},
	{}
};

$InnerClassInfo _IsSynthetic$NestedClass_InnerClassesInfo_[] = {
	{"IsSynthetic$NestedClass", "IsSynthetic", "NestedClass", $STATIC},
	{}
};

$ClassInfo _IsSynthetic$NestedClass_ClassInfo_ = {
	$ACC_SUPER,
	"IsSynthetic$NestedClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IsSynthetic$NestedClass_MethodInfo_,
	nullptr,
	nullptr,
	_IsSynthetic$NestedClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IsSynthetic"
};

$Object* allocate$IsSynthetic$NestedClass($Class* clazz) {
	return $of($alloc(IsSynthetic$NestedClass));
}

void IsSynthetic$NestedClass::init$() {
}

IsSynthetic$NestedClass::IsSynthetic$NestedClass() {
}

$Class* IsSynthetic$NestedClass::load$($String* name, bool initialize) {
	$loadClass(IsSynthetic$NestedClass, name, initialize, &_IsSynthetic$NestedClass_ClassInfo_, allocate$IsSynthetic$NestedClass);
	return class$;
}

$Class* IsSynthetic$NestedClass::class$ = nullptr;