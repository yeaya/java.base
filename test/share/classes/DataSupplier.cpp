#include <DataSupplier.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	if (len > DataSupplier::buffer->length) {
		len = DataSupplier::buffer->length;
	}
	$System::arraycopy(DataSupplier::buffer, this->aposition, b, off, len);
	return len;
}

void DataSupplier::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"aposition", "I", nullptr, $PRIVATE, $field(DataSupplier, aposition)},
		{"buffer", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataSupplier, buffer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DataSupplier, init$, void)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(DataSupplier, read, int32_t)},
		{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(DataSupplier, read, int32_t, $bytes*), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(DataSupplier, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(DataSupplier, skip, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DataSupplier",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DataSupplier, name, initialize, &classInfo$$, DataSupplier::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DataSupplier);
	});
	return class$;
}

$Class* DataSupplier::class$ = nullptr;