#include <TinyBuffers.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/Reader.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channels = ::java::nio::channels::Channels;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $Charset = ::java::nio::charset::Charset;

$Charset* TinyBuffers::cs = nullptr;

void TinyBuffers::init$() {
}

void TinyBuffers::test(int32_t sz) {
	$init(TinyBuffers);
	$useLocalObjectStack();
	$var($ByteArrayInputStream, bis, $new($ByteArrayInputStream, $$new($bytes, 100)));
	$var($ReadableByteChannel, ch, $Channels::newChannel(bis));
	$var($Reader, r, $Channels::newReader(ch, $($nc(TinyBuffers::cs)->newDecoder()), sz));
	$var($chars, arr, $new($chars, 100));
	$nc($System::out)->println($nc(r)->read(arr, 0, arr->length));
}

void TinyBuffers::main($StringArray* args) {
	$init(TinyBuffers);
	for (int32_t i = -2; i < 10; ++i) {
		test(i);
	}
}

void TinyBuffers::clinit$($Class* clazz) {
	$assignStatic(TinyBuffers::cs, $Charset::forName("UTF-16"_s));
}

TinyBuffers::TinyBuffers() {
}

$Class* TinyBuffers::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $staticField(TinyBuffers, cs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TinyBuffers, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TinyBuffers, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TinyBuffers, test, void, int32_t), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TinyBuffers",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TinyBuffers, name, initialize, &classInfo$$, TinyBuffers::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TinyBuffers);
	});
	return class$;
}

$Class* TinyBuffers::class$ = nullptr;