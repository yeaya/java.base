#include <java/net/URI.h>

#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI$1.h>
#include <java/net/URI$Parser.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <jdk/internal/access/JavaNetUriAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/cs/UTF_8.h>
#include <jcpp.h>

#undef H_PATH
#undef H_SERVER_PERCENT
#undef H_SERVER
#undef H_SCHEME
#undef L_SCHEME
#undef L_SERVER
#undef H_USERINFO
#undef NFC
#undef L_DIGIT
#undef H_UNRESERVED
#undef H_PCHAR
#undef L_USERINFO
#undef L_RESERVED
#undef L_UNRESERVED
#undef L_PCHAR
#undef H_REG_NAME
#undef H_DOT
#undef H_ALPHA
#undef H_ALPHANUM
#undef L_HEX
#undef L_SCOPE_ID
#undef L_LOWALPHA
#undef L_URIC
#undef REPLACE
#undef L_UPALPHA
#undef H_DASH
#undef H_MARK
#undef H_ESCAPED
#undef L_REG_NAME
#undef L_ALPHA
#undef H_HEX
#undef L_PATH
#undef INSTANCE
#undef L_ALPHANUM
#undef H_DIGIT
#undef L_DOT
#undef L_MARK
#undef H_RESERVED
#undef L_ESCAPED
#undef L_DASH
#undef H_URIC
#undef L_SERVER_PERCENT
#undef H_UPALPHA
#undef H_SCOPE_ID
#undef H_LOWALPHA

using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamException = ::java::io::ObjectStreamException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI$1 = ::java::net::URI$1;
using $URI$Parser = ::java::net::URI$Parser;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $JavaNetUriAccess = ::jdk::internal::access::JavaNetUriAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $UTF_8 = ::sun::nio::cs::UTF_8;

