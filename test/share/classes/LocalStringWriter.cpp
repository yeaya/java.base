#include <LocalStringWriter.h>

#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _LocalStringWriter_FieldInfo_[] = {
	{"buf", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $field(LocalStringWriter, buf)},
	{}
};

$MethodInfo _LocalStringWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocalStringWriter::*)()>(&LocalStringWriter::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"flush", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "([CII)V", nullptr, $PUBLIC},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LocalStringWriter_ClassInfo_ = {
	$ACC_SUPER,
	"LocalStringWriter",
	"java.io.Writer",
	nullptr,
	_LocalStringWriter_FieldInfo_,
	_LocalStringWriter_MethodInfo_
};

$Object* allocate$LocalStringWriter($Class* clazz) {
	return $of($alloc(LocalStringWriter));
}

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
	$loadClass(LocalStringWriter, name, initialize, &_LocalStringWriter_ClassInfo_, allocate$LocalStringWriter);
	return class$;
}

$Class* LocalStringWriter::class$ = nullptr;