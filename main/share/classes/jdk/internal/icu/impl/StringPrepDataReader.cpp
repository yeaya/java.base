#include <jdk/internal/icu/impl/StringPrepDataReader.h>

#include <java/io/DataInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/ICUBinary$Authenticate.h>
#include <jdk/internal/icu/impl/ICUBinary.h>
#include <jcpp.h>

#undef DATA_FORMAT_ID
#undef DATA_FORMAT_VERSION

using $DataInputStream = ::java::io::DataInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ICUBinary = ::jdk::internal::icu::impl::ICUBinary;
using $ICUBinary$Authenticate = ::jdk::internal::icu::impl::ICUBinary$Authenticate;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _StringPrepDataReader_FieldInfo_[] = {
	{"dataInputStream", "Ljava/io/DataInputStream;", nullptr, $PRIVATE, $field(StringPrepDataReader, dataInputStream)},
	{"unicodeVersion", "[B", nullptr, $PRIVATE, $field(StringPrepDataReader, unicodeVersion)},
	{"DATA_FORMAT_ID", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringPrepDataReader, DATA_FORMAT_ID)},
	{"DATA_FORMAT_VERSION", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringPrepDataReader, DATA_FORMAT_VERSION)},
	{}
};

$MethodInfo _StringPrepDataReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(StringPrepDataReader::*)($InputStream*)>(&StringPrepDataReader::init$)), "java.io.IOException"},
	{"getDataFormatVersion", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(StringPrepDataReader::*)()>(&StringPrepDataReader::getDataFormatVersion))},
	{"getUnicodeVersion", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(StringPrepDataReader::*)()>(&StringPrepDataReader::getUnicodeVersion))},
	{"isDataVersionAcceptable", "([B)Z", nullptr, $PUBLIC},
	{"read", "([B[C)V", nullptr, $PUBLIC, $method(static_cast<void(StringPrepDataReader::*)($bytes*,$chars*)>(&StringPrepDataReader::read)), "java.io.IOException"},
	{"readIndexes", "(I)[I", nullptr, $PUBLIC, $method(static_cast<$ints*(StringPrepDataReader::*)(int32_t)>(&StringPrepDataReader::readIndexes)), "java.io.IOException"},
	{}
};

$InnerClassInfo _StringPrepDataReader_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.ICUBinary$Authenticate", "jdk.internal.icu.impl.ICUBinary", "Authenticate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StringPrepDataReader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.StringPrepDataReader",
	"java.lang.Object",
	"jdk.internal.icu.impl.ICUBinary$Authenticate",
	_StringPrepDataReader_FieldInfo_,
	_StringPrepDataReader_MethodInfo_,
	nullptr,
	nullptr,
	_StringPrepDataReader_InnerClassesInfo_
};

$Object* allocate$StringPrepDataReader($Class* clazz) {
	return $of($alloc(StringPrepDataReader));
}


$bytes* StringPrepDataReader::DATA_FORMAT_ID = nullptr;
$bytes* StringPrepDataReader::DATA_FORMAT_VERSION = nullptr;

void StringPrepDataReader::init$($InputStream* inputStream) {
	$set(this, unicodeVersion, $ICUBinary::readHeader(inputStream, StringPrepDataReader::DATA_FORMAT_ID, static_cast<$ICUBinary$Authenticate*>(this)));
	$set(this, dataInputStream, $new($DataInputStream, inputStream));
}

void StringPrepDataReader::read($bytes* idnaBytes, $chars* mappingTable) {
	$nc(this->dataInputStream)->read(idnaBytes);
	for (int32_t i = 0; i < $nc(mappingTable)->length; ++i) {
		mappingTable->set(i, $nc(this->dataInputStream)->readChar());
	}
}

$bytes* StringPrepDataReader::getDataFormatVersion() {
	return StringPrepDataReader::DATA_FORMAT_VERSION;
}

bool StringPrepDataReader::isDataVersionAcceptable($bytes* version) {
	return $nc(version)->get(0) == $nc(StringPrepDataReader::DATA_FORMAT_VERSION)->get(0) && version->get(2) == $nc(StringPrepDataReader::DATA_FORMAT_VERSION)->get(2) && version->get(3) == $nc(StringPrepDataReader::DATA_FORMAT_VERSION)->get(3);
}

$ints* StringPrepDataReader::readIndexes(int32_t length) {
	$var($ints, indexes, $new($ints, length));
	for (int32_t i = 0; i < length; ++i) {
		indexes->set(i, $nc(this->dataInputStream)->readInt());
	}
	return indexes;
}

$bytes* StringPrepDataReader::getUnicodeVersion() {
	return this->unicodeVersion;
}

void clinit$StringPrepDataReader($Class* class$) {
	$assignStatic(StringPrepDataReader::DATA_FORMAT_ID, $new($bytes, {
		(int8_t)83,
		(int8_t)80,
		(int8_t)82,
		(int8_t)80
	}));
	$assignStatic(StringPrepDataReader::DATA_FORMAT_VERSION, $new($bytes, {
		(int8_t)3,
		(int8_t)2,
		(int8_t)5,
		(int8_t)2
	}));
}

StringPrepDataReader::StringPrepDataReader() {
}

$Class* StringPrepDataReader::load$($String* name, bool initialize) {
	$loadClass(StringPrepDataReader, name, initialize, &_StringPrepDataReader_ClassInfo_, clinit$StringPrepDataReader, allocate$StringPrepDataReader);
	return class$;
}

$Class* StringPrepDataReader::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk