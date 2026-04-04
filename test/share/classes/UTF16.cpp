#include <UTF16.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

#undef UTF16

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$bytes* UTF16::array = nullptr;

void UTF16::init$() {
}

void UTF16::go($String* cs) {
	$init(UTF16);
	$useLocalObjectStack();
	$var($InputStream, is, $new($ByteArrayInputStream, UTF16::array));
	$var($Reader, r, $new($InputStreamReader, is, "UTF-16LE"_s));
	r->read();
}

void UTF16::main($StringArray* args) {
	$init(UTF16);
	go("UTF-16"_s);
	go("UTF-16LE"_s);
	go("UTF-16BE"_s);
}

void UTF16::clinit$($Class* clazz) {
	$assignStatic(UTF16::array, $new($bytes, 20000));
}

UTF16::UTF16() {
}

$Class* UTF16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[B", nullptr, $PRIVATE | $STATIC, $staticField(UTF16, array)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UTF16, init$, void)},
		{"go", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UTF16, go, void, $String*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UTF16, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UTF16",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UTF16, name, initialize, &classInfo$$, UTF16::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UTF16);
	});
	return class$;
}

$Class* UTF16::class$ = nullptr;