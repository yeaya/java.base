#include <java/io/Console$3.h>
#include <java/io/Console.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $Console = ::java::io::Console;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void Console$3::init$($Console* this$0, $Writer* out, bool autoFlush) {
	$set(this, this$0, this$0);
	$PrintWriter::init$(out, autoFlush);
}

void Console$3::close() {
}

Console$3::Console$3() {
}

$Class* Console$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/Console;", nullptr, $FINAL | $SYNTHETIC, $field(Console$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Console;Ljava/io/Writer;Z)V", nullptr, 0, $method(Console$3, init$, void, $Console*, $Writer*, bool)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Console$3, close, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.Console",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.Console$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.Console$3",
		"java.io.PrintWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.Console"
	};
	$loadClass(Console$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Console$3));
	});
	return class$;
}

$Class* Console$3::class$ = nullptr;

	} // io
} // java