#include <sun/security/provider/PolicyParser$ParsingException.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <sun/security/provider/PolicyParser.h>
#include <sun/security/util/LocalizedMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PolicyParser = ::sun::security::provider::PolicyParser;
using $LocalizedMessage = ::sun::security::util::LocalizedMessage;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyParser$ParsingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PolicyParser$ParsingException, serialVersionUID)},
	{"i18nMessage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PolicyParser$ParsingException, i18nMessage)},
	{"localizedMsg", "Lsun/security/util/LocalizedMessage;", nullptr, $PRIVATE, $field(PolicyParser$ParsingException, localizedMsg)},
	{"source", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(PolicyParser$ParsingException, source)},
	{}
};

$MethodInfo _PolicyParser$ParsingException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$ParsingException::*)($String*)>(&PolicyParser$ParsingException::init$))},
	{"<init>", "(Ljava/lang/String;Lsun/security/util/LocalizedMessage;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$ParsingException::*)($String*,$LocalizedMessage*,$ObjectArray*)>(&PolicyParser$ParsingException::init$))},
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$ParsingException::*)(int32_t,$String*)>(&PolicyParser$ParsingException::init$))},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyParser$ParsingException::*)(int32_t,$String*,$String*)>(&PolicyParser$ParsingException::init$))},
	{"getNonlocalizedMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PolicyParser$ParsingException_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyParser$ParsingException", "sun.security.provider.PolicyParser", "ParsingException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PolicyParser$ParsingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.PolicyParser$ParsingException",
	"java.security.GeneralSecurityException",
	nullptr,
	_PolicyParser$ParsingException_FieldInfo_,
	_PolicyParser$ParsingException_MethodInfo_,
	nullptr,
	nullptr,
	_PolicyParser$ParsingException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyParser"
};

$Object* allocate$PolicyParser$ParsingException($Class* clazz) {
	return $of($alloc(PolicyParser$ParsingException));
}

void PolicyParser$ParsingException::init$($String* msg) {
	$GeneralSecurityException::init$(msg);
	$set(this, i18nMessage, msg);
}

void PolicyParser$ParsingException::init$($String* msg, $LocalizedMessage* localizedMsg, $ObjectArray* source) {
	$GeneralSecurityException::init$(msg);
	$set(this, localizedMsg, localizedMsg);
	$set(this, source, source);
}

void PolicyParser$ParsingException::init$(int32_t line, $String* msg) {
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": "_s, msg}));
	$set(this, localizedMsg, $new($LocalizedMessage, "line.number.msg"_s));
	$set(this, source, $new($ObjectArray, {
		$($of($Integer::valueOf(line))),
		$of(msg)
	}));
}

void PolicyParser$ParsingException::init$(int32_t line, $String* expect, $String* actual) {
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": expected ["_s, expect, "], found ["_s, actual, "]"_s}));
	$set(this, localizedMsg, $new($LocalizedMessage, "line.number.expected.expect.found.actual."_s));
	$set(this, source, $new($ObjectArray, {
		$($of($Integer::valueOf(line))),
		$of(expect),
		$of(actual)
	}));
}

$String* PolicyParser$ParsingException::getNonlocalizedMessage() {
	return this->i18nMessage != nullptr ? this->i18nMessage : $nc(this->localizedMsg)->formatNonlocalized(this->source);
}

PolicyParser$ParsingException::PolicyParser$ParsingException() {
}

PolicyParser$ParsingException::PolicyParser$ParsingException(const PolicyParser$ParsingException& e) {
}

PolicyParser$ParsingException PolicyParser$ParsingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PolicyParser$ParsingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PolicyParser$ParsingException::load$($String* name, bool initialize) {
	$loadClass(PolicyParser$ParsingException, name, initialize, &_PolicyParser$ParsingException_ClassInfo_, allocate$PolicyParser$ParsingException);
	return class$;
}

$Class* PolicyParser$ParsingException::class$ = nullptr;

		} // provider
	} // security
} // sun