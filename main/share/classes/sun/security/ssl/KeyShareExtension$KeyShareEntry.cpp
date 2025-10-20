#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ENGLISH

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $Record = ::sun::security::ssl::Record;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _KeyShareExtension$KeyShareEntry_FieldInfo_[] = {
	{"namedGroupId", "I", nullptr, $FINAL, $field(KeyShareExtension$KeyShareEntry, namedGroupId)},
	{"keyExchange", "[B", nullptr, $FINAL, $field(KeyShareExtension$KeyShareEntry, keyExchange)},
	{}
};

$MethodInfo _KeyShareExtension$KeyShareEntry_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$KeyShareEntry::*)(int32_t,$bytes*)>(&KeyShareExtension$KeyShareEntry::init$))},
	{"getEncoded", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(KeyShareExtension$KeyShareEntry::*)()>(&KeyShareExtension$KeyShareEntry::getEncoded))},
	{"getEncodedSize", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(KeyShareExtension$KeyShareEntry::*)()>(&KeyShareExtension$KeyShareEntry::getEncodedSize))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyShareExtension$KeyShareEntry_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$KeyShareEntry", "sun.security.ssl.KeyShareExtension", "KeyShareEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyShareExtension$KeyShareEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$KeyShareEntry",
	"java.lang.Object",
	nullptr,
	_KeyShareExtension$KeyShareEntry_FieldInfo_,
	_KeyShareExtension$KeyShareEntry_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$KeyShareEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$KeyShareEntry($Class* clazz) {
	return $of($alloc(KeyShareExtension$KeyShareEntry));
}

void KeyShareExtension$KeyShareEntry::init$(int32_t namedGroupId, $bytes* keyExchange) {
	this->namedGroupId = namedGroupId;
	$set(this, keyExchange, keyExchange);
}

$bytes* KeyShareExtension$KeyShareEntry::getEncoded() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, buffer, $new($bytes, $nc(this->keyExchange)->length + 4));
	$var($ByteBuffer, m, $ByteBuffer::wrap(buffer));
	try {
		$Record::putInt16(m, this->namedGroupId);
		$Record::putBytes16(m, this->keyExchange);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Unlikely IOException"_s, $$new($ObjectArray, {$of(ioe)}));
		}
	}
	return buffer;
}

int32_t KeyShareExtension$KeyShareEntry::getEncodedSize() {
	return $nc(this->keyExchange)->length + 4;
}

$String* KeyShareExtension$KeyShareEntry::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\n\'{\'\n  \"named group\": {0}\n  \"key_exchange\": \'{\'\n{1}\n  \'}\'\n\'}\',"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($NamedGroup::nameOf(this->namedGroupId))),
		$($of($Utilities::indent($(hexEncoder->encode(this->keyExchange)), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

KeyShareExtension$KeyShareEntry::KeyShareExtension$KeyShareEntry() {
}

$Class* KeyShareExtension$KeyShareEntry::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$KeyShareEntry, name, initialize, &_KeyShareExtension$KeyShareEntry_ClassInfo_, allocate$KeyShareExtension$KeyShareEntry);
	return class$;
}

$Class* KeyShareExtension$KeyShareEntry::class$ = nullptr;

		} // ssl
	} // security
} // sun