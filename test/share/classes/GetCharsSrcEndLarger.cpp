#include <GetCharsSrcEndLarger.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;

void GetCharsSrcEndLarger::init$() {
}

void GetCharsSrcEndLarger::main($StringArray* args) {
	$useLocalObjectStack();
	bool exceptionOccurred = false;
	try {
		$$new($StringBuffer, "abc"_s)->getChars(1, 0, $$new($chars, 10), 0);
	} catch ($StringIndexOutOfBoundsException& sioobe) {
		exceptionOccurred = true;
	}
	if (!exceptionOccurred) {
		$throwNew($Exception, "StringBuffer.getChars() must throw an exception if srcBegin > srcEnd"_s);
	}
}

GetCharsSrcEndLarger::GetCharsSrcEndLarger() {
}

$Class* GetCharsSrcEndLarger::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetCharsSrcEndLarger, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetCharsSrcEndLarger, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"GetCharsSrcEndLarger",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GetCharsSrcEndLarger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCharsSrcEndLarger);
	});
	return class$;
}

$Class* GetCharsSrcEndLarger::class$ = nullptr;