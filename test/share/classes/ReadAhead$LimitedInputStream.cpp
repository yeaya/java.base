#include <ReadAhead$LimitedInputStream.h>

#include <ReadAhead.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ReadAhead$LimitedInputStream_FieldInfo_[] = {
	{"input", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ReadAhead$LimitedInputStream, input)},
	{"limit", "I", nullptr, $PRIVATE, $field(ReadAhead$LimitedInputStream, limit)},
	{"next", "I", nullptr, $PRIVATE, $field(ReadAhead$LimitedInputStream, next)},
	{}
};

$MethodInfo _ReadAhead$LimitedInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ReadAhead$LimitedInputStream, init$, void, $String*, int32_t)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ReadAhead$LimitedInputStream, read, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _ReadAhead$LimitedInputStream_InnerClassesInfo_[] = {
	{"ReadAhead$LimitedInputStream", "ReadAhead", "LimitedInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ReadAhead$LimitedInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"ReadAhead$LimitedInputStream",
	"java.io.InputStream",
	nullptr,
	_ReadAhead$LimitedInputStream_FieldInfo_,
	_ReadAhead$LimitedInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ReadAhead$LimitedInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ReadAhead"
};

$Object* allocate$ReadAhead$LimitedInputStream($Class* clazz) {
	return $of($alloc(ReadAhead$LimitedInputStream));
}

void ReadAhead$LimitedInputStream::init$($String* input, int32_t limit) {
	$InputStream::init$();
	this->next = 0;
	$set(this, input, input);
	this->limit = limit;
}

int32_t ReadAhead$LimitedInputStream::read() {
	if (this->next >= this->limit) {
		$throwNew($IOException, "Attempted to read too far in stream"_s);
	}
	return $nc(this->input)->charAt(this->next++);
}

ReadAhead$LimitedInputStream::ReadAhead$LimitedInputStream() {
}

$Class* ReadAhead$LimitedInputStream::load$($String* name, bool initialize) {
	$loadClass(ReadAhead$LimitedInputStream, name, initialize, &_ReadAhead$LimitedInputStream_ClassInfo_, allocate$ReadAhead$LimitedInputStream);
	return class$;
}

$Class* ReadAhead$LimitedInputStream::class$ = nullptr;