#include <java/lang/ProcessEnvironment$ExternalData.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ProcessEnvironment.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;

namespace java {
	namespace lang {

$FieldInfo _ProcessEnvironment$ExternalData_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(ProcessEnvironment$ExternalData, str)},
	{"bytes", "[B", nullptr, $PROTECTED | $FINAL, $field(ProcessEnvironment$ExternalData, bytes)},
	{}
};

$MethodInfo _ProcessEnvironment$ExternalData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(static_cast<void(ProcessEnvironment$ExternalData::*)($String*,$bytes*)>(&ProcessEnvironment$ExternalData::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBytes", "()[B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessEnvironment$ExternalData_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$ExternalData", "java.lang.ProcessEnvironment", "ExternalData", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$ExternalData_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.ProcessEnvironment$ExternalData",
	"java.lang.Object",
	nullptr,
	_ProcessEnvironment$ExternalData_FieldInfo_,
	_ProcessEnvironment$ExternalData_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessEnvironment$ExternalData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$ExternalData($Class* clazz) {
	return $of($alloc(ProcessEnvironment$ExternalData));
}

void ProcessEnvironment$ExternalData::init$($String* str, $bytes* bytes) {
	$set(this, str, str);
	$set(this, bytes, bytes);
}

$bytes* ProcessEnvironment$ExternalData::getBytes() {
	return this->bytes;
}

$String* ProcessEnvironment$ExternalData::toString() {
	return this->str;
}

bool ProcessEnvironment$ExternalData::equals(Object$* o) {
	bool var$0 = $instanceOf(ProcessEnvironment$ExternalData, o);
	if (var$0) {
		$var($bytes, var$1, getBytes());
		var$0 = $ProcessEnvironment::arrayEquals(var$1, $($nc(($cast(ProcessEnvironment$ExternalData, o)))->getBytes()));
	}
	return var$0;
}

int32_t ProcessEnvironment$ExternalData::hashCode() {
	return $ProcessEnvironment::arrayHash($(getBytes()));
}

ProcessEnvironment$ExternalData::ProcessEnvironment$ExternalData() {
}

$Class* ProcessEnvironment$ExternalData::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$ExternalData, name, initialize, &_ProcessEnvironment$ExternalData_ClassInfo_, allocate$ProcessEnvironment$ExternalData);
	return class$;
}

$Class* ProcessEnvironment$ExternalData::class$ = nullptr;

	} // lang
} // java