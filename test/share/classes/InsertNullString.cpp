#include <InsertNullString.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;

void InsertNullString::init$() {
}

void InsertNullString::main($StringArray* args) {
	$useLocalObjectStack();
	$var($StringBuffer, s, $new($StringBuffer, "FOOBAR"_s));
	try {
		$var($String, nullstr, nullptr);
		s->insert(3, nullstr);
		if (!$(s->toString())->equals("FOOnullBAR"_s)) {
			$throwNew($Exception, "StringBuffer.insert() did not insert!"_s);
		}
	} catch ($NullPointerException& npe) {
		$throwNew($Exception, "StringBuffer.insert() of null String reference threw a NullPointerException"_s);
	}
}

InsertNullString::InsertNullString() {
}

$Class* InsertNullString::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InsertNullString, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InsertNullString, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InsertNullString",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InsertNullString, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InsertNullString);
	});
	return class$;
}

$Class* InsertNullString::class$ = nullptr;