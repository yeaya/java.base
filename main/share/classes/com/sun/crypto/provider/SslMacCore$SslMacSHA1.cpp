#include <com/sun/crypto/provider/SslMacCore$SslMacSHA1.h>
#include <com/sun/crypto/provider/SslMacCore.h>
#include <com/sun/crypto/provider/TlsPrfGenerator.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/MacSpi.h>
#include <jcpp.h>

using $SslMacCore = ::com::sun::crypto::provider::SslMacCore;
using $TlsPrfGenerator = ::com::sun::crypto::provider::TlsPrfGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MacSpi = ::javax::crypto::MacSpi;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$bytes* SslMacCore$SslMacSHA1::shaPad1 = nullptr;
$bytes* SslMacCore$SslMacSHA1::shaPad2 = nullptr;

void SslMacCore$SslMacSHA1::init$() {
	$MacSpi::init$();
	$set(this, core, $new($SslMacCore, "SHA"_s, SslMacCore$SslMacSHA1::shaPad1, SslMacCore$SslMacSHA1::shaPad2));
}

int32_t SslMacCore$SslMacSHA1::engineGetMacLength() {
	return this->core->getDigestLength();
}

void SslMacCore$SslMacSHA1::engineInit($Key* key, $AlgorithmParameterSpec* params) {
	this->core->init(key, params);
}

void SslMacCore$SslMacSHA1::engineUpdate(int8_t input) {
	this->core->update(input);
}

void SslMacCore$SslMacSHA1::engineUpdate($bytes* input, int32_t offset, int32_t len) {
	this->core->update(input, offset, len);
}

void SslMacCore$SslMacSHA1::engineUpdate($ByteBuffer* input) {
	this->core->update(input);
}

$bytes* SslMacCore$SslMacSHA1::engineDoFinal() {
	return this->core->doFinal();
}

void SslMacCore$SslMacSHA1::engineReset() {
	this->core->reset();
}

void SslMacCore$SslMacSHA1::clinit$($Class* clazz) {
	$assignStatic(SslMacCore$SslMacSHA1::shaPad1, $TlsPrfGenerator::genPad((int8_t)54, 40));
	$assignStatic(SslMacCore$SslMacSHA1::shaPad2, $TlsPrfGenerator::genPad((int8_t)92, 40));
}

SslMacCore$SslMacSHA1::SslMacCore$SslMacSHA1() {
}

$Class* SslMacCore$SslMacSHA1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"core", "Lcom/sun/crypto/provider/SslMacCore;", nullptr, $PRIVATE | $FINAL, $field(SslMacCore$SslMacSHA1, core)},
		{"shaPad1", "[B", nullptr, $STATIC | $FINAL, $staticField(SslMacCore$SslMacSHA1, shaPad1)},
		{"shaPad2", "[B", nullptr, $STATIC | $FINAL, $staticField(SslMacCore$SslMacSHA1, shaPad2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SslMacCore$SslMacSHA1, init$, void), "java.security.NoSuchAlgorithmException"},
		{"engineDoFinal", "()[B", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineDoFinal, $bytes*)},
		{"engineGetMacLength", "()I", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineGetMacLength, int32_t)},
		{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineInit, void, $Key*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"engineReset", "()V", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineReset, void)},
		{"engineUpdate", "(B)V", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineUpdate, void, int8_t)},
		{"engineUpdate", "([BII)V", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineUpdate, void, $bytes*, int32_t, int32_t)},
		{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED, $virtualMethod(SslMacCore$SslMacSHA1, engineUpdate, void, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.SslMacCore$SslMacSHA1", "com.sun.crypto.provider.SslMacCore", "SslMacSHA1", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.SslMacCore$SslMacSHA1",
		"javax.crypto.MacSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.SslMacCore"
	};
	$loadClass(SslMacCore$SslMacSHA1, name, initialize, &classInfo$$, SslMacCore$SslMacSHA1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SslMacCore$SslMacSHA1);
	});
	return class$;
}

$Class* SslMacCore$SslMacSHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com