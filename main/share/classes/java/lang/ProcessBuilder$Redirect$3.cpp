#include <java/lang/ProcessBuilder$Redirect$3.h>
#include <java/io/File.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <jcpp.h>

#undef NULL_FILE
#undef WRITE

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

void ProcessBuilder$Redirect$3::init$() {
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$3::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::WRITE;
}

$String* ProcessBuilder$Redirect$3::toString() {
	return $$nc(type())->toString();
}

$File* ProcessBuilder$Redirect$3::file() {
	$init($ProcessBuilder$Redirect);
	return $ProcessBuilder$Redirect::NULL_FILE;
}

bool ProcessBuilder$Redirect$3::append() {
	return false;
}

ProcessBuilder$Redirect$3::ProcessBuilder$Redirect$3() {
}

$Class* ProcessBuilder$Redirect$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ProcessBuilder$Redirect$3, init$, void)},
		{"append", "()Z", nullptr, 0, $virtualMethod(ProcessBuilder$Redirect$3, append, bool)},
		{"file", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$3, file, $File*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$3, toString, $String*)},
		{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$3, type, $ProcessBuilder$Redirect$Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessBuilder$Redirect",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.lang.ProcessBuilder$Redirect$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessBuilder$Redirect$3",
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
	$loadClass(ProcessBuilder$Redirect$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessBuilder$Redirect$3);
	});
	return class$;
}

$Class* ProcessBuilder$Redirect$3::class$ = nullptr;

	} // lang
} // java