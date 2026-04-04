#include <EOF.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

#undef EOF

using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void EOF::init$() {
}

void EOF::main($StringArray* args) {
	$useLocalObjectStack();
	$var($bytes, buf, $new($bytes, 100));
	int32_t n = 0;
	$var($String, dir, $System::getProperty("test.src"_s, "."_s));
	$var($RandomAccessFile, raf, $new($RandomAccessFile, $$new($File, dir, "EOF.java"_s), "r"_s));
	$var($Throwable, var$0, nullptr);
	try {
		for (;;) {
			n = raf->read(buf, 0, buf->length);
			if (n <= 0) {
				break;
			}
		}
		if (n != -1) {
			$throwNew($RuntimeException, $$str({"Expected -1 for EOF, got "_s, $$str(n)}));
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		raf->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

EOF::EOF() {
}

$Class* EOF::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EOF, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EOF, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EOF",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EOF, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EOF);
	});
	return class$;
}

$Class* EOF::class$ = nullptr;