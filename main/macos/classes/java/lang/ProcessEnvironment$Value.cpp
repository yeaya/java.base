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
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(ProcessEnvironment$Value, init$, void, $String*, $bytes*)},
		{"compareTo", "(Ljava/lang/ProcessEnvironment$Value;)I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$Value, compareTo, int32_t, ProcessEnvironment$Value*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessEnvironment$Value, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$Value, equals, bool, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Value, valueOf, ProcessEnvironment$Value*, $String*)},
		{"valueOf", "([B)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Value, valueOf, ProcessEnvironment$Value*, $bytes*)},
		{"valueOfQueryOnly", "(Ljava/lang/Object;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Value, valueOfQueryOnly, ProcessEnvironment$Value*, Object$*)},
		{"valueOfQueryOnly", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Value;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Value, valueOfQueryOnly, ProcessEnvironment$Value*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$Value", "java.lang.ProcessEnvironment", "Value", $PRIVATE | $STATIC},
		{"java.lang.ProcessEnvironment$ExternalData", "java.lang.ProcessEnvironment", "ExternalData", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$Value",
		"java.lang.ProcessEnvironment$ExternalData",
		"java.lang.Comparable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/ProcessEnvironment$ExternalData;Ljava/lang/Comparable<Ljava/lang/ProcessEnvironment$Value;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$Value, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProcessEnvironment$Value));
	});
	return class$;
}

$Class* ProcessEnvironment$Value::class$ = nullptr;

	} // lang
} // java