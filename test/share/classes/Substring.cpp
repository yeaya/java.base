#include <Substring.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

void Substring::init$() {
}

void Substring::main($StringArray* args) {
	$useLocalObjectStack();
	$var($StringBuffer, buffer, $new($StringBuffer));
	buffer->append("Guten Morgen!"_s);
	if ($$nc(buffer->substring(0))->length() != 13) {
		$throwNew($RuntimeException);
	}
}

Substring::Substring() {
}

$Class* Substring::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Substring, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Substring, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Substring",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Substring, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Substring);
	});
	return class$;
}

$Class* Substring::class$ = nullptr;