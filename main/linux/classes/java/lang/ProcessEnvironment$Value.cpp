#include <java/lang/ProcessEnvironment$Value.h>

#include <java/lang/ProcessEnvironment$ExternalData.h>
#include <java/lang/ProcessEnvironment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $ProcessEnvironment$ExternalData = ::java::lang::ProcessEnvironment$ExternalData;

namespace java {
	namespace lang {

$MethodInfo _ProcessEnvironment$Value_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(static_cast<void(ProcessEnvironment$Value::*)($String*,$bytes*)>(&ProcessEnvironment$Value::init$))},
	{"compareTo", "(Ljava/lang/ProcessEnvironment$Value;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Value*(*)($String*)>(&ProcessEnvironment$Value::valueOf))},
	{"valueOf", "([B)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Value*(*)($bytes*)>(&ProcessEnvironment$Value::valueOf))},
	{"valueOfQueryOnly", "(Ljava/lang/Object;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Value*(*)(Object$*)>(&ProcessEnvironment$Value::valueOfQueryOnly))},
	{"valueOfQueryOnly", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Value*(*)($String*)>(&ProcessEnvironment$Value::valueOfQueryOnly))},
	{}
};

$InnerClassInfo _ProcessEnvironment$Value_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$Value", "java.lang.ProcessEnvironment", "Value", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$ExternalData", "java.lang.ProcessEnvironment", "ExternalData", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$Value_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$Value",
	"java.lang.ProcessEnvironment$ExternalData",
	"java.lang.Comparable",
	nullptr,
	_ProcessEnvironment$Value_MethodInfo_,
	"Ljava/lang/ProcessEnvironment$ExternalData;Ljava/lang/Comparable<Ljava/lang/ProcessEnvironment$Value;>;",
	nullptr,
	_ProcessEnvironment$Value_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$Value($Class* clazz) {
	return $of($alloc(ProcessEnvironment$Value));
}

$String* ProcessEnvironment$Value::toString() {
	 return this->$ProcessEnvironment$ExternalData::toString();
}

int32_t ProcessEnvironment$Value::hashCode() {
	 return this->$ProcessEnvironment$ExternalData::hashCode();
}

$Object* ProcessEnvironment$Value::clone() {
	 return this->$ProcessEnvironment$ExternalData::clone();
}

void ProcessEnvironment$Value::finalize() {
	this->$ProcessEnvironment$ExternalData::finalize();
}

void ProcessEnvironment$Value::init$($String* str, $bytes* bytes) {
	$ProcessEnvironment$ExternalData::init$(str, bytes);
}

ProcessEnvironment$Value* ProcessEnvironment$Value::valueOfQueryOnly(Object$* str) {
	$init(ProcessEnvironment$Value);
	return valueOfQueryOnly($cast($String, str));
}

ProcessEnvironment$Value* ProcessEnvironment$Value::valueOfQueryOnly($String* str) {
	$init(ProcessEnvironment$Value);
	return $new(ProcessEnvironment$Value, str, $($nc(str)->getBytes()));
}

ProcessEnvironment$Value* ProcessEnvironment$Value::valueOf($String* str) {
	$init(ProcessEnvironment$Value);
	$ProcessEnvironment::validateValue(str);
	return valueOfQueryOnly(str);
}

ProcessEnvironment$Value* ProcessEnvironment$Value::valueOf($bytes* bytes) {
	$init(ProcessEnvironment$Value);
	return $new(ProcessEnvironment$Value, $$new($String, bytes), bytes);
}

int32_t ProcessEnvironment$Value::compareTo(ProcessEnvironment$Value* value) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, var$0, getBytes());
	return $ProcessEnvironment::arrayCompare(var$0, $($nc(value)->getBytes()));
}

bool ProcessEnvironment$Value::equals(Object$* o) {
	return $instanceOf(ProcessEnvironment$Value, o) && $ProcessEnvironment$ExternalData::equals(o);
}

int32_t ProcessEnvironment$Value::compareTo(Object$* value) {
	return this->compareTo($cast(ProcessEnvironment$Value, value));
}

ProcessEnvironment$Value::ProcessEnvironment$Value() {
}

$Class* ProcessEnvironment$Value::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$Value, name, initialize, &_ProcessEnvironment$Value_ClassInfo_, allocate$ProcessEnvironment$Value);
	return class$;
}

$Class* ProcessEnvironment$Value::class$ = nullptr;

	} // lang
} // java