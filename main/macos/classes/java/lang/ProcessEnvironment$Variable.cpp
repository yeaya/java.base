#include <java/lang/ProcessEnvironment$Variable.h>

#include <java/lang/ProcessEnvironment$ExternalData.h>
#include <java/lang/ProcessEnvironment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessEnvironment = ::java::lang::ProcessEnvironment;
using $ProcessEnvironment$ExternalData = ::java::lang::ProcessEnvironment$ExternalData;

namespace java {
	namespace lang {

$MethodInfo _ProcessEnvironment$Variable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(static_cast<void(ProcessEnvironment$Variable::*)($String*,$bytes*)>(&ProcessEnvironment$Variable::init$))},
	{"compareTo", "(Ljava/lang/ProcessEnvironment$Variable;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Variable*(*)($String*)>(&ProcessEnvironment$Variable::valueOf))},
	{"valueOf", "([B)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Variable*(*)($bytes*)>(&ProcessEnvironment$Variable::valueOf))},
	{"valueOfQueryOnly", "(Ljava/lang/Object;)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Variable*(*)(Object$*)>(&ProcessEnvironment$Variable::valueOfQueryOnly))},
	{"valueOfQueryOnly", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ProcessEnvironment$Variable*(*)($String*)>(&ProcessEnvironment$Variable::valueOfQueryOnly))},
	{}
};

$InnerClassInfo _ProcessEnvironment$Variable_InnerClassesInfo_[] = {
	{"java.lang.ProcessEnvironment$Variable", "java.lang.ProcessEnvironment", "Variable", $PRIVATE | $STATIC},
	{"java.lang.ProcessEnvironment$ExternalData", "java.lang.ProcessEnvironment", "ExternalData", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessEnvironment$Variable_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ProcessEnvironment$Variable",
	"java.lang.ProcessEnvironment$ExternalData",
	"java.lang.Comparable",
	nullptr,
	_ProcessEnvironment$Variable_MethodInfo_,
	"Ljava/lang/ProcessEnvironment$ExternalData;Ljava/lang/Comparable<Ljava/lang/ProcessEnvironment$Variable;>;",
	nullptr,
	_ProcessEnvironment$Variable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ProcessEnvironment"
};

$Object* allocate$ProcessEnvironment$Variable($Class* clazz) {
	return $of($alloc(ProcessEnvironment$Variable));
}

$String* ProcessEnvironment$Variable::toString() {
	 return this->$ProcessEnvironment$ExternalData::toString();
}

int32_t ProcessEnvironment$Variable::hashCode() {
	 return this->$ProcessEnvironment$ExternalData::hashCode();
}

$Object* ProcessEnvironment$Variable::clone() {
	 return this->$ProcessEnvironment$ExternalData::clone();
}

void ProcessEnvironment$Variable::finalize() {
	this->$ProcessEnvironment$ExternalData::finalize();
}

void ProcessEnvironment$Variable::init$($String* str, $bytes* bytes) {
	$ProcessEnvironment$ExternalData::init$(str, bytes);
}

ProcessEnvironment$Variable* ProcessEnvironment$Variable::valueOfQueryOnly(Object$* str) {
	$init(ProcessEnvironment$Variable);
	return valueOfQueryOnly($cast($String, str));
}

ProcessEnvironment$Variable* ProcessEnvironment$Variable::valueOfQueryOnly($String* str) {
	$init(ProcessEnvironment$Variable);
	return $new(ProcessEnvironment$Variable, str, $($nc(str)->getBytes()));
}

ProcessEnvironment$Variable* ProcessEnvironment$Variable::valueOf($String* str) {
	$init(ProcessEnvironment$Variable);
	$ProcessEnvironment::validateVariable(str);
	return valueOfQueryOnly(str);
}

ProcessEnvironment$Variable* ProcessEnvironment$Variable::valueOf($bytes* bytes) {
	$init(ProcessEnvironment$Variable);
	return $new(ProcessEnvironment$Variable, $$new($String, bytes), bytes);
}

int32_t ProcessEnvironment$Variable::compareTo(ProcessEnvironment$Variable* variable) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, var$0, getBytes());
	return $ProcessEnvironment::arrayCompare(var$0, $($nc(variable)->getBytes()));
}

bool ProcessEnvironment$Variable::equals(Object$* o) {
	return $instanceOf(ProcessEnvironment$Variable, o) && $ProcessEnvironment$ExternalData::equals(o);
}

int32_t ProcessEnvironment$Variable::compareTo(Object$* variable) {
	return this->compareTo($cast(ProcessEnvironment$Variable, variable));
}

ProcessEnvironment$Variable::ProcessEnvironment$Variable() {
}

$Class* ProcessEnvironment$Variable::load$($String* name, bool initialize) {
	$loadClass(ProcessEnvironment$Variable, name, initialize, &_ProcessEnvironment$Variable_ClassInfo_, allocate$ProcessEnvironment$Variable);
	return class$;
}

$Class* ProcessEnvironment$Variable::class$ = nullptr;

	} // lang
} // java