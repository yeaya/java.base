#include <sun/security/ssl/Authenticator$MacImpl.h>

#include <java/nio/ByteBuffer.h>
#include <java/security/Key.h>
#include <javax/crypto/Mac.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/Authenticator$1.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <jcpp.h>

#undef M_NULL
#undef TLS10

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Key = ::java::security::Key;
using $Mac = ::javax::crypto::Mac;
using $SecretKey = ::javax::crypto::SecretKey;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$1 = ::sun::security::ssl::Authenticator$1;
using $Authenticator$MAC = ::sun::security::ssl::Authenticator$MAC;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Authenticator$MacImpl_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/Authenticator;", nullptr, $FINAL | $SYNTHETIC, $field(Authenticator$MacImpl, this$0)},
	{"macAlg", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$MacImpl, macAlg$)},
	{"mac", "Ljavax/crypto/Mac;", nullptr, $PRIVATE | $FINAL, $field(Authenticator$MacImpl, mac)},
	{}
};

$MethodInfo _Authenticator$MacImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$MacImpl::*)($Authenticator*)>(&Authenticator$MacImpl::init$))},
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite$MacAlg;Ljavax/crypto/SecretKey;)V", nullptr, $PRIVATE, $method(static_cast<void(Authenticator$MacImpl::*)($Authenticator*,$ProtocolVersion*,$CipherSuite$MacAlg*,$SecretKey*)>(&Authenticator$MacImpl::init$)), "java.security.NoSuchAlgorithmException,java.security.InvalidKeyException"},
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Authenticator$MacImpl_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$MacImpl", "sun.security.ssl.Authenticator", "MacImpl", $PRIVATE},
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$MacImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.Authenticator$MacImpl",
	"java.lang.Object",
	"sun.security.ssl.Authenticator$MAC",
	_Authenticator$MacImpl_FieldInfo_,
	_Authenticator$MacImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$MacImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$MacImpl($Class* clazz) {
	return $of($alloc(Authenticator$MacImpl));
}

void Authenticator$MacImpl::init$($Authenticator* this$0) {
	$set(this, this$0, this$0);
	$init($CipherSuite$MacAlg);
	$set(this, macAlg$, $CipherSuite$MacAlg::M_NULL);
	$set(this, mac, nullptr);
}

void Authenticator$MacImpl::init$($Authenticator* this$0, $ProtocolVersion* protocolVersion, $CipherSuite$MacAlg* macAlg, $SecretKey* key) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	if (macAlg == nullptr) {
		$throwNew($RuntimeException, "Null MacAlg"_s);
	}
	$init($ProtocolVersion);
	bool useSSLMac = ($nc(protocolVersion)->id < $ProtocolVersion::TLS10->id);
	$var($String, algorithm, nullptr);
	$init($Authenticator$1);
	switch ($nc($Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg)->get($nc((macAlg))->ordinal())) {
	case 1:
		{
			$assign(algorithm, useSSLMac ? "SslMacMD5"_s : "HmacMD5"_s);
			break;
		}
	case 2:
		{
			$assign(algorithm, useSSLMac ? "SslMacSHA1"_s : "HmacSHA1"_s);
			break;
		}
	case 3:
		{
			$assign(algorithm, "HmacSHA256"_s);
			break;
		}
	case 4:
		{
			$assign(algorithm, "HmacSHA384"_s);
			break;
		}
	default:
		{
			$throwNew($RuntimeException, $$str({"Unknown MacAlg "_s, macAlg}));
		}
	}
	$var($Mac, m, $Mac::getInstance(algorithm));
	$nc(m)->init(key);
	$set(this, macAlg$, macAlg);
	$set(this, mac, m);
}

$CipherSuite$MacAlg* Authenticator$MacImpl::macAlg() {
	return this->macAlg$;
}

$bytes* Authenticator$MacImpl::compute(int8_t type, $ByteBuffer* bb, $bytes* sequence, bool isSimulated) {
	if (this->macAlg$->size == 0) {
		return $new($bytes, 0);
	}
	if (!isSimulated) {
		$var($bytes, additional, this->this$0->acquireAuthenticationBytes(type, $nc(bb)->remaining(), sequence));
		$nc(this->mac)->update(additional);
	}
	$nc(this->mac)->update(bb);
	return $nc(this->mac)->doFinal();
}

Authenticator$MacImpl::Authenticator$MacImpl() {
}

$Class* Authenticator$MacImpl::load$($String* name, bool initialize) {
	$loadClass(Authenticator$MacImpl, name, initialize, &_Authenticator$MacImpl_ClassInfo_, allocate$Authenticator$MacImpl);
	return class$;
}

$Class* Authenticator$MacImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun