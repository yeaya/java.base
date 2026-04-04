#include <ReadToArray.h>
#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
#include <jcpp.h>

using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadToArray::init$() {
}

void ReadToArray::main($StringArray* args) {
	$useLocalObjectStack();
	$var($PipedWriter, pw, $new($PipedWriter));
	$var($PipedReader, pr, $new($PipedReader, pw));
	$var($chars, cbuf, $new($chars, {
		u'a',
		u'a',
		u'a',
		u'a'
	}));
	pw->write(u'b');
	pr->read(cbuf, 2, 1);
	if (cbuf->get(2) != u'b') {
		$throwNew($Exception, "Read character to wrong position: 2nd character should be b"_s);
	}
}

ReadToArray::ReadToArray() {
}

$Class* ReadToArray::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadToArray, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadToArray, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadToArray",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadToArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadToArray);
	});
	return class$;
}

$Class* ReadToArray::class$ = nullptr;