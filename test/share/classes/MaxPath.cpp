#include <MaxPath.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

#undef MAX_PATH

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void MaxPath::init$() {
}

void MaxPath::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	int32_t MAX_PATH = 260;
	$var($String, dir, $str({$($$new($File, "."_s)->getAbsolutePath()), "\\"_s}));
	$var($String, padding, "1234567890123456789012345678901234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890012345678900123456789001234567890"_s);
	for (int32_t i = 240 - dir->length(); i < MAX_PATH - dir->length(); ++i) {
		$var($String, longname, $str({dir, $(padding->substring(0, i))}));
		try {
			$var($File, f, $new($File, longname));
			if (f->createNewFile()) {
				bool var$0 = !f->exists();
				if (var$0 || !f->canRead()) {
					$throwNew($RuntimeException, $$str({"Failed at length: "_s, $$str(longname->length())}));
				}
				f->delete$();
			}
		} catch ($IOException& e) {
			$nc($System::out)->println($$str({"Failed at length: "_s, $$str(longname->length())}));
			$throw(e);
		}
	}
}

MaxPath::MaxPath() {
}

$Class* MaxPath::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MaxPath, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MaxPath, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MaxPath",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MaxPath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MaxPath);
	});
	return class$;
}

$Class* MaxPath::class$ = nullptr;