#include <ReadAhead$LimitedReader.h>

#include <ReadAhead.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ReadAhead$LimitedReader_FieldInfo_[] = {
	{"input", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ReadAhead$LimitedReader, input)},
	{"limit", "I", nullptr, $PRIVATE, $field(ReadAhead$LimitedReader, limit)},
	{"next", "I", nullptr, $PRIVATE, $field(ReadAhead$LimitedReader, next)},
	{}
};

$MethodInfo _ReadAhead$LimitedReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ReadAhead$LimitedReader, init$, void, $String*, int32_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ReadAhead$LimitedReader, close, void)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ReadAhead$LimitedReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(ReadAhead$LimitedReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _ReadAhead$LimitedReader_InnerClassesInfo_[] = {
	{"ReadAhead$LimitedReader", "ReadAhead", "LimitedReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReadAhead$LimitedReader_ClassInfo_ = {
	$ACC_SUPER,
	"ReadAhead$LimitedReader",
	"java.io.Reader",
	nullptr,
	_ReadAhead$LimitedReader_FieldInfo_,
	_ReadAhead$LimitedReader_MethodInfo_,
	nullptr,
	nullptr,
	_ReadAhead$LimitedReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadAhead"
};

$Object* allocate$ReadAhead$LimitedReader($Class* clazz) {
	return $of($alloc(ReadAhead$LimitedReader));
}

void ReadAhead$LimitedReader::init$($String* input, int32_t limit) {
	$Reader::init$();
	this->next = 0;
	$set(this, input, input);
	this->limit = limit;
}

int32_t ReadAhead$LimitedReader::read() {
	if (this->next >= this->limit) {
		$throwNew($IOException, "Attempted to read too far in stream"_s);
	}
	return $nc(this->input)->charAt(this->next++);
}

int32_t ReadAhead$LimitedReader::read($chars* b, int32_t off, int32_t len) {
	int32_t top = off + len;
	int32_t i = 0;
	for (i = off; i < top; ++i) {
		int32_t c = read();
		if (c < 0) {
			break;
		}
		$nc(b)->set(i, (char16_t)c);
	}
	return i - off;
}

void ReadAhead$LimitedReader::close() {
}

ReadAhead$LimitedReader::ReadAhead$LimitedReader() {
}

$Class* ReadAhead$LimitedReader::load$($String* name, bool initialize) {
	$loadClass(ReadAhead$LimitedReader, name, initialize, &_ReadAhead$LimitedReader_ClassInfo_, allocate$ReadAhead$LimitedReader);
	return class$;
}

$Class* ReadAhead$LimitedReader::class$ = nullptr;