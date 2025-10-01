#include <java/io/FilterReader.h>

#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _FilterReader_FieldInfo_[] = {
	{"in", "Ljava/io/Reader;", nullptr, $PROTECTED, $field(FilterReader, in)},
	{}
};

$MethodInfo _FilterReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PROTECTED, $method(static_cast<void(FilterReader::*)($Reader*)>(&FilterReader::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FilterReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.io.FilterReader",
	"java.io.Reader",
	nullptr,
	_FilterReader_FieldInfo_,
	_FilterReader_MethodInfo_
};

$Object* allocate$FilterReader($Class* clazz) {
	return $of($alloc(FilterReader));
}

void FilterReader::init$($Reader* in) {
	$Reader::init$(in);
	$set(this, in, in);
}

int32_t FilterReader::read() {
	return $nc(this->in)->read();
}

int32_t FilterReader::read($chars* cbuf, int32_t off, int32_t len) {
	return $nc(this->in)->read(cbuf, off, len);
}

int64_t FilterReader::skip(int64_t n) {
	return $nc(this->in)->skip(n);
}

bool FilterReader::ready() {
	return $nc(this->in)->ready();
}

bool FilterReader::markSupported() {
	return $nc(this->in)->markSupported();
}

void FilterReader::mark(int32_t readAheadLimit) {
	$nc(this->in)->mark(readAheadLimit);
}

void FilterReader::reset() {
	$nc(this->in)->reset();
}

void FilterReader::close() {
	$nc(this->in)->close();
}

FilterReader::FilterReader() {
}

$Class* FilterReader::load$($String* name, bool initialize) {
	$loadClass(FilterReader, name, initialize, &_FilterReader_ClassInfo_, allocate$FilterReader);
	return class$;
}

$Class* FilterReader::class$ = nullptr;

	} // io
} // java