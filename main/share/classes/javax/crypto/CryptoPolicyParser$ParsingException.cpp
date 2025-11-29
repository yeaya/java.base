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

$FieldInfo _CryptoPolicyParser$ParsingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CryptoPolicyParser$ParsingException, serialVersionUID)},
	{}
};

$MethodInfo _CryptoPolicyParser$ParsingException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPolicyParser$ParsingException::*)($String*)>(&CryptoPolicyParser$ParsingException::init$))},
	{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPolicyParser$ParsingException::*)(int32_t,$String*)>(&CryptoPolicyParser$ParsingException::init$))},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CryptoPolicyParser$ParsingException::*)(int32_t,$String*,$String*)>(&CryptoPolicyParser$ParsingException::init$))},
	{}
};

$InnerClassInfo _CryptoPolicyParser$ParsingException_InnerClassesInfo_[] = {
	{"javax.crypto.CryptoPolicyParser$ParsingException", "javax.crypto.CryptoPolicyParser", "ParsingException", $STATIC | $FINAL},
	{}
};

$ClassInfo _CryptoPolicyParser$ParsingException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.CryptoPolicyParser$ParsingException",
	"java.security.GeneralSecurityException",
	nullptr,
	_CryptoPolicyParser$ParsingException_FieldInfo_,
	_CryptoPolicyParser$ParsingException_MethodInfo_,
	nullptr,
	nullptr,
	_CryptoPolicyParser$ParsingException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.CryptoPolicyParser"
};

$Object* allocate$CryptoPolicyParser$ParsingException($Class* clazz) {
	return $of($alloc(CryptoPolicyParser$ParsingException));
}

void CryptoPolicyParser$ParsingException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
}

void CryptoPolicyParser$ParsingException::init$(int32_t line, $String* msg) {
	$useLocalCurrentObjectStackCache();
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": "_s, msg}));
}

void CryptoPolicyParser$ParsingException::init$(int32_t line, $String* expect, $String* actual) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(CryptoPolicyParser$ParsingException, name, initialize, &_CryptoPolicyParser$ParsingException_ClassInfo_, allocate$CryptoPolicyParser$ParsingException);
	return class$;
}

$Class* CryptoPolicyParser$ParsingException::class$ = nullptr;

	} // crypto
} // javax