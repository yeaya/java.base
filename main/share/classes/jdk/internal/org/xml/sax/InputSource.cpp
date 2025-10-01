#include <jdk/internal/org/xml/sax/InputSource.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {

$FieldInfo _InputSource_FieldInfo_[] = {
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InputSource, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InputSource, systemId)},
	{"byteStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(InputSource, byteStream)},
	{"encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(InputSource, encoding)},
	{"characterStream", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(InputSource, characterStream)},
	{}
};

$MethodInfo _InputSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputSource::*)()>(&InputSource::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InputSource::*)($String*)>(&InputSource::init$))},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(InputSource::*)($InputStream*)>(&InputSource::init$))},
	{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(static_cast<void(InputSource::*)($Reader*)>(&InputSource::init$))},
	{"getByteStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.xml.sax.InputSource",
	"java.lang.Object",
	nullptr,
	_InputSource_FieldInfo_,
	_InputSource_MethodInfo_
};

$Object* allocate$InputSource($Class* clazz) {
	return $of($alloc(InputSource));
}

void InputSource::init$() {
}

void InputSource::init$($String* systemId) {
	setSystemId(systemId);
}

void InputSource::init$($InputStream* byteStream) {
	setByteStream(byteStream);
}

void InputSource::init$($Reader* characterStream) {
	setCharacterStream(characterStream);
}

void InputSource::setPublicId($String* publicId) {
	$set(this, publicId, publicId);
}

$String* InputSource::getPublicId() {
	return this->publicId;
}

void InputSource::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

$String* InputSource::getSystemId() {
	return this->systemId;
}

void InputSource::setByteStream($InputStream* byteStream) {
	$set(this, byteStream, byteStream);
}

$InputStream* InputSource::getByteStream() {
	return this->byteStream;
}

void InputSource::setEncoding($String* encoding) {
	$set(this, encoding, encoding);
}

$String* InputSource::getEncoding() {
	return this->encoding;
}

void InputSource::setCharacterStream($Reader* characterStream) {
	$set(this, characterStream, characterStream);
}

$Reader* InputSource::getCharacterStream() {
	return this->characterStream;
}

InputSource::InputSource() {
}

$Class* InputSource::load$($String* name, bool initialize) {
	$loadClass(InputSource, name, initialize, &_InputSource_ClassInfo_, allocate$InputSource);
	return class$;
}

$Class* InputSource::class$ = nullptr;

				} // sax
			} // xml
		} // org
	} // internal
} // jdk