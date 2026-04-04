#include <SetLength.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void SetLength::init$() {
}

void SetLength::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($StringBuffer, active, $new($StringBuffer));
	active->append("first one"_s);
	$var($String, a, active->toString());
	active->setLength(0);
	active->append("second"_s);
	$var($String, b, active->toString());
	active->setLength(0);
	$nc($System::out)->println($$str({"first: "_s, a}));
	$System::out->println($$str({"second: "_s, b}));
	if (!a->equals("first one"_s)) {
		$throwNew($Exception, "StringBuffer.setLength() overwrote string"_s);
	}
}

SetLength::SetLength() {
}

$Class* SetLength::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SetLength, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SetLength, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SetLength",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SetLength, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SetLength);
	});
	return class$;
}

$Class* SetLength::class$ = nullptr;