#include <java/security/MessageDigest$Delegate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/MessageDigest$Delegate$CloneableDelegate.h>
#include <java/security/MessageDigest.h>
#include <java/security/MessageDigestSpi.h>
#include <java/security/Provider.h>
#include <java/util/Objects.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/util/MessageDigestSpi2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageDigest = ::java::security::MessageDigest;
using $MessageDigest$Delegate$CloneableDelegate = ::java::security::MessageDigest$Delegate$CloneableDelegate;
using $MessageDigestSpi = ::java::security::MessageDigestSpi;
using $Provider = ::java::security::Provider;
using $Objects = ::java::util::Objects;
using $SecretKey = ::javax::crypto::SecretKey;
using $MessageDigestSpi2 = ::sun::security::util::MessageDigestSpi2;

namespace java {
	namespace security {

$FieldInfo _MessageDigest$Delegate_FieldInfo_[] = {
	{"digestSpi", "Ljava/security/MessageDigestSpi;", nullptr, $PRIVATE | $FINAL, $field(MessageDigest$Delegate, digestSpi)},
	{}
};

$MethodInfo _MessageDigest$Delegate_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PRIVATE, $method(static_cast<void(MessageDigest$Delegate::*)($MessageDigestSpi*,$String*,$Provider*)>(&MessageDigest$Delegate::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"engineDigest", "()[B", nullptr, $PROTECTED},
	{"engineDigest", "([BII)I", nullptr, $PROTECTED, nullptr, "java.security.DigestException"},
	{"engineGetDigestLength", "()I", nullptr, $PROTECTED},
	{"engineReset", "()V", nullptr, $PROTECTED},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{"engineUpdate", "(Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidKeyException"},
	{"of", "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest$Delegate;", nullptr, $STATIC, $method(static_cast<MessageDigest$Delegate*(*)($MessageDigestSpi*,$String*,$Provider*)>(&MessageDigest$Delegate::of))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MessageDigest$Delegate_InnerClassesInfo_[] = {
	{"java.security.MessageDigest$Delegate", "java.security.MessageDigest", "Delegate", $PRIVATE | $STATIC},
	{"java.security.MessageDigest$Delegate$CloneableDelegate", "java.security.MessageDigest$Delegate", "CloneableDelegate", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _MessageDigest$Delegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.MessageDigest$Delegate",
	"java.security.MessageDigest",
	"sun.security.util.MessageDigestSpi2",
	_MessageDigest$Delegate_FieldInfo_,
	_MessageDigest$Delegate_MethodInfo_,
	nullptr,
	nullptr,
	_MessageDigest$Delegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.MessageDigest"
};

$Object* allocate$MessageDigest$Delegate($Class* clazz) {
	return $of($alloc(MessageDigest$Delegate));
}

$String* MessageDigest$Delegate::toString() {
	 return this->$MessageDigest::toString();
}

int32_t MessageDigest$Delegate::hashCode() {
	 return this->$MessageDigest::hashCode();
}

bool MessageDigest$Delegate::equals(Object$* obj) {
	 return this->$MessageDigest::equals(obj);
}

void MessageDigest$Delegate::finalize() {
	this->$MessageDigest::finalize();
}

MessageDigest$Delegate* MessageDigest$Delegate::of($MessageDigestSpi* digestSpi, $String* algo, $Provider* p) {
	$init(MessageDigest$Delegate);
	$Objects::requireNonNull(digestSpi);
	bool isCloneable = ($instanceOf($Cloneable, digestSpi));
	bool var$0 = isCloneable && $nc($($nc(p)->getName()))->startsWith("SunPKCS11"_s);
	if (var$0 && $nc($($nc($($of(p)->getClass()->getModule()))->getName()))->equals("jdk.crypto.cryptoki"_s)) {
		try {
			digestSpi->clone();
		} catch ($CloneNotSupportedException&) {
			$var($CloneNotSupportedException, cnse, $catch());
			isCloneable = false;
		}
	}
	return (isCloneable ? static_cast<MessageDigest$Delegate*>($new($MessageDigest$Delegate$CloneableDelegate, digestSpi, algo, p)) : $new(MessageDigest$Delegate, digestSpi, algo, p));
}

void MessageDigest$Delegate::init$($MessageDigestSpi* digestSpi, $String* algorithm, $Provider* p) {
	$MessageDigest::init$(algorithm, p);
	$set(this, digestSpi, digestSpi);
}

$Object* MessageDigest$Delegate::clone() {
	if ($instanceOf($Cloneable, this)) {
		$var($MessageDigest, that, $new($MessageDigest$Delegate$CloneableDelegate, $cast($MessageDigestSpi, $($nc(this->digestSpi)->clone())), $nc((static_cast<$MessageDigest*>(this)))->algorithm, $nc((static_cast<$MessageDigest*>(this)))->provider));
		that->state = $nc((static_cast<$MessageDigest*>(this)))->state;
		return $of(that);
	} else {
		$throwNew($CloneNotSupportedException);
	}
}

int32_t MessageDigest$Delegate::engineGetDigestLength() {
	return $nc(this->digestSpi)->engineGetDigestLength();
}

void MessageDigest$Delegate::engineUpdate(int8_t input) {
	$nc(this->digestSpi)->engineUpdate(input);
}

void MessageDigest$Delegate::engineUpdate($bytes* input, int32_t offset, int32_t len) {
	$nc(this->digestSpi)->engineUpdate(input, offset, len);
}

void MessageDigest$Delegate::engineUpdate($ByteBuffer* input) {
	$nc(this->digestSpi)->engineUpdate(input);
}

void MessageDigest$Delegate::engineUpdate($SecretKey* key) {
	if ($instanceOf($MessageDigestSpi2, this->digestSpi)) {
		$nc(($cast($MessageDigestSpi2, this->digestSpi)))->engineUpdate(key);
	} else {
		$throwNew($UnsupportedOperationException, "Digest does not support update of SecretKey object"_s);
	}
}

$bytes* MessageDigest$Delegate::engineDigest() {
	return $nc(this->digestSpi)->engineDigest();
}

int32_t MessageDigest$Delegate::engineDigest($bytes* buf, int32_t offset, int32_t len) {
	return $nc(this->digestSpi)->engineDigest(buf, offset, len);
}

void MessageDigest$Delegate::engineReset() {
	$nc(this->digestSpi)->engineReset();
}

MessageDigest$Delegate::MessageDigest$Delegate() {
}

$Class* MessageDigest$Delegate::load$($String* name, bool initialize) {
	$loadClass(MessageDigest$Delegate, name, initialize, &_MessageDigest$Delegate_ClassInfo_, allocate$MessageDigest$Delegate);
	return class$;
}

$Class* MessageDigest$Delegate::class$ = nullptr;

	} // security
} // java