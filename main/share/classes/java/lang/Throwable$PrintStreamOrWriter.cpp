#include <java/lang/Throwable$PrintStreamOrWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void Throwable$PrintStreamOrWriter::init$() {
}

Throwable$PrintStreamOrWriter::Throwable$PrintStreamOrWriter() {
}

$Class* Throwable$PrintStreamOrWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Throwable$PrintStreamOrWriter, init$, void)},
		{"lock", "()Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(Throwable$PrintStreamOrWriter, lock, $Object*)},
		{"println", "(Ljava/lang/Object;)V", nullptr, $ABSTRACT, $virtualMethod(Throwable$PrintStreamOrWriter, println, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Throwable$PrintStreamOrWriter", "java.lang.Throwable", "PrintStreamOrWriter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.lang.Throwable$PrintStreamOrWriter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Throwable"
	};
	$loadClass(Throwable$PrintStreamOrWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Throwable$PrintStreamOrWriter);
	});
	return class$;
}

$Class* Throwable$PrintStreamOrWriter::class$ = nullptr;

	} // lang
} // java