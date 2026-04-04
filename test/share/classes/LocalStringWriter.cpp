#include <LocalStringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void LocalStringWriter::init$() {
	$Writer::init$();
	$set(this, buf, $new($StringBuffer));
	$set(this, lock, this->buf);
}

void LocalStringWriter::write($chars* cbuf, int32_t off, int32_t len) {
	if ((off < 0) || (off > $nc(cbuf)->length) || (len < 0) || ((off + len) > $nc(cbuf)->length) || ((off + len) < 0)) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return;
	}
	$nc(this->buf)->append(cbuf, off, len);
}

void LocalStringWriter::write($String* str) {
	$nc(this->buf)->append(str);
}

$String* LocalStringWriter::toString() {
	return $nc(this->buf)->toString();
}

void LocalStringWriter::flush() {
}

void LocalStringWriter::close() {
}

LocalStringWriter::LocalStringWriter() {
}

$Class* LocalStringWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buf", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(LocalStringWriter, buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocalStringWriter, init$, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(LocalStringWriter, close, void)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(LocalStringWriter, flush, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalStringWriter, toString, $String*)},
		{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(LocalStringWriter, write, void, $chars*, int32_t, int32_t)},
		{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LocalStringWriter, write, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LocalStringWriter",
		"java.io.Writer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocalStringWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LocalStringWriter));
	});
	return class$;
}

$Class* LocalStringWriter::class$ = nullptr;