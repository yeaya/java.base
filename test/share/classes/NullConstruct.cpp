#include <NullConstruct.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

void NullConstruct::init$() {
}

void NullConstruct::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($Reader, in, nullptr);
		$var($StreamTokenizer, st, $new($StreamTokenizer, in));
		$throwNew($Exception, "Failed test: constructor didn\'t catch null input"_s);
	} catch ($NullPointerException& e) {
	}
}

NullConstruct::NullConstruct() {
}

$Class* NullConstruct::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullConstruct, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullConstruct, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullConstruct",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NullConstruct, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullConstruct);
	});
	return class$;
}

$Class* NullConstruct::class$ = nullptr;