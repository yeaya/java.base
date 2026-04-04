#include <java/security/MessageDigest$Delegate$CloneableDelegate.h>
#include <java/security/MessageDigest$Delegate.h>
#include <java/security/MessageDigestSpi.h>
#include <java/security/Provider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest$Delegate = ::java::security::MessageDigest$Delegate;
using $MessageDigestSpi = ::java::security::MessageDigestSpi;
using $Provider = ::java::security::Provider;

namespace java {
	namespace security {

$Object* MessageDigest$Delegate$CloneableDelegate::clone() {
	 return this->$MessageDigest$Delegate::clone();
}

$String* MessageDigest$Delegate$CloneableDelegate::toString() {
	 return this->$MessageDigest$Delegate::toString();
}

int32_t MessageDigest$Delegate$CloneableDelegate::hashCode() {
	 return this->$MessageDigest$Delegate::hashCode();
}

bool MessageDigest$Delegate$CloneableDelegate::equals(Object$* obj) {
	 return this->$MessageDigest$Delegate::equals(obj);
}

void MessageDigest$Delegate$CloneableDelegate::finalize() {
	this->$MessageDigest$Delegate::finalize();
}

void MessageDigest$Delegate$CloneableDelegate::init$($MessageDigestSpi* digestSpi, $String* algorithm, $Provider* p) {
	$MessageDigest$Delegate::init$(digestSpi, algorithm, p);
}

MessageDigest$Delegate$CloneableDelegate::MessageDigest$Delegate$CloneableDelegate() {
}

$Class* MessageDigest$Delegate$CloneableDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PRIVATE, $method(MessageDigest$Delegate$CloneableDelegate, init$, void, $MessageDigestSpi*, $String*, $Provider*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.MessageDigest$Delegate", "java.security.MessageDigest", "Delegate", $PRIVATE | $STATIC},
		{"java.security.MessageDigest$Delegate$CloneableDelegate", "java.security.MessageDigest$Delegate", "CloneableDelegate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.MessageDigest$Delegate$CloneableDelegate",
		"java.security.MessageDigest$Delegate",
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.MessageDigest"
	};
	$loadClass(MessageDigest$Delegate$CloneableDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MessageDigest$Delegate$CloneableDelegate));
	});
	return class$;
}

$Class* MessageDigest$Delegate$CloneableDelegate::class$ = nullptr;

	} // security
} // java