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

$MethodInfo _MessageDigest$Delegate$CloneableDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PRIVATE, $method(static_cast<void(MessageDigest$Delegate$CloneableDelegate::*)($MessageDigestSpi*,$String*,$Provider*)>(&MessageDigest$Delegate$CloneableDelegate::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MessageDigest$Delegate$CloneableDelegate_InnerClassesInfo_[] = {
	{"java.security.MessageDigest$Delegate", "java.security.MessageDigest", "Delegate", $PRIVATE | $STATIC},
	{"java.security.MessageDigest$Delegate$CloneableDelegate", "java.security.MessageDigest$Delegate", "CloneableDelegate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MessageDigest$Delegate$CloneableDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.MessageDigest$Delegate$CloneableDelegate",
	"java.security.MessageDigest$Delegate",
	"java.lang.Cloneable",
	nullptr,
	_MessageDigest$Delegate$CloneableDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MessageDigest$Delegate$CloneableDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.MessageDigest"
};

$Object* allocate$MessageDigest$Delegate$CloneableDelegate($Class* clazz) {
	return $of($alloc(MessageDigest$Delegate$CloneableDelegate));
}

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
	$loadClass(MessageDigest$Delegate$CloneableDelegate, name, initialize, &_MessageDigest$Delegate$CloneableDelegate_ClassInfo_, allocate$MessageDigest$Delegate$CloneableDelegate);
	return class$;
}

$Class* MessageDigest$Delegate$CloneableDelegate::class$ = nullptr;

	} // security
} // java