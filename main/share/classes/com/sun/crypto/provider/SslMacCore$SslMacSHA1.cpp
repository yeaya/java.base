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

$FieldInfo _SslMacCore$SslMacSHA1_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/SslMacCore;", nullptr, $PRIVATE | $FINAL, $field(SslMacCore$SslMacSHA1, core)},
	{"shaPad1", "[B", nullptr, $STATIC | $FINAL, $staticField(SslMacCore$SslMacSHA1, shaPad1)},
	{"shaPad2", "[B", nullptr, $STATIC | $FINAL, $staticField(SslMacCore$SslMacSHA1, shaPad2)},
	{}
};

$MethodInfo _SslMacCore$SslMacSHA1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SslMacCore$SslMacSHA1::*)()>(&SslMacCore$SslMacSHA1::init$)), "java.security.NoSuchAlgorithmException"},
	{"engineDoFinal", "()[B", nullptr, $PROTECTED},
	{"engineGetMacLength", "()I", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineReset", "()V", nullptr, $PROTECTED},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SslMacCore$SslMacSHA1_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.SslMacCore$SslMacSHA1", "com.sun.crypto.provider.SslMacCore", "SslMacSHA1", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SslMacCore$SslMacSHA1_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.SslMacCore$SslMacSHA1",
	"javax.crypto.MacSpi",
	nullptr,
	_SslMacCore$SslMacSHA1_FieldInfo_,
	_SslMacCore$SslMacSHA1_MethodInfo_,
	nullptr,
	nullptr,
	_SslMacCore$SslMacSHA1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.SslMacCore"
};

$Object* allocate$SslMacCore$SslMacSHA1($Class* clazz) {
	return $of($alloc(SslMacCore$SslMacSHA1));
}

$bytes* SslMacCore$SslMacSHA1::shaPad1 = nullptr;
$bytes* SslMacCore$SslMacSHA1::shaPad2 = nullptr;

void SslMacCore$SslMacSHA1::init$() {
	$MacSpi::init$();
	$set(this, core, $new($SslMacCore, "SHA"_s, SslMacCore$SslMacSHA1::shaPad1, SslMacCore$SslMacSHA1::shaPad2));
}

int32_t SslMacCore$SslMacSHA1::engineGetMacLength() {
	return $nc(this->core)->getDigestLength();
}

void SslMacCore$SslMacSHA1::engineInit($Key* key, $AlgorithmParameterSpec* params) {
	$nc(this->core)->init(key, params);
}

void SslMacCore$SslMacSHA1::engineUpdate(int8_t input) {
	$nc(this->core)->update(input);
}

void SslMacCore$SslMacSHA1::engineUpdate($bytes* input, int32_t offset, int32_t len) {
	$nc(this->core)->update(input, offset, len);
}

void SslMacCore$SslMacSHA1::engineUpdate($ByteBuffer* input) {
	$nc(this->core)->update(input);
}

$bytes* SslMacCore$SslMacSHA1::engineDoFinal() {
	return $nc(this->core)->doFinal();
}

void SslMacCore$SslMacSHA1::engineReset() {
	$nc(this->core)->reset();
}

void clinit$SslMacCore$SslMacSHA1($Class* class$) {
	$assignStatic(SslMacCore$SslMacSHA1::shaPad1, $TlsPrfGenerator::genPad((int8_t)54, 40));
	$assignStatic(SslMacCore$SslMacSHA1::shaPad2, $TlsPrfGenerator::genPad((int8_t)92, 40));
}

SslMacCore$SslMacSHA1::SslMacCore$SslMacSHA1() {
}

$Class* SslMacCore$SslMacSHA1::load$($String* name, bool initialize) {
	$loadClass(SslMacCore$SslMacSHA1, name, initialize, &_SslMacCore$SslMacSHA1_ClassInfo_, clinit$SslMacCore$SslMacSHA1, allocate$SslMacCore$SslMacSHA1);
	return class$;
}

$Class* SslMacCore$SslMacSHA1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com