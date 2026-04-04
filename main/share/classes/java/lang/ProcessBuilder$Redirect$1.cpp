#include <java/lang/ProcessBuilder$Redirect$1.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <jcpp.h>

#undef PIPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

void ProcessBuilder$Redirect$1::init$() {
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$1::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::PIPE;
}

$String* ProcessBuilder$Redirect$1::toString() {
	return $$nc(type())->toString();
}

ProcessBuilder$Redirect$1::ProcessBuilder$Redirect$1() {
}

$Class* ProcessBuilder$Redirect$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessBuilder$Redirect$1, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$1, toString, $String*)},
		{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$1, type, $ProcessBuilder$Redirect$Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessBuilder$Redirect",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.lang.ProcessBuilder$Redirect$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessBuilder$Redirect$1",
		"java.lang.ProcessBuilder$Redirect",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessBuilder"
	};
	$loadClass(ProcessBuilder$Redirect$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessBuilder$Redirect$1);
	});
	return class$;
}

$Class* ProcessBuilder$Redirect$1::class$ = nullptr;

	} // lang
} // java