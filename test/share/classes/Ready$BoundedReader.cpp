#include <Ready$BoundedReader.h>

#include <Ready.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Ready = ::Ready;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _Ready$BoundedReader_FieldInfo_[] = {
	{"content", "[C", nullptr, $PRIVATE, $field(Ready$BoundedReader, content)},
	{"limit", "I", nullptr, $PRIVATE, $field(Ready$BoundedReader, limit)},
	{"pos", "I", nullptr, $PRIVATE, $field(Ready$BoundedReader, pos)},
	{}
};

$MethodInfo _Ready$BoundedReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Ready$BoundedReader::*)($String*)>(&Ready$BoundedReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Ready$BoundedReader_InnerClassesInfo_[] = {
	{"Ready$BoundedReader", "Ready", "BoundedReader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Ready$BoundedReader_ClassInfo_ = {
	$ACC_SUPER,
	"Ready$BoundedReader",
	"java.io.Reader",
	nullptr,
	_Ready$BoundedReader_FieldInfo_,
	_Ready$BoundedReader_MethodInfo_,
	nullptr,
	nullptr,
	_Ready$BoundedReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Ready"
};

$Object* allocate$Ready$BoundedReader($Class* clazz) {
	return $of($alloc(Ready$BoundedReader));
}

void Ready$BoundedReader::init$($String* content) {
	$Reader::init$();
	this->pos = 0;
	this->limit = $nc(content)->length();
	$set(this, content, $new($chars, this->limit));
	content->getChars(0, this->limit, this->content, 0);
}

int32_t Ready$BoundedReader::read() {
	if (this->pos >= this->limit) {
		$throwNew($RuntimeException, "Hit infinite wait condition"_s);
	}
	return $nc(this->content)->get(this->pos++);
}

int32_t Ready$BoundedReader::read($chars* buf, int32_t offset, int32_t length) {
	if (this->pos >= this->limit) {
		$throwNew($RuntimeException, "Hit infinite wait condition"_s);
	}
	int32_t oldPos = this->pos;
	int32_t readlen = (length > (this->limit - this->pos)) ? (this->limit - this->pos) : length;
	for (int32_t i = offset; i < readlen; ++i) {
		$nc(buf)->set(i, (char16_t)read());
	}
	return (this->pos - oldPos);
}

void Ready$BoundedReader::close() {
}

bool Ready$BoundedReader::ready() {
	if (this->pos < this->limit) {
		return true;
	} else {
		return false;
	}
}

Ready$BoundedReader::Ready$BoundedReader() {
}

$Class* Ready$BoundedReader::load$($String* name, bool initialize) {
	$loadClass(Ready$BoundedReader, name, initialize, &_Ready$BoundedReader_ClassInfo_, allocate$Ready$BoundedReader);
	return class$;
}

$Class* Ready$BoundedReader::class$ = nullptr;