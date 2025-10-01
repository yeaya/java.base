#include <DataSupplier.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DataSupplier_FieldInfo_[] = {
	{"aposition", "I", nullptr, $PRIVATE, $field(DataSupplier, aposition)},
	{"buffer", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataSupplier, buffer)},
	{}
};

$MethodInfo _DataSupplier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DataSupplier::*)()>(&DataSupplier::init$))},
	{"read", "()I", nullptr, $PUBLIC},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataSupplier_ClassInfo_ = {
	$ACC_SUPER,
	"DataSupplier",
	"java.io.InputStream",
	nullptr,
	_DataSupplier_FieldInfo_,
	_DataSupplier_MethodInfo_
};

$Object* allocate$DataSupplier($Class* clazz) {
	return $of($alloc(DataSupplier));
}

$bytes* DataSupplier::buffer = nullptr;

void DataSupplier::init$() {
	$InputStream::init$();
	this->aposition = 0;
}

int32_t DataSupplier::read() {
	return u'x';
}

int64_t DataSupplier::skip(int64_t n) {
	this->aposition += (int32_t)n;
	return n;
}

int32_t DataSupplier::read($bytes* b) {
	return read(b, 0, $nc(b)->length);
}

int32_t DataSupplier::read($bytes* b, int32_t off, int32_t len) {
	if (len > $nc(DataSupplier::buffer)->length) {
		len = $nc(DataSupplier::buffer)->length;
	}
	$System::arraycopy(DataSupplier::buffer, this->aposition, b, off, len);
	return len;
}

void clinit$DataSupplier($Class* class$) {
	$assignStatic(DataSupplier::buffer, $new($bytes, {
		(int8_t)u'a',
		(int8_t)u'b',
		(int8_t)u'c',
		(int8_t)u'd',
		(int8_t)u'e',
		(int8_t)u'f',
		(int8_t)u'g',
		(int8_t)u'h',
		(int8_t)u'i',
		(int8_t)u'j',
		(int8_t)u'k',
		(int8_t)u'l',
		(int8_t)u'm',
		(int8_t)u'n',
		(int8_t)u'o',
		(int8_t)u'p',
		(int8_t)u'q',
		(int8_t)u'r',
		(int8_t)u's',
		(int8_t)u't',
		(int8_t)u'u',
		(int8_t)u'v',
		(int8_t)u'w',
		(int8_t)u'x',
		(int8_t)u'y',
		(int8_t)u'z'
	}));
}

DataSupplier::DataSupplier() {
}

$Class* DataSupplier::load$($String* name, bool initialize) {
	$loadClass(DataSupplier, name, initialize, &_DataSupplier_ClassInfo_, clinit$DataSupplier, allocate$DataSupplier);
	return class$;
}

$Class* DataSupplier::class$ = nullptr;