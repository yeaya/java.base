#include <ReadLine$BoundedReader.h>

#include <ReadLine.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _ReadLine$BoundedReader_FieldInfo_[] = {
	{"content", "[C", nullptr, $PRIVATE, $field(ReadLine$BoundedReader, content)},
	{"limit", "I", nullptr, $PRIVATE, $field(ReadLine$BoundedReader, limit)},
	{"pos", "I", nullptr, $PRIVATE, $field(ReadLine$BoundedReader, pos)},
	{}
};

$MethodInfo _ReadLine$BoundedReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ReadLine$BoundedReader, init$, void, $String*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ReadLine$BoundedReader, close, void)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ReadLine$BoundedReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(ReadLine$BoundedReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _ReadLine$BoundedReader_InnerClassesInfo_[] = {
	{"ReadLine$BoundedReader", "ReadLine", "BoundedReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReadLine$BoundedReader_ClassInfo_ = {
	$ACC_SUPER,
	"ReadLine$BoundedReader",
	"java.io.Reader",
	nullptr,
	_ReadLine$BoundedReader_FieldInfo_,
	_ReadLine$BoundedReader_MethodInfo_,
	nullptr,
	nullptr,
	_ReadLine$BoundedReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadLine"
};

$Object* allocate$ReadLine$BoundedReader($Class* clazz) {
	return $of($alloc(ReadLine$BoundedReader));
}

void ReadLine$BoundedReader::init$($String* content) {
	$Reader::init$();
	this->pos = 0;
	this->limit = $nc(content)->length();
	$set(this, content, $new($chars, this->limit));
	content->getChars(0, this->limit, this->content, 0);
}

int32_t ReadLine$BoundedReader::read() {
	if (this->pos >= this->limit) {
		$throwNew($RuntimeException, "Read past limit"_s);
	}
	return $nc(this->content)->get(this->pos++);
}

int32_t ReadLine$BoundedReader::read($chars* buf, int32_t offset, int32_t length) {
	int32_t oldPos = this->pos;
	for (int32_t i = offset; i < length; ++i) {
		$nc(buf)->set(i, (char16_t)read());
	}
	return (this->pos - oldPos);
}

void ReadLine$BoundedReader::close() {
}

ReadLine$BoundedReader::ReadLine$BoundedReader() {
}

$Class* ReadLine$BoundedReader::load$($String* name, bool initialize) {
	$loadClass(ReadLine$BoundedReader, name, initialize, &_ReadLine$BoundedReader_ClassInfo_, allocate$ReadLine$BoundedReader);
	return class$;
}

$Class* ReadLine$BoundedReader::class$ = nullptr;