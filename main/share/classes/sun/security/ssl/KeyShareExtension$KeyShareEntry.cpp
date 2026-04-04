#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>
#include <java/io/IOException.h>
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
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $Record = ::sun::security::ssl::Record;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

void KeyShareExtension$KeyShareEntry::init$(int32_t namedGroupId, $bytes* keyExchange) {
	this->namedGroupId = namedGroupId;
	$set(this, keyExchange, keyExchange);
}

$bytes* KeyShareExtension$KeyShareEntry::getEncoded() {
	$useLocalObjectStack();
	$var($bytes, buffer, $new($bytes, $nc(this->keyExchange)->length + 4));
	$var($ByteBuffer, m, $ByteBuffer::wrap(buffer));
	try {
		$Record::putInt16(m, this->namedGroupId);
		$Record::putBytes16(m, this->keyExchange);
	} catch ($IOException& ioe) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning("Unlikely IOException"_s, $$new($ObjectArray, {ioe}));
		}
	}
	return buffer;
}

int32_t KeyShareExtension$KeyShareEntry::getEncodedSize() {
	return $nc(this->keyExchange)->length + 4;
}

$String* KeyShareExtension$KeyShareEntry::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\n\'{\'\n  \"named group\": {0}\n  \"key_exchange\": \'{\'\n{1}\n  \'}\'\n\'}\',"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($NamedGroup::nameOf(this->namedGroupId)),
		$($Utilities::indent($(hexEncoder->encode(this->keyExchange)), "    "_s))
	}));
	return messageFormat->format(messageFields);
}

KeyShareExtension$KeyShareEntry::KeyShareExtension$KeyShareEntry() {
}

$Class* KeyShareExtension$KeyShareEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"namedGroupId", "I", nullptr, $FINAL, $field(KeyShareExtension$KeyShareEntry, namedGroupId)},
		{"keyExchange", "[B", nullptr, $FINAL, $field(KeyShareExtension$KeyShareEntry, keyExchange)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[B)V", nullptr, $PRIVATE, $method(KeyShareExtension$KeyShareEntry, init$, void, int32_t, $bytes*)},
		{"getEncoded", "()[B", nullptr, $PRIVATE, $method(KeyShareExtension$KeyShareEntry, getEncoded, $bytes*)},
		{"getEncodedSize", "()I", nullptr, $PRIVATE, $method(KeyShareExtension$KeyShareEntry, getEncodedSize, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyShareExtension$KeyShareEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.KeyShareExtension$KeyShareEntry", "sun.security.ssl.KeyShareExtension", "KeyShareEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.KeyShareExtension$KeyShareEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.KeyShareExtension"
	};
	$loadClass(KeyShareExtension$KeyShareEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyShareExtension$KeyShareEntry);
	});
	return class$;
}

$Class* KeyShareExtension$KeyShareEntry::class$ = nullptr;

		} // ssl
	} // security
} // sun