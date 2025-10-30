#include <com/sun/crypto/provider/SslMacCore$SslMacMD5.h>

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

$FieldInfo _SslMacCore$SslMacMD5_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/SslMacCore;", nullptr, $PRIVATE | $FINAL, $field(SslMacCore$SslMacMD5, core)},
	{"md5Pad1", "[B", nullptr, $STATIC | $FINAL, $staticField(SslMacCore$SslMacMD5, md5Pad1)},
	{"md5Pad2", "[B", nullptr, $STATIC | $FINAL, $staticField(SslMacCore$SslMacMD5, md5Pad2)},
	{}
};

$MethodInfo _SslMacCore$SslMacMD5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SslMacCore$SslMacMD5::*)()>(&SslMacCore$SslMacMD5::init$)), "java.security.NoSuchAlgorithmException"},
	{"engineDoFinal", "()[B", nullptr, $PROTECTED},
	{"engineGetMacLength", "()I", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineReset", "()V", nullptr, $PROTECTED},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SslMacCore$SslMacMD5_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.SslMacCore$SslMacMD5", "com.sun.crypto.provider.SslMacCore", "SslMacMD5", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SslMacCore$SslMacMD5_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.SslMacCore$SslMacMD5",
	"javax.crypto.MacSpi",
	nullptr,
	_SslMacCore$SslMacMD5_FieldInfo_,
	_SslMacCore$SslMacMD5_MethodInfo_,
	nullptr,
	nullptr,
	_SslMacCore$SslMacMD5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.SslMacCore"
};

$Object* allocate$SslMacCore$SslMacMD5($Class* clazz) {
	return $of($alloc(SslMacCore$SslMacMD5));
}

$bytes* SslMacCore$SslMacMD5::md5Pad1 = nullptr;
$bytes* SslMacCore$SslMacMD5::md5Pad2 = nullptr;

void SslMacCore$SslMacMD5::init$() {
	$MacSpi::init$();
	$set(this, core, $new($SslMacCore, "MD5"_s, SslMacCore$SslMacMD5::md5Pad1, SslMacCore$SslMacMD5::md5Pad2));
}

int32_t SslMacCore$SslMacMD5::engineGetMacLength() {
	return $nc(this->core)->getDigestLength();
}

void SslMacCore$SslMacMD5::engineInit($Key* key, $AlgorithmParameterSpec* params) {
	$nc(this->core)->init(key, params);
}

void SslMacCore$SslMacMD5::engineUpdate(int8_t input) {
	$nc(this->core)->update(input);
}

void SslMacCore$SslMacMD5::engineUpdate($bytes* input, int32_t offset, int32_t len) {
	$nc(this->core)->update(input, offset, len);
}

void SslMacCore$SslMacMD5::engineUpdate($ByteBuffer* input) {
	$nc(this->core)->update(input);
}

$bytes* SslMacCore$SslMacMD5::engineDoFinal() {
	return $nc(this->core)->doFinal();
}

void SslMacCore$SslMacMD5::engineReset() {
	$nc(this->core)->reset();
}

void clinit$SslMacCore$SslMacMD5($Class* class$) {
	$assignStatic(SslMacCore$SslMacMD5::md5Pad1, $TlsPrfGenerator::genPad((int8_t)54, 48));
	$assignStatic(SslMacCore$SslMacMD5::md5Pad2, $TlsPrfGenerator::genPad((int8_t)92, 48));
}

SslMacCore$SslMacMD5::SslMacCore$SslMacMD5() {
}

$Class* SslMacCore$SslMacMD5::load$($String* name, bool initialize) {
	$loadClass(SslMacCore$SslMacMD5, name, initialize, &_SslMacCore$SslMacMD5_ClassInfo_, clinit$SslMacCore$SslMacMD5, allocate$SslMacCore$SslMacMD5);
	return class$;
}

$Class* SslMacCore$SslMacMD5::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com