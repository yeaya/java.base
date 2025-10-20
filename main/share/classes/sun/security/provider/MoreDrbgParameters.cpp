#include <sun/security/provider/MoreDrbgParameters.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/DrbgParameters$Capability.h>
#include <java/security/DrbgParameters$Instantiation.h>
#include <java/security/SecureRandomParameters.h>
#include <sun/security/provider/EntropySource.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $DrbgParameters$Capability = ::java::security::DrbgParameters$Capability;
using $DrbgParameters$Instantiation = ::java::security::DrbgParameters$Instantiation;
using $SecureRandomParameters = ::java::security::SecureRandomParameters;
using $EntropySource = ::sun::security::provider::EntropySource;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _MoreDrbgParameters_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MoreDrbgParameters, serialVersionUID)},
	{"es", "Lsun/security/provider/EntropySource;", nullptr, $FINAL | $TRANSIENT, $field(MoreDrbgParameters, es)},
	{"mech", "Ljava/lang/String;", nullptr, $FINAL, $field(MoreDrbgParameters, mech)},
	{"algorithm", "Ljava/lang/String;", nullptr, $FINAL, $field(MoreDrbgParameters, algorithm)},
	{"usedf", "Z", nullptr, $FINAL, $field(MoreDrbgParameters, usedf)},
	{"strength", "I", nullptr, $FINAL, $field(MoreDrbgParameters, strength)},
	{"capability", "Ljava/security/DrbgParameters$Capability;", nullptr, $FINAL, $field(MoreDrbgParameters, capability)},
	{"nonce", "[B", nullptr, 0, $field(MoreDrbgParameters, nonce)},
	{"personalizationString", "[B", nullptr, 0, $field(MoreDrbgParameters, personalizationString)},
	{}
};

$MethodInfo _MoreDrbgParameters_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/security/provider/EntropySource;Ljava/lang/String;Ljava/lang/String;[BZLjava/security/DrbgParameters$Instantiation;)V", nullptr, $PUBLIC, $method(static_cast<void(MoreDrbgParameters::*)($EntropySource*,$String*,$String*,$bytes*,bool,$DrbgParameters$Instantiation*)>(&MoreDrbgParameters::init$))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MoreDrbgParameters::*)($ObjectInputStream*)>(&MoreDrbgParameters::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MoreDrbgParameters_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.MoreDrbgParameters",
	"java.lang.Object",
	"java.security.SecureRandomParameters,java.io.Serializable",
	_MoreDrbgParameters_FieldInfo_,
	_MoreDrbgParameters_MethodInfo_
};

$Object* allocate$MoreDrbgParameters($Class* clazz) {
	return $of($alloc(MoreDrbgParameters));
}

int32_t MoreDrbgParameters::hashCode() {
	 return this->$SecureRandomParameters::hashCode();
}

bool MoreDrbgParameters::equals(Object$* obj) {
	 return this->$SecureRandomParameters::equals(obj);
}

$Object* MoreDrbgParameters::clone() {
	 return this->$SecureRandomParameters::clone();
}

void MoreDrbgParameters::finalize() {
	this->$SecureRandomParameters::finalize();
}

void MoreDrbgParameters::init$($EntropySource* es, $String* mech, $String* algorithm, $bytes* nonce, bool usedf, $DrbgParameters$Instantiation* config) {
	$set(this, mech, mech);
	$set(this, algorithm, algorithm);
	$set(this, es, es);
	$set(this, nonce, (nonce == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(nonce)->clone()));
	this->usedf = usedf;
	this->strength = $nc(config)->getStrength();
	$set(this, capability, config->getCapability());
	$set(this, personalizationString, config->getPersonalizationString());
}

$String* MoreDrbgParameters::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({this->mech, ","_s, this->algorithm, ","_s, $$str(this->usedf), ","_s, $$str(this->strength), ","_s, this->capability, ","_s, this->personalizationString});
}

void MoreDrbgParameters::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->nonce != nullptr) {
		$set(this, nonce, $cast($bytes, $nc(this->nonce)->clone()));
	}
	if (this->personalizationString != nullptr) {
		$set(this, personalizationString, $cast($bytes, $nc(this->personalizationString)->clone()));
	}
	if (this->capability == nullptr) {
		$throwNew($IllegalArgumentException, "Input data is corrupted"_s);
	}
}

MoreDrbgParameters::MoreDrbgParameters() {
}

$Class* MoreDrbgParameters::load$($String* name, bool initialize) {
	$loadClass(MoreDrbgParameters, name, initialize, &_MoreDrbgParameters_ClassInfo_, allocate$MoreDrbgParameters);
	return class$;
}

$Class* MoreDrbgParameters::class$ = nullptr;

		} // provider
	} // security
} // sun