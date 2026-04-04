#include <CharAt.h>
#include <java/lang/CharSequence.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

void CharAt::init$() {
}

void CharAt::main($StringArray* args) {
	$var($CharSequence, cs, $CharBuffer::wrap("foo"_s));
	for (int32_t i = 0; i < $nc(cs)->length(); ++i) {
		$nc($System::err)->print(cs->charAt(i));
	}
	$nc($System::err)->println();
}

CharAt::CharAt() {
}

$Class* CharAt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CharAt, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CharAt, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CharAt",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CharAt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CharAt);
	});
	return class$;
}

$Class* CharAt::class$ = nullptr;