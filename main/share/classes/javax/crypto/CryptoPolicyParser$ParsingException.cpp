#include <javax/crypto/CryptoPolicyParser$ParsingException.h>
#include <java/security/GeneralSecurityException.h>
#include <javax/crypto/CryptoPolicyParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace javax {
	namespace crypto {

void CryptoPolicyParser$ParsingException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CryptoPolicyParser$ParsingException::init$(int32_t line, $String* msg) {
	$useLocalObjectStack();
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": "_s, msg}));
}

void CryptoPolicyParser$ParsingException::init$(int32_t line, $String* expect, $String* actual) {
	$useLocalObjectStack();
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": expected \'"_s, expect, "\', found \'"_s, actual, "\'"_s}));
}

CryptoPolicyParser$ParsingException::CryptoPolicyParser$ParsingException() {
}

CryptoPolicyParser$ParsingException::CryptoPolicyParser$ParsingException(const CryptoPolicyParser$ParsingException& e) : $GeneralSecurityException(e) {
}

void CryptoPolicyParser$ParsingException::throw$() {
	throw *this;
}

$Class* CryptoPolicyParser$ParsingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoPolicyParser$ParsingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CryptoPolicyParser$ParsingException, init$, void, $String*)},
		{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(CryptoPolicyParser$ParsingException, init$, void, int32_t, $String*)},
		{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(CryptoPolicyParser$ParsingException, init$, void, int32_t, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.CryptoPolicyParser$ParsingException", "javax.crypto.CryptoPolicyParser", "ParsingException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.crypto.CryptoPolicyParser$ParsingException",
		"java.security.GeneralSecurityException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.CryptoPolicyParser"
	};
	$loadClass(CryptoPolicyParser$ParsingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CryptoPolicyParser$ParsingException);
	});
	return class$;
}

$Class* CryptoPolicyParser$ParsingException::class$ = nullptr;

	} // crypto
} // javax