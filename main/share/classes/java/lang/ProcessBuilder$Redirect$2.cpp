#include <java/lang/ProcessBuilder$Redirect$2.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <jcpp.h>

#undef INHERIT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

void ProcessBuilder$Redirect$2::init$() {
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$2::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::INHERIT;
}

$String* ProcessBuilder$Redirect$2::toString() {
	return $$nc(type())->toString();
}

ProcessBuilder$Redirect$2::ProcessBuilder$Redirect$2() {
}

$Class* ProcessBuilder$Redirect$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessBuilder$Redirect$2, init$, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$2, toString, $String*)},
		{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$2, type, $ProcessBuilder$Redirect$Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessBuilder$Redirect",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.lang.ProcessBuilder$Redirect$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessBuilder$Redirect$2",
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
	$loadClass(ProcessBuilder$Redirect$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessBuilder$Redirect$2);
	});
	return class$;
}

$Class* ProcessBuilder$Redirect$2::class$ = nullptr;

	} // lang
} // java