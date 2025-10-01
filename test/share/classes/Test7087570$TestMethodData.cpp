#include <Test7087570$TestMethodData.h>

#include <Test7087570.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Test7087570 = ::Test7087570;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodType = ::java::lang::invoke::MethodType;

$FieldInfo _Test7087570$TestMethodData_FieldInfo_[] = {
	{"clazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(Test7087570$TestMethodData, clazz)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(Test7087570$TestMethodData, name)},
	{"methodType", "Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(Test7087570$TestMethodData, methodType)},
	{"declaringClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(Test7087570$TestMethodData, declaringClass)},
	{"referenceKind", "I", nullptr, $FINAL, $field(Test7087570$TestMethodData, referenceKind)},
	{}
};

$MethodInfo _Test7087570$TestMethodData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;I)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;I)V", $PUBLIC, $method(static_cast<void(Test7087570$TestMethodData::*)($Class*,$String*,$MethodType*,$Class*,int32_t)>(&Test7087570$TestMethodData::init$))},
	{}
};

$InnerClassInfo _Test7087570$TestMethodData_InnerClassesInfo_[] = {
	{"Test7087570$TestMethodData", "Test7087570", "TestMethodData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Test7087570$TestMethodData_ClassInfo_ = {
	$ACC_SUPER,
	"Test7087570$TestMethodData",
	"java.lang.Object",
	nullptr,
	_Test7087570$TestMethodData_FieldInfo_,
	_Test7087570$TestMethodData_MethodInfo_,
	nullptr,
	nullptr,
	_Test7087570$TestMethodData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7087570"
};

$Object* allocate$Test7087570$TestMethodData($Class* clazz) {
	return $of($alloc(Test7087570$TestMethodData));
}

void Test7087570$TestMethodData::init$($Class* clazz, $String* name, $MethodType* methodType, $Class* declaringClass, int32_t referenceKind) {
	$set(this, clazz, clazz);
	$set(this, name, name);
	$set(this, methodType, methodType);
	$set(this, declaringClass, declaringClass);
	this->referenceKind = referenceKind;
}

Test7087570$TestMethodData::Test7087570$TestMethodData() {
}

$Class* Test7087570$TestMethodData::load$($String* name, bool initialize) {
	$loadClass(Test7087570$TestMethodData, name, initialize, &_Test7087570$TestMethodData_ClassInfo_, allocate$Test7087570$TestMethodData);
	return class$;
}

$Class* Test7087570$TestMethodData::class$ = nullptr;