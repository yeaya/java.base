#include <Reset.h>
#include <java/io/StreamTokenizer.h>
#include <java/io/StringBufferInputStream.h>
#include <jcpp.h>

using $StreamTokenizer = ::java::io::StreamTokenizer;
using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void Reset::init$() {
}

void Reset::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($StringBufferInputStream, in, $new($StringBufferInputStream, "[ #"_s));
	$var($StreamTokenizer, scan, $new($StreamTokenizer, in));
	scan->nextToken();
	scan->nextToken();
	in->reset();
	int32_t token = scan->nextToken();
	if (token != u'[') {
		$throwNew($Exception, $$str({"Test failed: should get token [, but get "_s, $$str(token)}));
	}
}

Reset::Reset() {
}

$Class* Reset::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Reset, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Reset, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Reset",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Reset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reset);
	});
	return class$;
}

$Class* Reset::class$ = nullptr;