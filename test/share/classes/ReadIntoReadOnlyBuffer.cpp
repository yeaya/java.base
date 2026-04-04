#include <ReadIntoReadOnlyBuffer.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/ReadOnlyBufferException.h>
#include <jcpp.h>

#undef THE_STRING

using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $ReadOnlyBufferException = ::java::nio::ReadOnlyBufferException;

$String* ReadIntoReadOnlyBuffer::THE_STRING = nullptr;

void ReadIntoReadOnlyBuffer::init$() {
}

void ReadIntoReadOnlyBuffer::main($StringArray* args) {
	$init(ReadIntoReadOnlyBuffer);
	$useLocalObjectStack();
	$var($CharBuffer, buf, $$nc($CharBuffer::allocate(8))->asReadOnlyBuffer());
	$var($StringReader, r, $new($StringReader, ReadIntoReadOnlyBuffer::THE_STRING));
	read(r, buf);
	$assign(buf, $$nc($$nc($ByteBuffer::allocateDirect(16))->asCharBuffer())->asReadOnlyBuffer());
	$assign(r, $new($StringReader, ReadIntoReadOnlyBuffer::THE_STRING));
	read(r, buf);
}

void ReadIntoReadOnlyBuffer::read($Reader* r, $CharBuffer* b) {
	$init(ReadIntoReadOnlyBuffer);
	$useLocalObjectStack();
	try {
		$nc(r)->read(b);
		$throwNew($RuntimeException, "ReadOnlyBufferException expected"_s);
	} catch ($ReadOnlyBufferException& expected) {
	}
	$var($chars, c, $new($chars, 3));
	int32_t n = $nc(r)->read(c);
	if (n != c->length) {
		$throwNew($RuntimeException, $$str({"Expected "_s, $$str(c->length), ", got "_s, $$str(n)}));
	}
	$var($String, s, $new($String, c));
	if (!s->equals(ReadIntoReadOnlyBuffer::THE_STRING)) {
		$throwNew($RuntimeException, $$str({"Expected "_s, ReadIntoReadOnlyBuffer::THE_STRING, ", got "_s, s}));
	}
}

ReadIntoReadOnlyBuffer::ReadIntoReadOnlyBuffer() {
}

void ReadIntoReadOnlyBuffer::clinit$($Class* clazz) {
	$assignStatic(ReadIntoReadOnlyBuffer::THE_STRING, "123"_s);
}

$Class* ReadIntoReadOnlyBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"THE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ReadIntoReadOnlyBuffer, THE_STRING)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadIntoReadOnlyBuffer, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadIntoReadOnlyBuffer, main, void, $StringArray*), "java.lang.Exception"},
		{"read", "(Ljava/io/Reader;Ljava/nio/CharBuffer;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadIntoReadOnlyBuffer, read, void, $Reader*, $CharBuffer*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadIntoReadOnlyBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadIntoReadOnlyBuffer, name, initialize, &classInfo$$, ReadIntoReadOnlyBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReadIntoReadOnlyBuffer);
	});
	return class$;
}

$Class* ReadIntoReadOnlyBuffer::class$ = nullptr;