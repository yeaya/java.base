#include <java/lang/invoke/InvokerBytecodeGenerator$ClassData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _InvokerBytecodeGenerator$ClassData_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(InvokerBytecodeGenerator$ClassData, name$)},
	{"desc", "Ljava/lang/String;", nullptr, $FINAL, $field(InvokerBytecodeGenerator$ClassData, desc)},
	{"value", "Ljava/lang/Object;", nullptr, $FINAL, $field(InvokerBytecodeGenerator$ClassData, value)},
	{}
};

$MethodInfo _InvokerBytecodeGenerator$ClassData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(InvokerBytecodeGenerator$ClassData::*)($String*,$String*,Object$*)>(&InvokerBytecodeGenerator$ClassData::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InvokerBytecodeGenerator$ClassData_InnerClassesInfo_[] = {
	{"java.lang.invoke.InvokerBytecodeGenerator$ClassData", "java.lang.invoke.InvokerBytecodeGenerator", "ClassData", $STATIC},
	{}
};

$ClassInfo _InvokerBytecodeGenerator$ClassData_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.InvokerBytecodeGenerator$ClassData",
	"java.lang.Object",
	nullptr,
	_InvokerBytecodeGenerator$ClassData_FieldInfo_,
	_InvokerBytecodeGenerator$ClassData_MethodInfo_,
	nullptr,
	nullptr,
	_InvokerBytecodeGenerator$ClassData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InvokerBytecodeGenerator"
};

$Object* allocate$InvokerBytecodeGenerator$ClassData($Class* clazz) {
	return $of($alloc(InvokerBytecodeGenerator$ClassData));
}

void InvokerBytecodeGenerator$ClassData::init$($String* name, $String* desc, Object$* value) {
	$set(this, name$, name);
	$set(this, desc, desc);
	$set(this, value, value);
}

$String* InvokerBytecodeGenerator$ClassData::name() {
	return this->name$;
}

$String* InvokerBytecodeGenerator$ClassData::toString() {
	return $str({this->name$, ",value="_s, this->value});
}

InvokerBytecodeGenerator$ClassData::InvokerBytecodeGenerator$ClassData() {
}

$Class* InvokerBytecodeGenerator$ClassData::load$($String* name, bool initialize) {
	$loadClass(InvokerBytecodeGenerator$ClassData, name, initialize, &_InvokerBytecodeGenerator$ClassData_ClassInfo_, allocate$InvokerBytecodeGenerator$ClassData);
	return class$;
}

$Class* InvokerBytecodeGenerator$ClassData::class$ = nullptr;

		} // invoke
	} // lang
} // java