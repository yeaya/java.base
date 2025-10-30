#include <java/security/Signature$Delegate$CloneableDelegate.h>

#include <java/security/Signature$Delegate.h>
#include <java/security/SignatureSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signature$Delegate = ::java::security::Signature$Delegate;
using $SignatureSpi = ::java::security::SignatureSpi;

namespace java {
	namespace security {

$MethodInfo _Signature$Delegate$CloneableDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/security/SignatureSpi;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Signature$Delegate$CloneableDelegate::*)($SignatureSpi*,$String*)>(&Signature$Delegate$CloneableDelegate::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Signature$Delegate$CloneableDelegate_InnerClassesInfo_[] = {
	{"java.security.Signature$Delegate", "java.security.Signature", "Delegate", $PRIVATE | $STATIC},
	{"java.security.Signature$Delegate$CloneableDelegate", "java.security.Signature$Delegate", "CloneableDelegate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Signature$Delegate$CloneableDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.security.Signature$Delegate$CloneableDelegate",
	"java.security.Signature$Delegate",
	"java.lang.Cloneable",
	nullptr,
	_Signature$Delegate$CloneableDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_Signature$Delegate$CloneableDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Signature"
};

$Object* allocate$Signature$Delegate$CloneableDelegate($Class* clazz) {
	return $of($alloc(Signature$Delegate$CloneableDelegate));
}

$Object* Signature$Delegate$CloneableDelegate::clone() {
	 return this->$Signature$Delegate::clone();
}

$String* Signature$Delegate$CloneableDelegate::toString() {
	 return this->$Signature$Delegate::toString();
}

int32_t Signature$Delegate$CloneableDelegate::hashCode() {
	 return this->$Signature$Delegate::hashCode();
}

bool Signature$Delegate$CloneableDelegate::equals(Object$* obj) {
	 return this->$Signature$Delegate::equals(obj);
}

void Signature$Delegate$CloneableDelegate::finalize() {
	this->$Signature$Delegate::finalize();
}

void Signature$Delegate$CloneableDelegate::init$($SignatureSpi* digestSpi, $String* algorithm) {
	$Signature$Delegate::init$(digestSpi, algorithm);
}

Signature$Delegate$CloneableDelegate::Signature$Delegate$CloneableDelegate() {
}

$Class* Signature$Delegate$CloneableDelegate::load$($String* name, bool initialize) {
	$loadClass(Signature$Delegate$CloneableDelegate, name, initialize, &_Signature$Delegate$CloneableDelegate_ClassInfo_, allocate$Signature$Delegate$CloneableDelegate);
	return class$;
}

$Class* Signature$Delegate$CloneableDelegate::class$ = nullptr;

	} // security
} // java