#include <java/lang/ProcessEnvironment$Variable.h>
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
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PROTECTED, $method(ProcessEnvironment$Variable, init$, void, $String*, $bytes*)},
		{"compareTo", "(Ljava/lang/ProcessEnvironment$Variable;)I", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$Variable, compareTo, int32_t, ProcessEnvironment$Variable*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ProcessEnvironment$Variable, compareTo, int32_t, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProcessEnvironment$Variable, equals, bool, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"valueOf", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Variable, valueOf, ProcessEnvironment$Variable*, $String*)},
		{"valueOf", "([B)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Variable, valueOf, ProcessEnvironment$Variable*, $bytes*)},
		{"valueOfQueryOnly", "(Ljava/lang/Object;)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Variable, valueOfQueryOnly, ProcessEnvironment$Variable*, Object$*)},
		{"valueOfQueryOnly", "(Ljava/lang/String;)Ljava/lang/ProcessEnvironment$Variable;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessEnvironment$Variable, valueOfQueryOnly, ProcessEnvironment$Variable*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessEnvironment$Variable", "java.lang.ProcessEnvironment", "Variable", $PRIVATE | $STATIC},
		{"java.lang.ProcessEnvironment$ExternalData", "java.lang.ProcessEnvironment", "ExternalData", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessEnvironment$Variable",
		"java.lang.ProcessEnvironment$ExternalData",
		"java.lang.Comparable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/ProcessEnvironment$ExternalData;Ljava/lang/Comparable<Ljava/lang/ProcessEnvironment$Variable;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessEnvironment"
	};
	$loadClass(ProcessEnvironment$Variable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ProcessEnvironment$Variable));
	});
	return class$;
}

$Class* ProcessEnvironment$Variable::class$ = nullptr;

	} // lang
} // java