#include <java/security/Signature$Delegate$CloneableDelegate.h>
#include <java/security/Signature$Delegate.h>
#include <java/security/SignatureSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signature$Delegate = ::java::security::Signature$Delegate;
using $SignatureSpi = ::java::security::SignatureSpi;

namespace java {
	namespace security {

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
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/security/SignatureSpi;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Signature$Delegate$CloneableDelegate, init$, void, $SignatureSpi*, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Signature$Delegate", "java.security.Signature", "Delegate", $PRIVATE | $STATIC},
		{"java.security.Signature$Delegate$CloneableDelegate", "java.security.Signature$Delegate", "CloneableDelegate", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.Signature$Delegate$CloneableDelegate",
		"java.security.Signature$Delegate",
		"java.lang.Cloneable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Signature"
	};
	$loadClass(Signature$Delegate$CloneableDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Signature$Delegate$CloneableDelegate));
	});
	return class$;
}

$Class* Signature$Delegate$CloneableDelegate::class$ = nullptr;

	} // security
} // java