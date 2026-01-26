#include <java/security/SignedObject.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutput.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/Signature.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Signature = ::java::security::Signature;

namespace java {
	namespace security {

$FieldInfo _SignedObject_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SignedObject, serialVersionUID)},
	{"content", "[B", nullptr, $PRIVATE, $field(SignedObject, content)},
	{"signature", "[B", nullptr, $PRIVATE, $field(SignedObject, signature)},
	{"thealgorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SignedObject, thealgorithm)},
	{}
};

$MethodInfo _SignedObject_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V", nullptr, $PUBLIC, $method(SignedObject, init$, void, $Serializable*, $PrivateKey*, $Signature*), "java.io.IOException,java.security.InvalidKeyException,java.security.SignatureException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(SignedObject, getAlgorithm, $String*)},
	{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(SignedObject, getObject, $Object*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"getSignature", "()[B", nullptr, $PUBLIC, $method(SignedObject, getSignature, $bytes*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(SignedObject, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"sign", "(Ljava/security/PrivateKey;Ljava/security/Signature;)V", nullptr, $PRIVATE, $method(SignedObject, sign, void, $PrivateKey*, $Signature*), "java.security.InvalidKeyException,java.security.SignatureException"},
	{"verify", "(Ljava/security/PublicKey;Ljava/security/Signature;)Z", nullptr, $PUBLIC, $method(SignedObject, verify, bool, $PublicKey*, $Signature*), "java.security.InvalidKeyException,java.security.SignatureException"},
	{}
};

$ClassInfo _SignedObject_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.SignedObject",
	"java.lang.Object",
	"java.io.Serializable",
	_SignedObject_FieldInfo_,
	_SignedObject_MethodInfo_
};

$Object* allocate$SignedObject($Class* clazz) {
	return $of($alloc(SignedObject));
}

void SignedObject::init$($Serializable* object, $PrivateKey* signingKey, $Signature* signingEngine) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, b, $new($ByteArrayOutputStream));
	$var($ObjectOutput, a, $new($ObjectOutputStream, b));
	a->writeObject(object);
	a->flush();
	a->close();
	$set(this, content, b->toByteArray());
	b->close();
	this->sign(signingKey, signingEngine);
}

$Object* SignedObject::getObject() {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayInputStream, b, $new($ByteArrayInputStream, this->content));
	$var($ObjectInput, a, $new($ObjectInputStream, b));
	$var($Object, obj, a->readObject());
	b->close();
	a->close();
	return $of(obj);
}

$bytes* SignedObject::getSignature() {
	return $cast($bytes, $nc(this->signature)->clone());
}

$String* SignedObject::getAlgorithm() {
	return this->thealgorithm;
}

bool SignedObject::verify($PublicKey* verificationKey, $Signature* verificationEngine) {
	$useLocalCurrentObjectStackCache();
	$nc(verificationEngine)->initVerify(verificationKey);
	verificationEngine->update($cast($bytes, $($nc(this->content)->clone())));
	return verificationEngine->verify($cast($bytes, $($nc(this->signature)->clone())));
}

void SignedObject::sign($PrivateKey* signingKey, $Signature* signingEngine) {
	$useLocalCurrentObjectStackCache();
	$nc(signingEngine)->initSign(signingKey);
	signingEngine->update($cast($bytes, $($nc(this->content)->clone())));
	$set(this, signature, $cast($bytes, $nc($(signingEngine->sign()))->clone()));
	$set(this, thealgorithm, signingEngine->getAlgorithm());
}

void SignedObject::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, fields, $nc(s)->readFields());
	$set(this, content, $cast($bytes, $nc(($cast($bytes, $($nc(fields)->get("content"_s, ($Object*)nullptr)))))->clone()));
	$set(this, signature, $cast($bytes, $nc(($cast($bytes, $(fields->get("signature"_s, ($Object*)nullptr)))))->clone()));
	$set(this, thealgorithm, $cast($String, fields->get("thealgorithm"_s, ($Object*)nullptr)));
}

SignedObject::SignedObject() {
}

$Class* SignedObject::load$($String* name, bool initialize) {
	$loadClass(SignedObject, name, initialize, &_SignedObject_ClassInfo_, allocate$SignedObject);
	return class$;
}

$Class* SignedObject::class$ = nullptr;

	} // security
} // java