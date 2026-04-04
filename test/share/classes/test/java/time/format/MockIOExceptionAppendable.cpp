#include <test/java/time/format/MockIOExceptionAppendable.h>
#include <java/io/IOException.h>
#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace test {
	namespace java {
		namespace time {
			namespace format {

void MockIOExceptionAppendable::init$() {
}

$Appendable* MockIOExceptionAppendable::append($CharSequence* csq) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

$Appendable* MockIOExceptionAppendable::append(char16_t c) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

$Appendable* MockIOExceptionAppendable::append($CharSequence* csq, int32_t start, int32_t end) {
	$throwNew($IOException);
	$shouldNotReachHere();
}

MockIOExceptionAppendable::MockIOExceptionAppendable() {
}

$Class* MockIOExceptionAppendable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MockIOExceptionAppendable, init$, void)},
		{"append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(MockIOExceptionAppendable, append, $Appendable*, $CharSequence*), "java.io.IOException"},
		{"append", "(C)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(MockIOExceptionAppendable, append, $Appendable*, char16_t), "java.io.IOException"},
		{"append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", nullptr, $PUBLIC, $virtualMethod(MockIOExceptionAppendable, append, $Appendable*, $CharSequence*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.java.time.format.MockIOExceptionAppendable",
		"java.lang.Object",
		"java.lang.Appendable",
		nullptr,
		methodInfos$$
	};
	$loadClass(MockIOExceptionAppendable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MockIOExceptionAppendable);
	});
	return class$;
}

$Class* MockIOExceptionAppendable::class$ = nullptr;

			} // format
		} // time
	} // java
} // test