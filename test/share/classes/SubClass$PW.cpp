#include <SubClass$PW.h>
#include <SubClass.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void SubClass$PW::init$($Writer* out) {
	$PrintWriter::init$(out);
}

void SubClass$PW::println() {
	try {
		$nc(this->out)->write("[EOL]"_s);
	} catch ($IOException& x) {
		setError();
	}
	$PrintWriter::println();
}

SubClass$PW::SubClass$PW() {
}

$Class* SubClass$PW::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Writer;)V", nullptr, 0, $method(SubClass$PW, init$, void, $Writer*)},
		{"println", "()V", nullptr, $PUBLIC, $virtualMethod(SubClass$PW, println, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SubClass$PW", "SubClass", "PW", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SubClass$PW",
		"java.io.PrintWriter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SubClass"
	};
	$loadClass(SubClass$PW, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SubClass$PW));
	});
	return class$;
}

$Class* SubClass$PW::class$ = nullptr;