namespace java {
	namespace net {

$FieldInfo _URI_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(URI, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(URI, serialVersionUID)},
	{"scheme", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, scheme)},
	{"fragment", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, fragment)},
	{"authority", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, authority)},
	{"userInfo", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, userInfo)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, host)},
	{"port", "I", nullptr, $PRIVATE | $TRANSIENT, $field(URI, port)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, path)},
	{"query", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, query)},
	{"schemeSpecificPart", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, schemeSpecificPart)},
	{"hash", "I", nullptr, $PRIVATE | $TRANSIENT, $field(URI, hash$)},
	{"decodedUserInfo", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, decodedUserInfo)},
	{"decodedAuthority", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, decodedAuthority)},
	{"decodedPath", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, decodedPath)},
	{"decodedQuery", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, decodedQuery)},
	{"decodedFragment", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, decodedFragment)},
	{"decodedSchemeSpecificPart", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(URI, decodedSchemeSpecificPart)},
	{"string", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(URI, string)},
	{"L_DIGIT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_DIGIT)},
	{"H_DIGIT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_DIGIT)},
	{"L_UPALPHA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_UPALPHA)},
	{"H_UPALPHA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_UPALPHA)},
	{"L_LOWALPHA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_LOWALPHA)},
	{"H_LOWALPHA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_LOWALPHA)},
	{"L_ALPHA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_ALPHA)},
	{"H_ALPHA", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_ALPHA)},
	{"L_ALPHANUM", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_ALPHANUM)},
	{"H_ALPHANUM", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_ALPHANUM)},
	{"L_HEX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_HEX)},
	{"H_HEX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_HEX)},
	{"L_MARK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_MARK)},
	{"H_MARK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_MARK)},
	{"L_UNRESERVED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_UNRESERVED)},
	{"H_UNRESERVED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_UNRESERVED)},
	{"L_RESERVED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_RESERVED)},
	{"H_RESERVED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_RESERVED)},
	{"L_ESCAPED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_ESCAPED)},
	{"H_ESCAPED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_ESCAPED)},
	{"L_URIC", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_URIC)},
	{"H_URIC", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_URIC)},
	{"L_PCHAR", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_PCHAR)},
	{"H_PCHAR", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_PCHAR)},
	{"L_PATH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_PATH)},
	{"H_PATH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_PATH)},
	{"L_DASH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_DASH)},
	{"H_DASH", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_DASH)},
	{"L_DOT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_DOT)},
	{"H_DOT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_DOT)},
	{"L_USERINFO", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_USERINFO)},
	{"H_USERINFO", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_USERINFO)},
	{"L_REG_NAME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_REG_NAME)},
	{"H_REG_NAME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_REG_NAME)},
	{"L_SERVER", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_SERVER)},
	{"H_SERVER", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_SERVER)},
	{"L_SERVER_PERCENT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_SERVER_PERCENT)},
	{"H_SERVER_PERCENT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_SERVER_PERCENT)},
	{"L_SCHEME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_SCHEME)},
	{"H_SCHEME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_SCHEME)},
	{"L_SCOPE_ID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, L_SCOPE_ID)},
	{"H_SCOPE_ID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI, H_SCOPE_ID)},
	{"hexDigits", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(URI, hexDigits)},
	{}
};

$MethodInfo _URI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)()>(&URI::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*)>(&URI::init$)), "java.net.URISyntaxException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*,$String*,int32_t,$String*,$String*,$String*)>(&URI::init$)), "java.net.URISyntaxException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*,$String*,$String*,$String*)>(&URI::init$)), "java.net.URISyntaxException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*,$String*,$String*)>(&URI::init$)), "java.net.URISyntaxException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URI::*)($String*,$String*,$String*)>(&URI::init$)), "java.net.URISyntaxException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(URI::*)($String*,$String*)>(&URI::init$))},
	{"appendAuthority", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($StringBuilder*,$String*,$String*,$String*,int32_t)>(&URI::appendAuthority))},
	{"appendEncoded", "(Ljava/nio/charset/CharsetEncoder;Ljava/lang/StringBuilder;C)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($CharsetEncoder*,$StringBuilder*,char16_t)>(&URI::appendEncoded))},
	{"appendEscape", "(Ljava/lang/StringBuilder;B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringBuilder*,int8_t)>(&URI::appendEscape))},
	{"appendFragment", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($StringBuilder*,$String*)>(&URI::appendFragment))},
	{"appendSchemeSpecificPart", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($StringBuilder*,$String*,$String*,$String*,$String*,int32_t,$String*,$String*)>(&URI::appendSchemeSpecificPart))},
	{"checkPath", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&URI::checkPath)), "java.net.URISyntaxException"},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&URI::compare))},
	{"compareIgnoringCase", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$String*)>(&URI::compareIgnoringCase))},
	{"compareTo", "(Ljava/net/URI;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(URI::*)(URI*)>(&URI::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"create", "(Ljava/lang/String;)Ljava/net/URI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<URI*(*)($String*)>(&URI::create))},
	{"decode", "(C)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&URI::decode))},
	{"decode", "(CC)B", nullptr, $PRIVATE | $STATIC, $method(static_cast<int8_t(*)(char16_t,char16_t)>(&URI::decode))},
	{"decode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&URI::decode))},
	{"decode", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&URI::decode))},
	{"defineString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(URI::*)()>(&URI::defineString))},
	{"encode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&URI::encode))},
	{"equal", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&URI::equal))},
	{"equalIgnoringCase", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&URI::equalIgnoringCase))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAuthority", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getAuthority))},
	{"getFragment", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getFragment))},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getHost))},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getPath))},
	{"getPort", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(URI::*)()>(&URI::getPort))},
	{"getQuery", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getQuery))},
	{"getRawAuthority", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getRawAuthority))},
	{"getRawFragment", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getRawFragment))},
	{"getRawPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getRawPath))},
	{"getRawQuery", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getRawQuery))},
	{"getRawSchemeSpecificPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getRawSchemeSpecificPart))},
	{"getRawUserInfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getRawUserInfo))},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getScheme))},
	{"getSchemeSpecificPart", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getSchemeSpecificPart))},
	{"getUserInfo", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::getUserInfo))},
	{"hash", "(ILjava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*)>(&URI::hash))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashIgnoringCase", "(ILjava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*)>(&URI::hashIgnoringCase))},
	{"isAbsolute", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(URI::*)()>(&URI::isAbsolute))},
	{"isOpaque", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(URI::*)()>(&URI::isOpaque))},
	{"join", "([C[I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($chars*,$ints*)>(&URI::join))},
	{"match", "(CJJ)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t,int64_t,int64_t)>(&URI::match))},
	{"maybeAddLeadingDot", "([C[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,$ints*)>(&URI::maybeAddLeadingDot))},
	{"needsNormalization", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&URI::needsNormalization))},
	{"normalize", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<URI*(URI::*)()>(&URI::normalize))},
	{"normalize", "(Ljava/net/URI;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<URI*(*)(URI*)>(&URI::normalize))},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&URI::normalize))},
	{"normalizedHash", "(ILjava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$String*)>(&URI::normalizedHash))},
	{"parseServerAuthority", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<URI*(URI::*)()>(&URI::parseServerAuthority)), "java.net.URISyntaxException"},
	{"percentNormalizedComparison", "(Ljava/lang/String;Ljava/lang/String;Z)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,$String*,bool)>(&URI::percentNormalizedComparison))},
	{"quote", "(Ljava/lang/String;JJ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,int64_t,int64_t)>(&URI::quote))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($ObjectInputStream*)>(&URI::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"relativize", "(Ljava/net/URI;)Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<URI*(URI::*)(URI*)>(&URI::relativize))},
	{"relativize", "(Ljava/net/URI;Ljava/net/URI;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<URI*(*)(URI*,URI*)>(&URI::relativize))},
	{"removeDots", "([C[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,$ints*)>(&URI::removeDots))},
	{"resolve", "(Ljava/net/URI;)Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<URI*(URI::*)(URI*)>(&URI::resolve))},
	{"resolve", "(Ljava/lang/String;)Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<URI*(URI::*)($String*)>(&URI::resolve))},
	{"resolve", "(Ljava/net/URI;Ljava/net/URI;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<URI*(*)(URI*,URI*)>(&URI::resolve))},
	{"resolvePath", "(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*,bool)>(&URI::resolvePath))},
	{"split", "([C[I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,$ints*)>(&URI::split))},
	{"toASCIIString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(URI::*)()>(&URI::toASCIIString))},
	{"toLower", "(C)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&URI::toLower))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(URI::*)($String*,$String*,$String*,$String*,$String*,int32_t,$String*,$String*,$String*)>(&URI::toString))},
	{"toURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(static_cast<$URL*(URI::*)()>(&URI::toURL)), "java.net.MalformedURLException"},
	{"toUpper", "(C)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&URI::toUpper))},
	{"validSchemeAndPath", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&URI::validSchemeAndPath))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(URI::*)($ObjectOutputStream*)>(&URI::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _URI_InnerClassesInfo_[] = {
	{"java.net.URI$Parser", "java.net.URI", "Parser", $PRIVATE},
	{"java.net.URI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.net.URI",
	"java.lang.Object",
	"java.lang.Comparable,java.io.Serializable",
	_URI_FieldInfo_,
	_URI_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/net/URI;>;Ljava/io/Serializable;",
	nullptr,
	_URI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.net.URI$Parser,java.net.URI$1"
};

$Object* allocate$URI($Class* clazz) {
	return $of($alloc(URI));
}

$Object* URI::clone() {
	 return this->$Comparable::clone();
}

void URI::finalize() {
	this->$Comparable::finalize();
}

bool URI::$assertionsDisabled = false;
$chars* URI::hexDigits = nullptr;

void URI::init$() {
	this->port = -1;
}

void URI::init$($String* str) {
	this->port = -1;
	$$new($URI$Parser, this, str)->parse(false);
}

void URI::init$($String* scheme, $String* userInfo, $String* host, int32_t port, $String* path, $String* query, $String* fragment) {
	this->port = -1;
	$var($String, s, toString(scheme, nullptr, nullptr, userInfo, host, port, path, query, fragment));
	checkPath(s, scheme, path);
	$$new($URI$Parser, this, s)->parse(true);
}

void URI::init$($String* scheme, $String* authority, $String* path, $String* query, $String* fragment) {
	this->port = -1;
	$var($String, s, toString(scheme, nullptr, authority, nullptr, nullptr, -1, path, query, fragment));
	checkPath(s, scheme, path);
	$$new($URI$Parser, this, s)->parse(false);
}

void URI::init$($String* scheme, $String* host, $String* path, $String* fragment) {
	URI::init$(scheme, nullptr, host, -1, path, nullptr, fragment);
}

void URI::init$($String* scheme, $String* ssp, $String* fragment) {
	this->port = -1;
	$$new($URI$Parser, this, $(toString(scheme, ssp, nullptr, nullptr, nullptr, -1, nullptr, nullptr, fragment)))->parse(false);
}

void URI::init$($String* scheme, $String* path) {
	this->port = -1;
	if (!URI::$assertionsDisabled && !validSchemeAndPath(scheme, path)) {
		$throwNew($AssertionError);
	}
	$set(this, scheme, scheme);
	$set(this, path, path);
}

bool URI::validSchemeAndPath($String* scheme, $String* path) {
	$init(URI);
	try {
		$var(URI, u, $new(URI, $$str({scheme, ":"_s, path})));
		bool var$0 = $nc(scheme)->equals(u->scheme);
		return var$0 && $nc(path)->equals(u->path);
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

URI* URI::create($String* str) {
	$init(URI);
	try {
		return $new(URI, str);
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, x, $catch());
		$throwNew($IllegalArgumentException, $(x->getMessage()), x);
	}
	$shouldNotReachHere();
}

URI* URI::parseServerAuthority() {
	if ((this->host != nullptr) || (this->authority == nullptr)) {
		return this;
	}
	$$new($URI$Parser, this, $(toString()))->parse(true);
	return this;
}

URI* URI::normalize() {
	return normalize(this);
}

URI* URI::resolve(URI* uri) {
	return resolve(this, uri);
}

URI* URI::resolve($String* str) {
	return resolve($(URI::create(str)));
}

URI* URI::relativize(URI* uri) {
	return relativize(this, uri);
}

$URL* URI::toURL() {
	return $URL::fromURI(this);
}

$String* URI::getScheme() {
	return this->scheme;
}

bool URI::isAbsolute() {
	return this->scheme != nullptr;
}

bool URI::isOpaque() {
	return this->path == nullptr;
}

$String* URI::getRawSchemeSpecificPart() {
	$var($String, part, this->schemeSpecificPart);
	if (part != nullptr) {
		return part;
	}
	$var($String, s, this->string);
	if (s != nullptr) {
		int32_t start = 0;
		int32_t end = s->length();
		if (this->scheme != nullptr) {
			start = $nc(this->scheme)->length() + 1;
		}
		if (this->fragment != nullptr) {
			end -= $nc(this->fragment)->length() + 1;
		}
		if (this->path != nullptr && $nc(this->path)->length() == end - start) {
			$assign(part, this->path);
		} else {
			$assign(part, s->substring(start, end));
		}
	} else {
		$var($StringBuilder, sb, $new($StringBuilder));
		$var($StringBuilder, var$0, sb);
		$var($String, var$1, getAuthority());
		$var($String, var$2, getUserInfo());
		$var($String, var$3, this->host);
		int32_t var$4 = this->port;
		$var($String, var$5, getPath());
		appendSchemeSpecificPart(var$0, nullptr, var$1, var$2, var$3, var$4, var$5, $(getQuery()));
		$assign(part, sb->toString());
	}
	return $assignField(this, schemeSpecificPart, part);
}

$String* URI::getSchemeSpecificPart() {
	$var($String, part, this->decodedSchemeSpecificPart);
	if (part == nullptr) {
		$set(this, decodedSchemeSpecificPart, ($assign(part, decode($(getRawSchemeSpecificPart())))));
	}
	return part;
}

$String* URI::getRawAuthority() {
	return this->authority;
}

$String* URI::getAuthority() {
	$var($String, auth, this->decodedAuthority);
	if ((auth == nullptr) && (this->authority != nullptr)) {
		$set(this, decodedAuthority, ($assign(auth, decode(this->authority))));
	}
	return auth;
}

$String* URI::getRawUserInfo() {
	return this->userInfo;
}

$String* URI::getUserInfo() {
	$var($String, user, this->decodedUserInfo);
	if ((user == nullptr) && (this->userInfo != nullptr)) {
		$set(this, decodedUserInfo, ($assign(user, decode(this->userInfo))));
	}
	return user;
}

$String* URI::getHost() {
	return this->host;
}

int32_t URI::getPort() {
	return this->port;
}

$String* URI::getRawPath() {
	return this->path;
}

$String* URI::getPath() {
	$var($String, decoded, this->decodedPath);
	if ((decoded == nullptr) && (this->path != nullptr)) {
		$set(this, decodedPath, ($assign(decoded, decode(this->path))));
	}
	return decoded;
}

$String* URI::getRawQuery() {
	return this->query;
}

$String* URI::getQuery() {
	$var($String, decoded, this->decodedQuery);
	if ((decoded == nullptr) && (this->query != nullptr)) {
		$set(this, decodedQuery, ($assign(decoded, decode(this->query, false))));
	}
	return decoded;
}

$String* URI::getRawFragment() {
	return this->fragment;
}

$String* URI::getFragment() {
	$var($String, decoded, this->decodedFragment);
	if ((decoded == nullptr) && (this->fragment != nullptr)) {
		$set(this, decodedFragment, ($assign(decoded, decode(this->fragment, false))));
	}
	return decoded;
}

bool URI::equals(Object$* ob) {
	if ($equals(ob, this)) {
		return true;
	}
	$var(URI, that, nullptr);
	bool var$0 = $instanceOf(URI, ob);
	if (var$0) {
		$assign(that, $cast(URI, ob));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	bool var$1 = this->isOpaque();
	if (var$1 != $nc(that)->isOpaque()) {
		return false;
	}
	if (!equalIgnoringCase(this->scheme, $nc(that)->scheme)) {
		return false;
	}
	if (!equal(this->fragment, $nc(that)->fragment)) {
		return false;
	}
	if (this->isOpaque()) {
		return equal(this->schemeSpecificPart, $nc(that)->schemeSpecificPart);
	}
	if (!equal(this->path, $nc(that)->path)) {
		return false;
	}
	if (!equal(this->query, $nc(that)->query)) {
		return false;
	}
	if (this->authority == $nc(that)->authority) {
		return true;
	}
	if (this->host != nullptr) {
		if (!equal(this->userInfo, $nc(that)->userInfo)) {
			return false;
		}
		if (!equalIgnoringCase(this->host, $nc(that)->host)) {
			return false;
		}
		if (this->port != $nc(that)->port) {
			return false;
		}
	} else if (this->authority != nullptr) {
		if (!equal(this->authority, $nc(that)->authority)) {
			return false;
		}
	} else if (this->authority != $nc(that)->authority) {
		return false;
	}
	return true;
}

int32_t URI::hashCode() {
	int32_t h = this->hash$;
	if (h == 0) {
		h = hashIgnoringCase(0, this->scheme);
		h = hash(h, this->fragment);
		if (isOpaque()) {
			h = hash(h, this->schemeSpecificPart);
		} else {
			h = hash(h, this->path);
			h = hash(h, this->query);
			if (this->host != nullptr) {
				h = hash(h, this->userInfo);
				h = hashIgnoringCase(h, this->host);
				h += 1949 * this->port;
			} else {
				h = hash(h, this->authority);
			}
		}
		if (h != 0) {
			this->hash$ = h;
		}
	}
	return h;
}

int32_t URI::compareTo(URI* that) {
	int32_t c = 0;
	if ((c = compareIgnoringCase(this->scheme, $nc(that)->scheme)) != 0) {
		return c;
	}
	if (this->isOpaque()) {
		if ($nc(that)->isOpaque()) {
			if ((c = compare(this->schemeSpecificPart, that->schemeSpecificPart)) != 0) {
				return c;
			}
			return compare(this->fragment, that->fragment);
		}
		return +1;
	} else if ($nc(that)->isOpaque()) {
		return -1;
	}
	if ((this->host != nullptr) && ($nc(that)->host != nullptr)) {
		if ((c = compare(this->userInfo, that->userInfo)) != 0) {
			return c;
		}
		if ((c = compareIgnoringCase(this->host, that->host)) != 0) {
			return c;
		}
		if ((c = this->port - that->port) != 0) {
			return c;
		}
	} else if ((c = compare(this->authority, $nc(that)->authority)) != 0) {
		return c;
	}
	if ((c = compare(this->path, $nc(that)->path)) != 0) {
		return c;
	}
	if ((c = compare(this->query, $nc(that)->query)) != 0) {
		return c;
	}
	return compare(this->fragment, $nc(that)->fragment);
}

$String* URI::toString() {
	$var($String, s, this->string);
	if (s == nullptr) {
		$assign(s, defineString());
	}
	return s;
}

$String* URI::defineString() {
	$var($String, s, this->string);
	if (s != nullptr) {
		return s;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	if (this->scheme != nullptr) {
		sb->append(this->scheme);
		sb->append(u':');
	}
	if (isOpaque()) {
		sb->append(this->schemeSpecificPart);
	} else {
		if (this->host != nullptr) {
			sb->append("//"_s);
			if (this->userInfo != nullptr) {
				sb->append(this->userInfo);
				sb->append(u'@');
			}
			bool var$1 = ($nc(this->host)->indexOf((int32_t)u':') >= 0);
			bool var$0 = var$1 && !$nc(this->host)->startsWith("["_s);
			bool needBrackets = (var$0 && !$nc(this->host)->endsWith("]"_s));
			if (needBrackets) {
				sb->append(u'[');
			}
			sb->append(this->host);
			if (needBrackets) {
				sb->append(u']');
			}
			if (this->port != -1) {
				sb->append(u':');
				sb->append(this->port);
			}
		} else if (this->authority != nullptr) {
			$nc(sb)->append("//"_s);
			sb->append(this->authority);
		}
		if (this->path != nullptr) {
			sb->append(this->path);
		}
		if (this->query != nullptr) {
			sb->append(u'?');
			sb->append(this->query);
		}
	}
	if (this->fragment != nullptr) {
		sb->append(u'#');
		sb->append(this->fragment);
	}
	return $assignField(this, string, sb->toString());
}

$String* URI::toASCIIString() {
	return encode($(toString()));
}

void URI::writeObject($ObjectOutputStream* os) {
	defineString();
	$nc(os)->defaultWriteObject();
}

void URI::readObject($ObjectInputStream* is) {
	this->port = -1;
	$nc(is)->defaultReadObject();
	try {
		$$new($URI$Parser, this, this->string)->parse(false);
	} catch ($URISyntaxException&) {
		$var($URISyntaxException, x, $catch());
		$var($IOException, y, $new($InvalidObjectException, "Invalid URI"_s));
		y->initCause(x);
		$throw(y);
	}
}

int32_t URI::toLower(char16_t c) {
	$init(URI);
	if ((c >= u'A') && (c <= u'Z')) {
		return c + (u'a' - u'A');
	}
	return c;
}

int32_t URI::toUpper(char16_t c) {
	$init(URI);
	if ((c >= u'a') && (c <= u'z')) {
		return c - (u'a' - u'A');
	}
	return c;
}

bool URI::equal($String* s, $String* t) {
	$init(URI);
	bool testForEquality = true;
	int32_t result = percentNormalizedComparison(s, t, testForEquality);
	return result == 0;
}

bool URI::equalIgnoringCase($String* s, $String* t) {
	$init(URI);
	if (s == t) {
		return true;
	}
	if ((s != nullptr) && (t != nullptr)) {
		int32_t n = s->length();
		if (t->length() != n) {
			return false;
		}
		for (int32_t i = 0; i < n; ++i) {
			int32_t var$0 = toLower(s->charAt(i));
			if (var$0 != toLower(t->charAt(i))) {
				return false;
			}
		}
		return true;
	}
	return false;
}

int32_t URI::hash(int32_t hash, $String* s) {
	$init(URI);
	if (s == nullptr) {
		return hash;
	}
	return $nc(s)->indexOf((int32_t)u'%') < 0 ? hash * 127 + $nc(s)->hashCode() : normalizedHash(hash, s);
}

int32_t URI::normalizedHash(int32_t hash, $String* s) {
	$init(URI);
	int32_t h = 0;
	for (int32_t index = 0; index < $nc(s)->length(); ++index) {
		char16_t ch = s->charAt(index);
		h = 31 * h + ch;
		if (ch == u'%') {
			for (int32_t i = index + 1; i < index + 3; ++i) {
				h = 31 * h + toUpper(s->charAt(i));
			}
			index += 2;
		}
	}
	return hash * 127 + h;
}

int32_t URI::hashIgnoringCase(int32_t hash, $String* s) {
	$init(URI);
	if (s == nullptr) {
		return hash;
	}
	int32_t h = hash;
	int32_t n = $nc(s)->length();
	for (int32_t i = 0; i < n; ++i) {
		h = 31 * h + toLower(s->charAt(i));
	}
	return h;
}

int32_t URI::compare($String* s, $String* t) {
	$init(URI);
	bool testForEquality = false;
	int32_t result = percentNormalizedComparison(s, t, testForEquality);
	return result;
}

int32_t URI::percentNormalizedComparison($String* s, $String* t, bool testForEquality) {
	$init(URI);
	if (s == t) {
		return 0;
	}
	if (s != nullptr) {
		if (t != nullptr) {
			if (s->indexOf((int32_t)u'%') < 0) {
				return s->compareTo(t);
			}
			int32_t sn = s->length();
			int32_t tn = t->length();
			if ((sn != tn) && testForEquality) {
				return sn - tn;
			}
			int32_t val = 0;
			int32_t n = sn < tn ? sn : tn;
			for (int32_t i = 0; i < n;) {
				char16_t c = s->charAt(i);
				char16_t d = t->charAt(i);
				val = c - d;
				if (c != u'%') {
					if (val != 0) {
						return val;
					}
					++i;
					continue;
				}
				if (d != u'%') {
					if (val != 0) {
						return val;
					}
				}
				++i;
				int32_t var$0 = toLower(s->charAt(i));
				val = var$0 - toLower(t->charAt(i));
				if (val != 0) {
					return val;
				}
				++i;
				int32_t var$1 = toLower(s->charAt(i));
				val = var$1 - toLower(t->charAt(i));
				if (val != 0) {
					return val;
				}
				++i;
			}
			return sn - tn;
		} else {
			return +1;
		}
	} else {
		return -1;
	}
}

int32_t URI::compareIgnoringCase($String* s, $String* t) {
	$init(URI);
	if (s == t) {
		return 0;
	}
	if (s != nullptr) {
		if (t != nullptr) {
			int32_t sn = s->length();
			int32_t tn = t->length();
			int32_t n = sn < tn ? sn : tn;
			for (int32_t i = 0; i < n; ++i) {
				int32_t var$0 = toLower(s->charAt(i));
				int32_t c = var$0 - toLower(t->charAt(i));
				if (c != 0) {
					return c;
				}
			}
			return sn - tn;
		}
		return +1;
	} else {
		return -1;
	}
}

void URI::checkPath($String* s, $String* scheme, $String* path) {
	$init(URI);
	if (scheme != nullptr) {
		bool var$0 = path != nullptr && !path->isEmpty();
		if (var$0 && path->charAt(0) != u'/') {
			$throwNew($URISyntaxException, s, "Relative path in absolute URI"_s);
		}
	}
}

void URI::appendAuthority($StringBuilder* sb, $String* authority, $String* userInfo, $String* host, int32_t port) {
	if (host != nullptr) {
		$nc(sb)->append("//"_s);
		if (userInfo != nullptr) {
			sb->append($(quote(userInfo, URI::L_USERINFO, URI::H_USERINFO)));
			sb->append(u'@');
		}
		bool var$1 = (host->indexOf((int32_t)u':') >= 0);
		bool var$0 = var$1 && !host->startsWith("["_s);
		bool needBrackets = (var$0 && !host->endsWith("]"_s));
		if (needBrackets) {
			sb->append(u'[');
		}
		sb->append(host);
		if (needBrackets) {
			sb->append(u']');
		}
		if (port != -1) {
			sb->append(u':');
			sb->append(port);
		}
	} else if (authority != nullptr) {
		$nc(sb)->append("//"_s);
		if (authority->startsWith("["_s)) {
			int32_t end = authority->indexOf((int32_t)u']');
			$var($String, doquote, authority);
			$var($String, dontquote, ""_s);
			if (end != -1 && authority->indexOf((int32_t)u':') != -1) {
				if (end == authority->length()) {
					$assign(dontquote, authority);
					$assign(doquote, ""_s);
				} else {
					$assign(dontquote, authority->substring(0, end + 1));
					$assign(doquote, authority->substring(end + 1));
				}
			}
			sb->append(dontquote);
			sb->append($(quote(doquote, URI::L_REG_NAME | URI::L_SERVER, URI::H_REG_NAME | URI::H_SERVER)));
		} else {
			sb->append($(quote(authority, URI::L_REG_NAME | URI::L_SERVER, URI::H_REG_NAME | URI::H_SERVER)));
		}
	}
}

void URI::appendSchemeSpecificPart($StringBuilder* sb, $String* opaquePart, $String* authority, $String* userInfo, $String* host, int32_t port, $String* path, $String* query) {
	if (opaquePart != nullptr) {
		if (opaquePart->startsWith("//["_s)) {
			int32_t end = opaquePart->indexOf((int32_t)u']');
			if (end != -1 && opaquePart->indexOf((int32_t)u':') != -1) {
				$var($String, doquote, nullptr);
				$var($String, dontquote, nullptr);
				if (end == opaquePart->length()) {
					$assign(dontquote, opaquePart);
					$assign(doquote, ""_s);
				} else {
					$assign(dontquote, opaquePart->substring(0, end + 1));
					$assign(doquote, opaquePart->substring(end + 1));
				}
				$nc(sb)->append(dontquote);
				sb->append($(quote(doquote, URI::L_URIC, URI::H_URIC)));
			}
		} else {
			$nc(sb)->append($(quote(opaquePart, URI::L_URIC, URI::H_URIC)));
		}
	} else {
		appendAuthority(sb, authority, userInfo, host, port);
		if (path != nullptr) {
			$nc(sb)->append($(quote(path, URI::L_PATH, URI::H_PATH)));
		}
		if (query != nullptr) {
			$nc(sb)->append(u'?');
			sb->append($(quote(query, URI::L_URIC, URI::H_URIC)));
		}
	}
}

void URI::appendFragment($StringBuilder* sb, $String* fragment) {
	if (fragment != nullptr) {
		$nc(sb)->append(u'#');
		sb->append($(quote(fragment, URI::L_URIC, URI::H_URIC)));
	}
}

$String* URI::toString($String* scheme, $String* opaquePart, $String* authority, $String* userInfo, $String* host, int32_t port, $String* path, $String* query, $String* fragment) {
	$var($StringBuilder, sb, $new($StringBuilder));
	if (scheme != nullptr) {
		sb->append(scheme);
		sb->append(u':');
	}
	appendSchemeSpecificPart(sb, opaquePart, authority, userInfo, host, port, path, query);
	appendFragment(sb, fragment);
	return sb->toString();
}

$String* URI::resolvePath($String* base, $String* child, bool absolute) {
	$init(URI);
	int32_t i = $nc(base)->lastIndexOf((int32_t)u'/');
	int32_t cn = $nc(child)->length();
	$var($String, path, ""_s);
	if (cn == 0) {
		if (i >= 0) {
			$assign(path, base->substring(0, i + 1));
		}
	} else {
		$var($StringBuilder, sb, $new($StringBuilder, base->length() + cn));
		if (i >= 0) {
			sb->append(static_cast<$CharSequence*>(base), 0, i + 1);
		}
		sb->append(child);
		$assign(path, sb->toString());
	}
	$var($String, np, normalize(path));
	return np;
}

URI* URI::resolve(URI* base, URI* child) {
	$init(URI);
	bool var$0 = $nc(child)->isOpaque();
	if (var$0 || $nc(base)->isOpaque()) {
		return child;
	}
	if (($nc(child)->scheme == nullptr) && (child->authority == nullptr) && $nc(child->path)->isEmpty() && (child->fragment != nullptr) && (child->query == nullptr)) {
		if (($nc(base)->fragment != nullptr) && $nc(child->fragment)->equals(base->fragment)) {
			return base;
		}
		$var(URI, ru, $new(URI));
		$set(ru, scheme, $nc(base)->scheme);
		$set(ru, authority, base->authority);
		$set(ru, userInfo, base->userInfo);
		$set(ru, host, base->host);
		ru->port = base->port;
		$set(ru, path, base->path);
		$set(ru, fragment, child->fragment);
		$set(ru, query, base->query);
		return ru;
	}
	if ($nc(child)->scheme != nullptr) {
		return child;
	}
	$var(URI, ru, $new(URI));
	$set(ru, scheme, $nc(base)->scheme);
	$set(ru, query, $nc(child)->query);
	$set(ru, fragment, child->fragment);
	if (child->authority == nullptr) {
		$set(ru, authority, base->authority);
		$set(ru, host, base->host);
		$set(ru, userInfo, base->userInfo);
		ru->port = base->port;
		$var($String, cp, (child->path == nullptr) ? ""_s : child->path);
		bool var$1 = !$nc(cp)->isEmpty();
		if (var$1 && cp->charAt(0) == u'/') {
			$set(ru, path, child->path);
		} else {
			$set(ru, path, resolvePath(base->path, cp, base->isAbsolute()));
		}
	} else {
		$set(ru, authority, child->authority);
		$set(ru, host, child->host);
		$set(ru, userInfo, child->userInfo);
		$set(ru, host, child->host);
		ru->port = child->port;
		$set(ru, path, child->path);
	}
	return ru;
}

URI* URI::normalize(URI* u) {
	$init(URI);
	bool var$0 = $nc(u)->isOpaque() || $nc(u)->path == nullptr;
	if (var$0 || $nc($nc(u)->path)->isEmpty()) {
		return u;
	}
	$var($String, np, normalize($nc(u)->path));
	if (np == $nc(u)->path) {
		return u;
	}
	$var(URI, v, $new(URI));
	$set(v, scheme, $nc(u)->scheme);
	$set(v, fragment, u->fragment);
	$set(v, authority, u->authority);
	$set(v, userInfo, u->userInfo);
	$set(v, host, u->host);
	v->port = u->port;
	$set(v, path, np);
	$set(v, query, u->query);
	return v;
}

URI* URI::relativize(URI* base, URI* child) {
	$init(URI);
	bool var$0 = $nc(child)->isOpaque();
	if (var$0 || $nc(base)->isOpaque()) {
		return child;
	}
	bool var$1 = !equalIgnoringCase($nc(base)->scheme, $nc(child)->scheme);
	if (var$1 || !equal($nc(base)->authority, $nc(child)->authority)) {
		return child;
	}
	$var($String, bp, normalize($nc(base)->path));
	$var($String, cp, normalize($nc(child)->path));
	if (!$nc(bp)->equals(cp)) {
		if (!bp->endsWith("/"_s)) {
			$assign(bp, $str({bp, "/"_s}));
		}
		if (!$nc(cp)->startsWith(bp)) {
			return child;
		}
	}
	$var(URI, v, $new(URI));
	$set(v, path, $nc(cp)->substring($nc(bp)->length()));
	$set(v, query, $nc(child)->query);
	$set(v, fragment, child->fragment);
	return v;
}

int32_t URI::needsNormalization($String* path) {
	$init(URI);
	bool normal = true;
	int32_t ns = 0;
	int32_t end = $nc(path)->length() - 1;
	int32_t p = 0;
	while (p <= end) {
		if (path->charAt(p) != u'/') {
			break;
		}
		++p;
	}
	if (p > 1) {
		normal = false;
	}
	while (p <= end) {
		bool var$0 = (path->charAt(p) == u'.');
		if (var$0) {
			bool var$1 = (p == end);
			if (!var$1) {
				bool var$2 = (path->charAt(p + 1) == u'/');
				if (!var$2) {
					bool var$3 = (path->charAt(p + 1) == u'.');
					var$2 = (var$3 && ((p + 1 == end) || (path->charAt(p + 2) == u'/')));
				}
				var$1 = (var$2);
			}
			var$0 = (var$1);
		}
		if (var$0) {
			normal = false;
		}
		++ns;
		while (p <= end) {
			if (path->charAt(p++) != u'/') {
				continue;
			}
			while (p <= end) {
				if (path->charAt(p) != u'/') {
					break;
				}
				normal = false;
				++p;
			}
			break;
		}
	}
	return normal ? -1 : ns;
}

void URI::split($chars* path, $ints* segs) {
	$init(URI);
	int32_t end = $nc(path)->length - 1;
	int32_t p = 0;
	int32_t i = 0;
	while (p <= end) {
		if (path->get(p) != u'/') {
			break;
		}
		path->set(p, u'\0');
		++p;
	}
	while (p <= end) {
		$nc(segs)->set(i++, p++);
		while (p <= end) {
			if (path->get(p++) != u'/') {
				continue;
			}
			path->set(p - 1, u'\0');
			while (p <= end) {
				if (path->get(p) != u'/') {
					break;
				}
				path->set(p++, u'\0');
			}
			break;
		}
	}
	if (i != $nc(segs)->length) {
		$throwNew($InternalError);
	}
}

int32_t URI::join($chars* path, $ints* segs) {
	$init(URI);
	int32_t ns = $nc(segs)->length;
	int32_t end = $nc(path)->length - 1;
	int32_t p = 0;
	if (path->get(p) == u'\0') {
		path->set(p++, u'/');
	}
	for (int32_t i = 0; i < ns; ++i) {
		int32_t q = segs->get(i);
		if (q == -1) {
			continue;
		}
		if (p == q) {
			while ((p <= end) && (path->get(p) != u'\0')) {
				++p;
			}
			if (p <= end) {
				path->set(p++, u'/');
			}
		} else if (p < q) {
			while ((q <= end) && ($nc(path)->get(q) != u'\0')) {
				path->set(p++, path->get(q++));
			}
			if (q <= end) {
				$nc(path)->set(p++, u'/');
			}
		} else {
			$throwNew($InternalError);
		}
	}
	return p;
}

void URI::removeDots($chars* path, $ints* segs) {
	$init(URI);
	int32_t ns = $nc(segs)->length;
	int32_t end = $nc(path)->length - 1;
	for (int32_t i = 0; i < ns; ++i) {
		int32_t dots = 0;
		do {
			int32_t p = segs->get(i);
			if (path->get(p) == u'.') {
				if (p == end) {
					dots = 1;
					break;
				} else if ($nc(path)->get(p + 1) == u'\0') {
					dots = 1;
					break;
				} else if (($nc(path)->get(p + 1) == u'.') && ((p + 1 == end) || ($nc(path)->get(p + 2) == u'\0'))) {
					dots = 2;
					break;
				}
			}
			++i;
		} while (i < ns);
		if ((i > ns) || (dots == 0)) {
			break;
		}
		if (dots == 1) {
			segs->set(i, -1);
		} else {
			int32_t j = 0;
			for (j = i - 1; j >= 0; --j) {
				if (segs->get(j) != -1) {
					break;
				}
			}
			if (j >= 0) {
				int32_t q = segs->get(j);
				if (!((path->get(q) == u'.') && (path->get(q + 1) == u'.') && (path->get(q + 2) == u'\0'))) {
					segs->set(i, -1);
					segs->set(j, -1);
				}
			}
		}
	}
}

void URI::maybeAddLeadingDot($chars* path, $ints* segs) {
	$init(URI);
	if ($nc(path)->get(0) == u'\0') {
		return;
	}
	int32_t ns = $nc(segs)->length;
	int32_t f = 0;
	while (f < ns) {
		if (segs->get(f) >= 0) {
			break;
		}
		++f;
	}
	if ((f >= ns) || (f == 0)) {
		return;
	}
	int32_t p = segs->get(f);
	while ((p < $nc(path)->length) && (path->get(p) != u':') && (path->get(p) != u'\0')) {
		++p;
	}
	if (p >= $nc(path)->length || $nc(path)->get(p) == u'\0') {
		return;
	}
	$nc(path)->set(0, u'.');
	path->set(1, u'\0');
	segs->set(0, 0);
}

$String* URI::normalize($String* ps) {
	$init(URI);
	int32_t ns = needsNormalization(ps);
	if (ns < 0) {
		return ps;
	}
	$var($chars, path, $nc(ps)->toCharArray());
	$var($ints, segs, $new($ints, ns));
	split(path, segs);
	removeDots(path, segs);
	maybeAddLeadingDot(path, segs);
	$var($String, s, $new($String, path, 0, join(path, segs)));
	if (s->equals(ps)) {
		return ps;
	}
	return s;
}

bool URI::match(char16_t c, int64_t lowMask, int64_t highMask) {
	$init(URI);
	if (c == 0) {
		return false;
	}
	if (c < 64) {
		return ((int64_t)(($sl((int64_t)1, c)) & (uint64_t)lowMask)) != 0;
	}
	if (c < 128) {
		return ((int64_t)(($sl((int64_t)1, c - 64)) & (uint64_t)highMask)) != 0;
	}
	return false;
}

void URI::appendEscape($StringBuilder* sb, int8_t b) {
	$init(URI);
	$nc(sb)->append(u'%');
	sb->append($nc(URI::hexDigits)->get((int32_t)((b >> 4) & (uint32_t)15)));
	sb->append($nc(URI::hexDigits)->get((int32_t)((b >> 0) & (uint32_t)15)));
}

void URI::appendEncoded($CharsetEncoder* encoder, $StringBuilder* sb, char16_t c) {
	$init(URI);
	$var($ByteBuffer, bb, nullptr);
	try {
		$assign(bb, $nc(encoder)->encode($($CharBuffer::wrap(static_cast<$CharSequence*>($$str({""_s, $$str(c)}))))));
	} catch ($CharacterCodingException&) {
		$var($CharacterCodingException, x, $catch());
		if (!URI::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	while ($nc(bb)->hasRemaining()) {
		int32_t b = (int32_t)(bb->get() & (uint32_t)255);
		if (b >= 128) {
			appendEscape(sb, (int8_t)b);
		} else {
			$nc(sb)->append((char16_t)b);
		}
	}
}

$String* URI::quote($String* s, int64_t lowMask, int64_t highMask) {
	$init(URI);
	$var($StringBuilder, sb, nullptr);
	$var($CharsetEncoder, encoder, nullptr);
	bool allowNonASCII = (((int64_t)(lowMask & (uint64_t)URI::L_ESCAPED)) != 0);
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		char16_t c = s->charAt(i);
		if (c < (char16_t)0x80) {
			if (!match(c, lowMask, highMask)) {
				if (sb == nullptr) {
					$assign(sb, $new($StringBuilder));
					sb->append(static_cast<$CharSequence*>(s), 0, i);
				}
				appendEscape(sb, (int8_t)c);
			} else if (sb != nullptr) {
				sb->append(c);
			}
		} else {
			bool var$2 = allowNonASCII;
			if (var$2) {
				bool var$3 = $Character::isSpaceChar(c);
				var$2 = (var$3 || $Character::isISOControl(c));
			}
			if (var$2) {
				if (encoder == nullptr) {
					$init($UTF_8);
					$assign(encoder, $nc($UTF_8::INSTANCE)->newEncoder());
				}
				if (sb == nullptr) {
					$assign(sb, $new($StringBuilder));
					sb->append(static_cast<$CharSequence*>(s), 0, i);
				}
				appendEncoded(encoder, sb, c);
			} else if (sb != nullptr) {
				sb->append(c);
			}
		}
	}
	return (sb == nullptr) ? s : $nc(sb)->toString();
}

$String* URI::encode($String* s) {
	$init(URI);
	int32_t n = $nc(s)->length();
	if (n == 0) {
		return s;
	}
	for (int32_t i = 0;;) {
		if (s->charAt(i) >= (char16_t)0x80) {
			break;
		}
		if (++i >= n) {
			return s;
		}
	}
	$init($Normalizer$Form);
	$var($String, ns, $Normalizer::normalize(s, $Normalizer$Form::NFC));
	$var($ByteBuffer, bb, nullptr);
	try {
		$init($UTF_8);
		$assign(bb, $nc($($nc($UTF_8::INSTANCE)->newEncoder()))->encode($($CharBuffer::wrap(static_cast<$CharSequence*>(ns)))));
	} catch ($CharacterCodingException&) {
		$var($CharacterCodingException, x, $catch());
		if (!URI::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	while ($nc(bb)->hasRemaining()) {
		int32_t b = (int32_t)(bb->get() & (uint32_t)255);
		if (b >= 128) {
			appendEscape(sb, (int8_t)b);
		} else {
			sb->append((char16_t)b);
		}
	}
	return sb->toString();
}

int32_t URI::decode(char16_t c) {
	$init(URI);
	if ((c >= u'0') && (c <= u'9')) {
		return c - u'0';
	}
	if ((c >= u'a') && (c <= u'f')) {
		return c - u'a' + 10;
	}
	if ((c >= u'A') && (c <= u'F')) {
		return c - u'A' + 10;
	}
	if (!URI::$assertionsDisabled) {
		$throwNew($AssertionError);
	}
	return -1;
}

int8_t URI::decode(char16_t c1, char16_t c2) {
	$init(URI);
	int32_t var$0 = (((int32_t)(decode(c1) & (uint32_t)15)) << 4);
	return (int8_t)(var$0 | (((int32_t)(decode(c2) & (uint32_t)15)) << 0));
}

$String* URI::decode($String* s) {
	$init(URI);
	return decode(s, true);
}

$String* URI::decode($String* s, bool ignorePercentInBrackets) {
	$init(URI);
	if (s == nullptr) {
		return s;
	}
	int32_t n = $nc(s)->length();
	if (n == 0) {
		return s;
	}
	if (s->indexOf((int32_t)u'%') < 0) {
		return s;
	}
	$var($StringBuilder, sb, $new($StringBuilder, n));
	$var($ByteBuffer, bb, $ByteBuffer::allocate(n));
	$var($CharBuffer, cb, $CharBuffer::allocate(n));
	$init($UTF_8);
	$init($CodingErrorAction);
	$var($CharsetDecoder, dec, $nc($($nc($($nc($UTF_8::INSTANCE)->newDecoder()))->onMalformedInput($CodingErrorAction::REPLACE)))->onUnmappableCharacter($CodingErrorAction::REPLACE));
	char16_t c = s->charAt(0);
	bool betweenBrackets = false;
	for (int32_t i = 0; i < n;) {
		if (!URI::$assertionsDisabled && !(c == s->charAt(i))) {
			$throwNew($AssertionError);
		}
		if (c == u'[') {
			betweenBrackets = true;
		} else if (betweenBrackets && c == u']') {
			betweenBrackets = false;
		}
		if (c != u'%' || (betweenBrackets && ignorePercentInBrackets)) {
			sb->append(c);
			if (++i >= n) {
				break;
			}
			c = s->charAt(i);
			continue;
		}
		$nc(bb)->clear();
		int32_t ui = i;
		for (;;) {
			if (!URI::$assertionsDisabled && !(n - i >= 2)) {
				$throwNew($AssertionError);
			}
			char16_t var$0 = s->charAt(++i);
			bb->put(decode(var$0, s->charAt(++i)));
			if (++i >= n) {
				break;
			}
			c = s->charAt(i);
			if (c != u'%') {
				break;
			}
		}
		bb->flip();
		$nc(cb)->clear();
		$nc(dec)->reset();
		$var($CoderResult, cr, dec->decode(bb, cb, true));
		if (!URI::$assertionsDisabled && !$nc(cr)->isUnderflow()) {
			$throwNew($AssertionError);
		}
		$assign(cr, dec->flush(cb));
		if (!URI::$assertionsDisabled && !$nc(cr)->isUnderflow()) {
			$throwNew($AssertionError);
		}
		sb->append($($nc($(cb->flip()))->toString()));
	}
	return sb->toString();
}

int32_t URI::compareTo(Object$* that) {
	return this->compareTo($cast(URI, that));
}

void clinit$URI($Class* class$) {
	URI::$assertionsDisabled = !URI::class$->desiredAssertionStatus();
	$assignStatic(URI::hexDigits, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F'
	}));
	{
		$SharedSecrets::setJavaNetUriAccess($$new($URI$1));
	}
}

URI::URI() {
}

$Class* URI::load$($String* name, bool initialize) {
	$loadClass(URI, name, initialize, &_URI_ClassInfo_, clinit$URI, allocate$URI);
	return class$;
}

$Class* URI::class$ = nullptr;

	} // net
} // java