#include <sun/security/provider/PolicyParser$ParsingException.h>
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
using $LocalizedMessage = ::sun::security::util::LocalizedMessage;

namespace sun {
	namespace security {
		namespace provider {

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
	$useLocalObjectStack();
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": "_s, msg}));
	$set(this, localizedMsg, $new($LocalizedMessage, "line.number.msg"_s));
	$set(this, source, $new($ObjectArray, {
		$($Integer::valueOf(line)),
		msg
	}));
}

void PolicyParser$ParsingException::init$(int32_t line, $String* expect, $String* actual) {
	$useLocalObjectStack();
	$GeneralSecurityException::init$($$str({"line "_s, $$str(line), ": expected ["_s, expect, "], found ["_s, actual, "]"_s}));
	$set(this, localizedMsg, $new($LocalizedMessage, "line.number.expected.expect.found.actual."_s));
	$set(this, source, $new($ObjectArray, {
		$($Integer::valueOf(line)),
		expect,
		actual
	}));
}

$String* PolicyParser$ParsingException::getNonlocalizedMessage() {
	return this->i18nMessage != nullptr ? this->i18nMessage : $nc(this->localizedMsg)->formatNonlocalized(this->source);
}

PolicyParser$ParsingException::PolicyParser$ParsingException() {
}

PolicyParser$ParsingException::PolicyParser$ParsingException(const PolicyParser$ParsingException& e) : $GeneralSecurityException(e) {
}

void PolicyParser$ParsingException::throw$() {
	throw *this;
}

$Class* PolicyParser$ParsingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PolicyParser$ParsingException, serialVersionUID)},
		{"i18nMessage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PolicyParser$ParsingException, i18nMessage)},
		{"localizedMsg", "Lsun/security/util/LocalizedMessage;", nullptr, $PRIVATE, $field(PolicyParser$ParsingException, localizedMsg)},
		{"source", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(PolicyParser$ParsingException, source)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PolicyParser$ParsingException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Lsun/security/util/LocalizedMessage;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PolicyParser$ParsingException, init$, void, $String*, $LocalizedMessage*, $ObjectArray*)},
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(PolicyParser$ParsingException, init$, void, int32_t, $String*)},
		{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PolicyParser$ParsingException, init$, void, int32_t, $String*, $String*)},
		{"getNonlocalizedMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyParser$ParsingException, getNonlocalizedMessage, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyParser$ParsingException", "sun.security.provider.PolicyParser", "ParsingException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.provider.PolicyParser$ParsingException",
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
		"sun.security.provider.PolicyParser"
	};
	$loadClass(PolicyParser$ParsingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyParser$ParsingException);
	});
	return class$;
}

$Class* PolicyParser$ParsingException::class$ = nullptr;

		} // provider
	} // security
} // sun