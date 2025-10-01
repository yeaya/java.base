#include <java/io/FilterWriter.h>

#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FilterWriter_FieldInfo_[] = {
	{"out", "Ljava/io/Writer;", nullptr, $PROTECTED, $field(FilterWriter, out)},
	{}
};

$MethodInfo _FilterWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PROTECTED, $method(static_cast<void(FilterWriter::*)($Writer*)>(&FilterWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FilterWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.FilterWriter",
	"java.io.Writer",
	nullptr,
	_FilterWriter_FieldInfo_,
	_FilterWriter_MethodInfo_
};

$Object* allocate$FilterWriter($Class* clazz) {
	return $of($alloc(FilterWriter));
}

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
	$loadClass(FilterWriter, name, initialize, &_FilterWriter_ClassInfo_, allocate$FilterWriter);
	return class$;
}

$Class* FilterWriter::class$ = nullptr;

	} // io
} // java