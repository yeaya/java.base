#include <TinyBuffers.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channels = ::java::nio::channels::Channels;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;

$FieldInfo _TinyBuffers_FieldInfo_[] = {
	{"cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $staticField(TinyBuffers, cs)},
	{}
};

$MethodInfo _TinyBuffers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TinyBuffers::*)()>(&TinyBuffers::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TinyBuffers::main)), "java.lang.Exception"},
	{"test", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&TinyBuffers::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _TinyBuffers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TinyBuffers",
	"java.lang.Object",
	nullptr,
	_TinyBuffers_FieldInfo_,
	_TinyBuffers_MethodInfo_
};

$Object* allocate$TinyBuffers($Class* clazz) {
	return $of($alloc(TinyBuffers));
}

$Charset* TinyBuffers::cs = nullptr;

void TinyBuffers::init$() {
}

void TinyBuffers::test(int32_t sz) {
	$init(TinyBuffers);
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayInputStream, bis, $new($ByteArrayInputStream, $$new($bytes, 100)));
	$var($ReadableByteChannel, ch, $Channels::newChannel(static_cast<$InputStream*>(bis)));
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

void clinit$TinyBuffers($Class* class$) {
	$assignStatic(TinyBuffers::cs, $Charset::forName("UTF-16"_s));
}

TinyBuffers::TinyBuffers() {
}

$Class* TinyBuffers::load$($String* name, bool initialize) {
	$loadClass(TinyBuffers, name, initialize, &_TinyBuffers_ClassInfo_, clinit$TinyBuffers, allocate$TinyBuffers);
	return class$;
}

$Class* TinyBuffers::class$ = nullptr;