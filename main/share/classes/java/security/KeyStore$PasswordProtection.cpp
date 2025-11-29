#include <java/security/KeyStore$PasswordProtection.h>

#include <java/lang/IllegalStateException.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace security {

$FieldInfo _KeyStore$PasswordProtection_FieldInfo_[] = {
	{"password", "[C", nullptr, $PRIVATE | $FINAL, $field(KeyStore$PasswordProtection, password)},
	{"protectionAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$PasswordProtection, protectionAlgorithm)},
	{"protectionParameters", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$PasswordProtection, protectionParameters)},
	{"destroyed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(KeyStore$PasswordProtection, destroyed)},
	{}
};

$MethodInfo _KeyStore$PasswordProtection_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([C)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStore$PasswordProtection::*)($chars*)>(&KeyStore$PasswordProtection::init$))},
	{"<init>", "([CLjava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStore$PasswordProtection::*)($chars*,$String*,$AlgorithmParameterSpec*)>(&KeyStore$PasswordProtection::init$))},
	{"destroy", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.security.auth.DestroyFailedException"},
	{"getPassword", "()[C", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getProtectionAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProtectionParameters", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"isDestroyed", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyStore$PasswordProtection_InnerClassesInfo_[] = {
	{"java.security.KeyStore$PasswordProtection", "java.security.KeyStore", "PasswordProtection", $PUBLIC | $STATIC},
	{"java.security.KeyStore$ProtectionParameter", "java.security.KeyStore", "ProtectionParameter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyStore$PasswordProtection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.KeyStore$PasswordProtection",
	"java.lang.Object",
	"java.security.KeyStore$ProtectionParameter,javax.security.auth.Destroyable",
	_KeyStore$PasswordProtection_FieldInfo_,
	_KeyStore$PasswordProtection_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStore$PasswordProtection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$PasswordProtection($Class* clazz) {
	return $of($alloc(KeyStore$PasswordProtection));
}

int32_t KeyStore$PasswordProtection::hashCode() {
	 return this->$KeyStore$ProtectionParameter::hashCode();
}

bool KeyStore$PasswordProtection::equals(Object$* obj) {
	 return this->$KeyStore$ProtectionParameter::equals(obj);
}

$Object* KeyStore$PasswordProtection::clone() {
	 return this->$KeyStore$ProtectionParameter::clone();
}

$String* KeyStore$PasswordProtection::toString() {
	 return this->$KeyStore$ProtectionParameter::toString();
}

void KeyStore$PasswordProtection::finalize() {
	this->$KeyStore$ProtectionParameter::finalize();
}

void KeyStore$PasswordProtection::init$($chars* password) {
	$set(this, password, (password == nullptr) ? ($chars*)nullptr : $cast($chars, $nc(password)->clone()));
	$set(this, protectionAlgorithm, nullptr);
	$set(this, protectionParameters, nullptr);
}

void KeyStore$PasswordProtection::init$($chars* password, $String* protectionAlgorithm, $AlgorithmParameterSpec* protectionParameters) {
	if (protectionAlgorithm == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	$set(this, password, (password == nullptr) ? ($chars*)nullptr : $cast($chars, $nc(password)->clone()));
	$set(this, protectionAlgorithm, protectionAlgorithm);
	$set(this, protectionParameters, protectionParameters);
}

$String* KeyStore$PasswordProtection::getProtectionAlgorithm() {
	return this->protectionAlgorithm;
}

$AlgorithmParameterSpec* KeyStore$PasswordProtection::getProtectionParameters() {
	return this->protectionParameters;
}

$chars* KeyStore$PasswordProtection::getPassword() {
	$synchronized(this) {
		if (this->destroyed) {
			$throwNew($IllegalStateException, "password has been cleared"_s);
		}
		return this->password;
	}
}

void KeyStore$PasswordProtection::destroy() {
	$synchronized(this) {
		this->destroyed = true;
		if (this->password != nullptr) {
			$Arrays::fill(this->password, u' ');
		}
	}
}

bool KeyStore$PasswordProtection::isDestroyed() {
	$synchronized(this) {
		return this->destroyed;
	}
}

KeyStore$PasswordProtection::KeyStore$PasswordProtection() {
}

$Class* KeyStore$PasswordProtection::load$($String* name, bool initialize) {
	$loadClass(KeyStore$PasswordProtection, name, initialize, &_KeyStore$PasswordProtection_ClassInfo_, allocate$KeyStore$PasswordProtection);
	return class$;
}

$Class* KeyStore$PasswordProtection::class$ = nullptr;

	} // security
} // java