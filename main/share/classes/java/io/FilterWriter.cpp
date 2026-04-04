#include <java/io/FilterWriter.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void FilterWriter::init$($Writer* out) {
	$Writer::init$(out);
	$set(this, out, out);
}

void FilterWriter::write(int32_t c) {
	$nc(this->out)->write(c);
}

void FilterWriter::write($chars* cbuf, int32_t off, int32_t len) {
	$nc(this->out)->write(cbuf, off, len);
}

void FilterWriter::write($String* str, int32_t off, int32_t len) {
	$nc(this->out)->write(str, off, len);
}

void FilterWriter::flush() {
	$nc(this->out)->flush();
}

void FilterWriter::close() {
	$nc(this->out)->close();
}

FilterWriter::FilterWriter() {
}

$Class* FilterWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(FilterWriter, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $method(FilterWriter, init$, void, $Writer*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(FilterWriter, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(FilterWriter, flush, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(FilterWriter, write, void, int32_t), "java.io.IOException"},
		{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(FilterWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(FilterWriter, write, void, $String*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.io.FilterWriter",
		"java.io.Writer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FilterWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilterWriter));
	});
	return class$;
}

$Class* FilterWriter::class$ = nullptr;

	} // io
} // java