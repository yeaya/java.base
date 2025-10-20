#include <sun/security/ssl/CipherSuite.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <sun/security/ssl/CipherSuite$1.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/CipherType.h>
#include <sun/security/ssl/DTLSRecord.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLRecord.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef B_3DES
#undef B_AES_128
#undef B_AES_128_GCM
#undef B_AES_128_GCM_IV
#undef B_AES_256
#undef B_AES_256_GCM
#undef B_AES_256_GCM_IV
#undef B_DES
#undef B_DES_40
#undef B_NULL
#undef CS_00AA
#undef CS_00AB
#undef CS_00AC
#undef CS_00AD
#undef CS_00AE
#undef CS_00AF
#undef CS_00BA
#undef CS_00BB
#undef CS_00BC
#undef CS_00BD
#undef CS_00BE
#undef CS_00BF
#undef CS_C01A
#undef CS_C01B
#undef CS_C01C
#undef CS_C01D
#undef CS_C01E
#undef CS_C01F
#undef CS_C03A
#undef CS_C03B
#undef CS_C03C
#undef CS_C03D
#undef CS_C03E
#undef CS_C03F
#undef CS_C04A
#undef CS_C04B
#undef CS_C04C
#undef CS_C04D
#undef CS_C04E
#undef CS_C04F
#undef CS_C05A
#undef CS_C05B
#undef CS_C05C
#undef CS_C05D
#undef CS_C05E
#undef CS_C05F
#undef CS_C06A
#undef CS_C06B
#undef CS_C06C
#undef CS_C06D
#undef CS_C06E
#undef CS_C06F
#undef CS_C07A
#undef CS_C07B
#undef CS_C07C
#undef CS_C07D
#undef CS_C07E
#undef CS_C07F
#undef CS_C08A
#undef CS_C08B
#undef CS_C08C
#undef CS_C08D
#undef CS_C08E
#undef CS_C08F
#undef CS_C09A
#undef CS_C09B
#undef CS_C09C
#undef CS_C09D
#undef CS_C09E
#undef CS_C09F
#undef CS_C0A0
#undef CS_C0A1
#undef CS_C0A2
#undef CS_C0A3
#undef CS_C0A4
#undef CS_C0A5
#undef CS_C0A6
#undef CS_C0A7
#undef CS_C0A8
#undef CS_C0A9
#undef CS_C0AA
#undef CS_C0AB
#undef CS_C0AC
#undef CS_C0AD
#undef CS_C0AE
#undef CS_C0AF
#undef CS_FEFE
#undef CS_FEFF
#undef CS_FFE0
#undef CS_FFE1
#undef C_NULL
#undef DTLS12
#undef H_NONE
#undef H_SHA256
#undef H_SHA384
#undef K_DHE_DSS
#undef K_DHE_DSS_EXPORT
#undef K_DHE_RSA
#undef K_DHE_RSA_EXPORT
#undef K_DH_ANON
#undef K_DH_ANON_EXPORT
#undef K_ECDHE_ECDSA
#undef K_ECDHE_RSA
#undef K_ECDH_ANON
#undef K_ECDH_ECDSA
#undef K_ECDH_RSA
#undef K_RSA
#undef K_RSA_EXPORT
#undef K_SCSV
#undef M_MD5
#undef M_NULL
#undef M_SHA
#undef M_SHA256
#undef M_SHA384
#undef PROTOCOLS_EMPTY
#undef PROTOCOLS_OF_12
#undef PROTOCOLS_OF_13
#undef PROTOCOLS_TO_10
#undef PROTOCOLS_TO_11
#undef PROTOCOLS_TO_12
#undef PROTOCOLS_TO_TLS12
#undef SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA
#undef SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA
#undef SSL_DHE_DSS_WITH_DES_CBC_SHA
#undef SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA
#undef SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA
#undef SSL_DHE_RSA_WITH_DES_CBC_SHA
#undef SSL_RSA_EXPORT_WITH_DES40_CBC_SHA
#undef SSL_RSA_WITH_3DES_EDE_CBC_SHA
#undef SSL_RSA_WITH_DES_CBC_SHA
#undef SSL_RSA_WITH_NULL_MD5
#undef SSL_RSA_WITH_NULL_SHA
#undef TLS12
#undef TLS_DHE_DSS_WITH_AES_128_CBC_SHA
#undef TLS_DHE_DSS_WITH_AES_256_CBC_SHA
#undef TLS_DHE_RSA_WITH_AES_128_CBC_SHA
#undef TLS_DHE_RSA_WITH_AES_256_CBC_SHA
#undef TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA
#undef TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
#undef TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
#undef TLS_ECDHE_ECDSA_WITH_NULL_SHA
#undef TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
#undef TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
#undef TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
#undef TLS_ECDHE_RSA_WITH_NULL_SHA
#undef TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA
#undef TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA
#undef TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA
#undef TLS_ECDH_ECDSA_WITH_NULL_SHA
#undef TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA
#undef TLS_ECDH_RSA_WITH_AES_128_CBC_SHA
#undef TLS_ECDH_RSA_WITH_AES_256_CBC_SHA
#undef TLS_ECDH_RSA_WITH_NULL_SHA
#undef TLS_EMPTY_RENEGOTIATION_INFO_SCSV
#undef TLS_RSA_WITH_AES_128_CBC_SHA
#undef TLS_RSA_WITH_AES_256_CBC_SHA
#undef TLS_RSA_WITH_NULL_SHA256

using $CipherSuiteArray = $Array<::sun::security::ssl::CipherSuite>;
using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $CipherSuite$1 = ::sun::security::ssl::CipherSuite$1;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $CipherType = ::sun::security::ssl::CipherType;
using $DTLSRecord = ::sun::security::ssl::DTLSRecord;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLRecord = ::sun::security::ssl::SSLRecord;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CipherSuite_FieldInfo_[] = {
	{"TLS_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_AES_256_GCM_SHA384)},
	{"TLS_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_AES_128_GCM_SHA256)},
	{"TLS_CHACHA20_POLY1305_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_CHACHA20_POLY1305_SHA256)},
	{"TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384)},
	{"TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256)},
	{"TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256)},
	{"TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384)},
	{"TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256)},
	{"TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256)},
	{"TLS_DHE_RSA_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_AES_256_GCM_SHA384)},
	{"TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256)},
	{"TLS_DHE_DSS_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_DSS_WITH_AES_256_GCM_SHA384)},
	{"TLS_DHE_RSA_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_AES_128_GCM_SHA256)},
	{"TLS_DHE_DSS_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_DSS_WITH_AES_128_GCM_SHA256)},
	{"TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384)},
	{"TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384)},
	{"TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256)},
	{"TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256)},
	{"TLS_DHE_RSA_WITH_AES_256_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_AES_256_CBC_SHA256)},
	{"TLS_DHE_DSS_WITH_AES_256_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_DSS_WITH_AES_256_CBC_SHA256)},
	{"TLS_DHE_RSA_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_AES_128_CBC_SHA256)},
	{"TLS_DHE_DSS_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_DSS_WITH_AES_128_CBC_SHA256)},
	{"TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384)},
	{"TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384)},
	{"TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256)},
	{"TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256)},
	{"TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384)},
	{"TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384)},
	{"TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256)},
	{"TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256)},
	{"TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA)},
	{"TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA)},
	{"TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA)},
	{"TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA)},
	{"TLS_DHE_RSA_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_AES_256_CBC_SHA)},
	{"TLS_DHE_DSS_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_DSS_WITH_AES_256_CBC_SHA)},
	{"TLS_DHE_RSA_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_RSA_WITH_AES_128_CBC_SHA)},
	{"TLS_DHE_DSS_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DHE_DSS_WITH_AES_128_CBC_SHA)},
	{"TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA)},
	{"TLS_ECDH_RSA_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_AES_256_CBC_SHA)},
	{"TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA)},
	{"TLS_ECDH_RSA_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_AES_128_CBC_SHA)},
	{"TLS_RSA_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_AES_256_GCM_SHA384)},
	{"TLS_RSA_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_AES_128_GCM_SHA256)},
	{"TLS_RSA_WITH_AES_256_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_AES_256_CBC_SHA256)},
	{"TLS_RSA_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_AES_128_CBC_SHA256)},
	{"TLS_RSA_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_AES_256_CBC_SHA)},
	{"TLS_RSA_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_AES_128_CBC_SHA)},
	{"TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA)},
	{"TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA)},
	{"SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA)},
	{"SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA)},
	{"TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA)},
	{"TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA)},
	{"SSL_RSA_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_WITH_3DES_EDE_CBC_SHA)},
	{"TLS_EMPTY_RENEGOTIATION_INFO_SCSV", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_EMPTY_RENEGOTIATION_INFO_SCSV)},
	{"TLS_DH_anon_WITH_AES_256_GCM_SHA384", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DH_anon_WITH_AES_256_GCM_SHA384)},
	{"TLS_DH_anon_WITH_AES_128_GCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DH_anon_WITH_AES_128_GCM_SHA256)},
	{"TLS_DH_anon_WITH_AES_256_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DH_anon_WITH_AES_256_CBC_SHA256)},
	{"TLS_ECDH_anon_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_anon_WITH_AES_256_CBC_SHA)},
	{"TLS_DH_anon_WITH_AES_256_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DH_anon_WITH_AES_256_CBC_SHA)},
	{"TLS_DH_anon_WITH_AES_128_CBC_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DH_anon_WITH_AES_128_CBC_SHA256)},
	{"TLS_ECDH_anon_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_anon_WITH_AES_128_CBC_SHA)},
	{"TLS_DH_anon_WITH_AES_128_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_DH_anon_WITH_AES_128_CBC_SHA)},
	{"TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA)},
	{"SSL_DH_anon_WITH_3DES_EDE_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DH_anon_WITH_3DES_EDE_CBC_SHA)},
	{"TLS_ECDHE_ECDSA_WITH_RC4_128_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_RC4_128_SHA)},
	{"TLS_ECDHE_RSA_WITH_RC4_128_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_RC4_128_SHA)},
	{"SSL_RSA_WITH_RC4_128_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_WITH_RC4_128_SHA)},
	{"TLS_ECDH_ECDSA_WITH_RC4_128_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_RC4_128_SHA)},
	{"TLS_ECDH_RSA_WITH_RC4_128_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_RC4_128_SHA)},
	{"SSL_RSA_WITH_RC4_128_MD5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_WITH_RC4_128_MD5)},
	{"TLS_ECDH_anon_WITH_RC4_128_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_anon_WITH_RC4_128_SHA)},
	{"SSL_DH_anon_WITH_RC4_128_MD5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DH_anon_WITH_RC4_128_MD5)},
	{"SSL_RSA_WITH_DES_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_WITH_DES_CBC_SHA)},
	{"SSL_DHE_RSA_WITH_DES_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DHE_RSA_WITH_DES_CBC_SHA)},
	{"SSL_DHE_DSS_WITH_DES_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DHE_DSS_WITH_DES_CBC_SHA)},
	{"SSL_DH_anon_WITH_DES_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DH_anon_WITH_DES_CBC_SHA)},
	{"SSL_RSA_EXPORT_WITH_DES40_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_EXPORT_WITH_DES40_CBC_SHA)},
	{"SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA)},
	{"SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA)},
	{"SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA)},
	{"SSL_RSA_EXPORT_WITH_RC4_40_MD5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_EXPORT_WITH_RC4_40_MD5)},
	{"SSL_DH_anon_EXPORT_WITH_RC4_40_MD5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_DH_anon_EXPORT_WITH_RC4_40_MD5)},
	{"TLS_RSA_WITH_NULL_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_RSA_WITH_NULL_SHA256)},
	{"TLS_ECDHE_ECDSA_WITH_NULL_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_ECDSA_WITH_NULL_SHA)},
	{"TLS_ECDHE_RSA_WITH_NULL_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDHE_RSA_WITH_NULL_SHA)},
	{"SSL_RSA_WITH_NULL_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_WITH_NULL_SHA)},
	{"TLS_ECDH_ECDSA_WITH_NULL_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_ECDSA_WITH_NULL_SHA)},
	{"TLS_ECDH_RSA_WITH_NULL_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_RSA_WITH_NULL_SHA)},
	{"TLS_ECDH_anon_WITH_NULL_SHA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_ECDH_anon_WITH_NULL_SHA)},
	{"SSL_RSA_WITH_NULL_MD5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, SSL_RSA_WITH_NULL_MD5)},
	{"TLS_AES_128_CCM_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_AES_128_CCM_SHA256)},
	{"TLS_AES_128_CCM_8_SHA256", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, TLS_AES_128_CCM_8_SHA256)},
	{"CS_0006", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0006)},
	{"CS_0007", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0007)},
	{"CS_000B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_000B)},
	{"CS_000C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_000C)},
	{"CS_000D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_000D)},
	{"CS_000E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_000E)},
	{"CS_000F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_000F)},
	{"CS_0010", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0010)},
	{"CS_001C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_001C)},
	{"CS_001D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_001D)},
	{"CS_0062", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0062)},
	{"CS_0063", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0063)},
	{"CS_0064", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0064)},
	{"CS_0065", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0065)},
	{"CS_0066", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0066)},
	{"CS_FFE0", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_FFE0)},
	{"CS_FFE1", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_FFE1)},
	{"CS_FEFE", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_FEFE)},
	{"CS_FEFF", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_FEFF)},
	{"CS_001E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_001E)},
	{"CS_001F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_001F)},
	{"CS_0020", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0020)},
	{"CS_0021", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0021)},
	{"CS_0022", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0022)},
	{"CS_0023", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0023)},
	{"CS_0024", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0024)},
	{"CS_0025", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0025)},
	{"CS_0026", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0026)},
	{"CS_0027", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0027)},
	{"CS_0028", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0028)},
	{"CS_0029", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0029)},
	{"CS_002A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_002A)},
	{"CS_002B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_002B)},
	{"CS_0096", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0096)},
	{"CS_0097", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0097)},
	{"CS_0098", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0098)},
	{"CS_0099", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0099)},
	{"CS_009A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_009A)},
	{"CS_009B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_009B)},
	{"CS_008A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_008A)},
	{"CS_008B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_008B)},
	{"CS_008C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_008C)},
	{"CS_008D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_008D)},
	{"CS_008E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_008E)},
	{"CS_008F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_008F)},
	{"CS_0090", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0090)},
	{"CS_0091", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0091)},
	{"CS_0092", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0092)},
	{"CS_0093", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0093)},
	{"CS_0094", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0094)},
	{"CS_0095", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0095)},
	{"CS_002C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_002C)},
	{"CS_002D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_002D)},
	{"CS_002E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_002E)},
	{"CS_0030", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0030)},
	{"CS_0031", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0031)},
	{"CS_0036", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0036)},
	{"CS_0037", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0037)},
	{"CS_003E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_003E)},
	{"CS_003F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_003F)},
	{"CS_0068", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0068)},
	{"CS_0069", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0069)},
	{"CS_00A0", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00A0)},
	{"CS_00A1", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00A1)},
	{"CS_00A4", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00A4)},
	{"CS_00A5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00A5)},
	{"CS_00A8", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00A8)},
	{"CS_00A9", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00A9)},
	{"CS_00AA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00AA)},
	{"CS_00AB", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00AB)},
	{"CS_00AC", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00AC)},
	{"CS_00AD", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00AD)},
	{"CS_00AE", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00AE)},
	{"CS_00AF", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00AF)},
	{"CS_00B0", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B0)},
	{"CS_00B1", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B1)},
	{"CS_00B2", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B2)},
	{"CS_00B3", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B3)},
	{"CS_00B4", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B4)},
	{"CS_00B5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B5)},
	{"CS_00B6", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B6)},
	{"CS_00B7", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B7)},
	{"CS_00B8", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B8)},
	{"CS_00B9", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00B9)},
	{"CS_0041", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0041)},
	{"CS_0042", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0042)},
	{"CS_0043", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0043)},
	{"CS_0044", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0044)},
	{"CS_0045", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0045)},
	{"CS_0046", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0046)},
	{"CS_0084", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0084)},
	{"CS_0085", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0085)},
	{"CS_0086", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0086)},
	{"CS_0087", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0087)},
	{"CS_0088", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0088)},
	{"CS_0089", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_0089)},
	{"CS_00BA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00BA)},
	{"CS_00BB", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00BB)},
	{"CS_00BC", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00BC)},
	{"CS_00BD", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00BD)},
	{"CS_00BE", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00BE)},
	{"CS_00BF", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00BF)},
	{"CS_00C0", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00C0)},
	{"CS_00C1", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00C1)},
	{"CS_00C2", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00C2)},
	{"CS_00C3", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00C3)},
	{"CS_00C4", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00C4)},
	{"CS_00C5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_00C5)},
	{"CS_5600", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_5600)},
	{"CS_C01A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C01A)},
	{"CS_C01B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C01B)},
	{"CS_C01C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C01C)},
	{"CS_C01D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C01D)},
	{"CS_C01E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C01E)},
	{"CS_C01F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C01F)},
	{"CS_C020", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C020)},
	{"CS_C021", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C021)},
	{"CS_C022", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C022)},
	{"CS_C033", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C033)},
	{"CS_C034", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C034)},
	{"CS_C035", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C035)},
	{"CS_C036", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C036)},
	{"CS_C037", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C037)},
	{"CS_C038", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C038)},
	{"CS_C039", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C039)},
	{"CS_C03A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C03A)},
	{"CS_C03B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C03B)},
	{"CS_C03C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C03C)},
	{"CS_C03D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C03D)},
	{"CS_C03E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C03E)},
	{"CS_C03F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C03F)},
	{"CS_C040", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C040)},
	{"CS_C041", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C041)},
	{"CS_C042", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C042)},
	{"CS_C043", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C043)},
	{"CS_C044", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C044)},
	{"CS_C045", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C045)},
	{"CS_C046", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C046)},
	{"CS_C047", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C047)},
	{"CS_C048", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C048)},
	{"CS_C049", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C049)},
	{"CS_C04A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C04A)},
	{"CS_C04B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C04B)},
	{"CS_C04C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C04C)},
	{"CS_C04D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C04D)},
	{"CS_C04E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C04E)},
	{"CS_C04F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C04F)},
	{"CS_C050", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C050)},
	{"CS_C051", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C051)},
	{"CS_C052", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C052)},
	{"CS_C053", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C053)},
	{"CS_C054", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C054)},
	{"CS_C055", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C055)},
	{"CS_C056", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C056)},
	{"CS_C057", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C057)},
	{"CS_C058", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C058)},
	{"CS_C059", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C059)},
	{"CS_C05A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C05A)},
	{"CS_C05B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C05B)},
	{"CS_C05C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C05C)},
	{"CS_C05D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C05D)},
	{"CS_C05E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C05E)},
	{"CS_C05F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C05F)},
	{"CS_C060", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C060)},
	{"CS_C061", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C061)},
	{"CS_C062", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C062)},
	{"CS_C063", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C063)},
	{"CS_C064", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C064)},
	{"CS_C065", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C065)},
	{"CS_C066", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C066)},
	{"CS_C067", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C067)},
	{"CS_C068", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C068)},
	{"CS_C069", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C069)},
	{"CS_C06A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C06A)},
	{"CS_C06B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C06B)},
	{"CS_C06C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C06C)},
	{"CS_C06D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C06D)},
	{"CS_C06E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C06E)},
	{"CS_C06F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C06F)},
	{"CS_C070", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C070)},
	{"CS_C071", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C071)},
	{"CS_C072", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C072)},
	{"CS_C073", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C073)},
	{"CS_C074", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C074)},
	{"CS_C075", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C075)},
	{"CS_C076", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C076)},
	{"CS_C077", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C077)},
	{"CS_C078", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C078)},
	{"CS_C079", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C079)},
	{"CS_C07A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C07A)},
	{"CS_C07B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C07B)},
	{"CS_C07C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C07C)},
	{"CS_C07D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C07D)},
	{"CS_C07E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C07E)},
	{"CS_C07F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C07F)},
	{"CS_C080", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C080)},
	{"CS_C081", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C081)},
	{"CS_C082", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C082)},
	{"CS_C083", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C083)},
	{"CS_C084", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C084)},
	{"CS_C085", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C085)},
	{"CS_C086", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C086)},
	{"CS_C087", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C087)},
	{"CS_C088", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C088)},
	{"CS_C089", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C089)},
	{"CS_C08A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C08A)},
	{"CS_C08B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C08B)},
	{"CS_C08C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C08C)},
	{"CS_C08D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C08D)},
	{"CS_C08E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C08E)},
	{"CS_C08F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C08F)},
	{"CS_C090", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C090)},
	{"CS_C091", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C091)},
	{"CS_C092", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C092)},
	{"CS_C093", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C093)},
	{"CS_C094", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C094)},
	{"CS_C095", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C095)},
	{"CS_C096", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C096)},
	{"CS_C097", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C097)},
	{"CS_C098", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C098)},
	{"CS_C099", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C099)},
	{"CS_C09A", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C09A)},
	{"CS_C09B", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C09B)},
	{"CS_C09C", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C09C)},
	{"CS_C09D", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C09D)},
	{"CS_C09E", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C09E)},
	{"CS_C09F", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C09F)},
	{"CS_C0A0", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A0)},
	{"CS_C0A1", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A1)},
	{"CS_C0A2", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A2)},
	{"CS_C0A3", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A3)},
	{"CS_C0A4", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A4)},
	{"CS_C0A5", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A5)},
	{"CS_C0A6", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A6)},
	{"CS_C0A7", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A7)},
	{"CS_C0A8", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A8)},
	{"CS_C0A9", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0A9)},
	{"CS_C0AA", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0AA)},
	{"CS_C0AB", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0AB)},
	{"CS_C0AC", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0AC)},
	{"CS_C0AD", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0AD)},
	{"CS_C0AE", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0AE)},
	{"CS_C0AF", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, CS_C0AF)},
	{"C_NULL", "Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CipherSuite, C_NULL)},
	{"$VALUES", "[Lsun/security/ssl/CipherSuite;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CipherSuite, $VALUES)},
	{"id", "I", nullptr, $FINAL, $field(CipherSuite, id)},
	{"isDefaultEnabled", "Z", nullptr, $FINAL, $field(CipherSuite, isDefaultEnabled)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(CipherSuite, name$)},
	{"aliases", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $FINAL, $field(CipherSuite, aliases)},
	{"supportedProtocols", "Ljava/util/List;", "Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $FINAL, $field(CipherSuite, supportedProtocols)},
	{"keyExchange", "Lsun/security/ssl/CipherSuite$KeyExchange;", nullptr, $FINAL, $field(CipherSuite, keyExchange)},
	{"bulkCipher", "Lsun/security/ssl/SSLCipher;", nullptr, $FINAL, $field(CipherSuite, bulkCipher)},
	{"macAlg", "Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $FINAL, $field(CipherSuite, macAlg)},
	{"hashAlg", "Lsun/security/ssl/CipherSuite$HashAlg;", nullptr, $FINAL, $field(CipherSuite, hashAlg)},
	{"exportable", "Z", nullptr, $FINAL, $field(CipherSuite, exportable)},
	{}
};

$MethodInfo _CipherSuite_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/CipherSuite;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CipherSuiteArray*(*)()>(&CipherSuite::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;I)V", "(Ljava/lang/String;I)V", $PRIVATE, $method(static_cast<void(CipherSuite::*)($String*,int32_t,$String*,int32_t)>(&CipherSuite::init$))},
	{"<init>", "(Ljava/lang/String;IIZLjava/lang/String;[Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/SSLCipher;Lsun/security/ssl/CipherSuite$HashAlg;)V", "(IZLjava/lang/String;[Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/SSLCipher;Lsun/security/ssl/CipherSuite$HashAlg;)V", $PRIVATE, $method(static_cast<void(CipherSuite::*)($String*,int32_t,int32_t,bool,$String*,$ProtocolVersionArray*,$SSLCipher*,$CipherSuite$HashAlg*)>(&CipherSuite::init$))},
	{"<init>", "(Ljava/lang/String;IIZLjava/lang/String;Ljava/lang/String;[Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite$KeyExchange;Lsun/security/ssl/SSLCipher;Lsun/security/ssl/CipherSuite$MacAlg;Lsun/security/ssl/CipherSuite$HashAlg;)V", "(IZLjava/lang/String;Ljava/lang/String;[Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite$KeyExchange;Lsun/security/ssl/SSLCipher;Lsun/security/ssl/CipherSuite$MacAlg;Lsun/security/ssl/CipherSuite$HashAlg;)V", $PRIVATE, $method(static_cast<void(CipherSuite::*)($String*,int32_t,int32_t,bool,$String*,$String*,$ProtocolVersionArray*,$CipherSuite$KeyExchange*,$SSLCipher*,$CipherSuite$MacAlg*,$CipherSuite$HashAlg*)>(&CipherSuite::init$))},
	{"allowedCipherSuites", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lsun/security/ssl/CipherSuite;>;", $STATIC, $method(static_cast<$Collection*(*)()>(&CipherSuite::allowedCipherSuites))},
	{"calculateFragSize", "(ILsun/security/ssl/ProtocolVersion;Z)I", nullptr, 0, $method(static_cast<int32_t(CipherSuite::*)(int32_t,$ProtocolVersion*,bool)>(&CipherSuite::calculateFragSize))},
	{"calculatePacketSize", "(ILsun/security/ssl/ProtocolVersion;Z)I", nullptr, 0, $method(static_cast<int32_t(CipherSuite::*)(int32_t,$ProtocolVersion*,bool)>(&CipherSuite::calculatePacketSize))},
	{"defaultCipherSuites", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lsun/security/ssl/CipherSuite;>;", $STATIC, $method(static_cast<$Collection*(*)()>(&CipherSuite::defaultCipherSuites))},
	{"isAnonymous", "()Z", nullptr, 0, $method(static_cast<bool(CipherSuite::*)()>(&CipherSuite::isAnonymous))},
	{"isAvailable", "()Z", nullptr, 0, $method(static_cast<bool(CipherSuite::*)()>(&CipherSuite::isAvailable))},
	{"isNegotiable", "()Z", nullptr, 0, $method(static_cast<bool(CipherSuite::*)()>(&CipherSuite::isNegotiable))},
	{"nameOf", "(Ljava/lang/String;)Lsun/security/ssl/CipherSuite;", nullptr, $STATIC, $method(static_cast<CipherSuite*(*)($String*)>(&CipherSuite::nameOf))},
	{"nameOf", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&CipherSuite::nameOf))},
	{"namesOf", "(Ljava/util/List;)[Ljava/lang/String;", "(Ljava/util/List<Lsun/security/ssl/CipherSuite;>;)[Ljava/lang/String;", $STATIC, $method(static_cast<$StringArray*(*)($List*)>(&CipherSuite::namesOf))},
	{"supports", "(Lsun/security/ssl/ProtocolVersion;)Z", nullptr, $PUBLIC, $method(static_cast<bool(CipherSuite::*)($ProtocolVersion*)>(&CipherSuite::supports))},
	{"validValuesOf", "([Ljava/lang/String;)Ljava/util/List;", "([Ljava/lang/String;)Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $STATIC, $method(static_cast<$List*(*)($StringArray*)>(&CipherSuite::validValuesOf))},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CipherSuite*(*)($String*)>(&CipherSuite::valueOf))},
	{"valueOf", "(I)Lsun/security/ssl/CipherSuite;", nullptr, $STATIC, $method(static_cast<CipherSuite*(*)(int32_t)>(&CipherSuite::valueOf))},
	{"values", "()[Lsun/security/ssl/CipherSuite;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CipherSuiteArray*(*)()>(&CipherSuite::values))},
	{}
};

$InnerClassInfo _CipherSuite_InnerClassesInfo_[] = {
	{"sun.security.ssl.CipherSuite$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.security.ssl.CipherSuite$HashAlg", "sun.security.ssl.CipherSuite", "HashAlg", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.CipherSuite$MacAlg", "sun.security.ssl.CipherSuite", "MacAlg", $STATIC | $FINAL | $ENUM},
	{"sun.security.ssl.CipherSuite$KeyExchange", "sun.security.ssl.CipherSuite", "KeyExchange", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CipherSuite_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.CipherSuite",
	"java.lang.Enum",
	nullptr,
	_CipherSuite_FieldInfo_,
	_CipherSuite_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/CipherSuite;>;",
	nullptr,
	_CipherSuite_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.CipherSuite$1,sun.security.ssl.CipherSuite$HashAlg,sun.security.ssl.CipherSuite$MacAlg,sun.security.ssl.CipherSuite$KeyExchange"
};

$Object* allocate$CipherSuite($Class* clazz) {
	return $of($alloc(CipherSuite));
}

CipherSuite* CipherSuite::TLS_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_CHACHA20_POLY1305_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_DSS_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_DSS_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_AES_256_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DHE_DSS_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DHE_RSA_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DHE_DSS_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_AES_256_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV = nullptr;
CipherSuite* CipherSuite::TLS_DH_anon_WITH_AES_256_GCM_SHA384 = nullptr;
CipherSuite* CipherSuite::TLS_DH_anon_WITH_AES_128_GCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_DH_anon_WITH_AES_256_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_anon_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DH_anon_WITH_AES_256_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DH_anon_WITH_AES_128_CBC_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_anon_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_DH_anon_WITH_AES_128_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DH_anon_WITH_3DES_EDE_CBC_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_RC4_128_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_RC4_128_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_WITH_RC4_128_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_RC4_128_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_RC4_128_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_WITH_RC4_128_MD5 = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_anon_WITH_RC4_128_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DH_anon_WITH_RC4_128_MD5 = nullptr;
CipherSuite* CipherSuite::SSL_RSA_WITH_DES_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DHE_RSA_WITH_DES_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DHE_DSS_WITH_DES_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DH_anon_WITH_DES_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_EXPORT_WITH_DES40_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_EXPORT_WITH_RC4_40_MD5 = nullptr;
CipherSuite* CipherSuite::SSL_DH_anon_EXPORT_WITH_RC4_40_MD5 = nullptr;
CipherSuite* CipherSuite::TLS_RSA_WITH_NULL_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_ECDSA_WITH_NULL_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDHE_RSA_WITH_NULL_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_WITH_NULL_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_ECDSA_WITH_NULL_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_RSA_WITH_NULL_SHA = nullptr;
CipherSuite* CipherSuite::TLS_ECDH_anon_WITH_NULL_SHA = nullptr;
CipherSuite* CipherSuite::SSL_RSA_WITH_NULL_MD5 = nullptr;
CipherSuite* CipherSuite::TLS_AES_128_CCM_SHA256 = nullptr;
CipherSuite* CipherSuite::TLS_AES_128_CCM_8_SHA256 = nullptr;
CipherSuite* CipherSuite::CS_0006 = nullptr;
CipherSuite* CipherSuite::CS_0007 = nullptr;
CipherSuite* CipherSuite::CS_000B = nullptr;
CipherSuite* CipherSuite::CS_000C = nullptr;
CipherSuite* CipherSuite::CS_000D = nullptr;
CipherSuite* CipherSuite::CS_000E = nullptr;
CipherSuite* CipherSuite::CS_000F = nullptr;
CipherSuite* CipherSuite::CS_0010 = nullptr;
CipherSuite* CipherSuite::CS_001C = nullptr;
CipherSuite* CipherSuite::CS_001D = nullptr;
CipherSuite* CipherSuite::CS_0062 = nullptr;
CipherSuite* CipherSuite::CS_0063 = nullptr;
CipherSuite* CipherSuite::CS_0064 = nullptr;
CipherSuite* CipherSuite::CS_0065 = nullptr;
CipherSuite* CipherSuite::CS_0066 = nullptr;
CipherSuite* CipherSuite::CS_FFE0 = nullptr;
CipherSuite* CipherSuite::CS_FFE1 = nullptr;
CipherSuite* CipherSuite::CS_FEFE = nullptr;
CipherSuite* CipherSuite::CS_FEFF = nullptr;
CipherSuite* CipherSuite::CS_001E = nullptr;
CipherSuite* CipherSuite::CS_001F = nullptr;
CipherSuite* CipherSuite::CS_0020 = nullptr;
CipherSuite* CipherSuite::CS_0021 = nullptr;
CipherSuite* CipherSuite::CS_0022 = nullptr;
CipherSuite* CipherSuite::CS_0023 = nullptr;
CipherSuite* CipherSuite::CS_0024 = nullptr;
CipherSuite* CipherSuite::CS_0025 = nullptr;
CipherSuite* CipherSuite::CS_0026 = nullptr;
CipherSuite* CipherSuite::CS_0027 = nullptr;
CipherSuite* CipherSuite::CS_0028 = nullptr;
CipherSuite* CipherSuite::CS_0029 = nullptr;
CipherSuite* CipherSuite::CS_002A = nullptr;
CipherSuite* CipherSuite::CS_002B = nullptr;
CipherSuite* CipherSuite::CS_0096 = nullptr;
CipherSuite* CipherSuite::CS_0097 = nullptr;
CipherSuite* CipherSuite::CS_0098 = nullptr;
CipherSuite* CipherSuite::CS_0099 = nullptr;
CipherSuite* CipherSuite::CS_009A = nullptr;
CipherSuite* CipherSuite::CS_009B = nullptr;
CipherSuite* CipherSuite::CS_008A = nullptr;
CipherSuite* CipherSuite::CS_008B = nullptr;
CipherSuite* CipherSuite::CS_008C = nullptr;
CipherSuite* CipherSuite::CS_008D = nullptr;
CipherSuite* CipherSuite::CS_008E = nullptr;
CipherSuite* CipherSuite::CS_008F = nullptr;
CipherSuite* CipherSuite::CS_0090 = nullptr;
CipherSuite* CipherSuite::CS_0091 = nullptr;
CipherSuite* CipherSuite::CS_0092 = nullptr;
CipherSuite* CipherSuite::CS_0093 = nullptr;
CipherSuite* CipherSuite::CS_0094 = nullptr;
CipherSuite* CipherSuite::CS_0095 = nullptr;
CipherSuite* CipherSuite::CS_002C = nullptr;
CipherSuite* CipherSuite::CS_002D = nullptr;
CipherSuite* CipherSuite::CS_002E = nullptr;
CipherSuite* CipherSuite::CS_0030 = nullptr;
CipherSuite* CipherSuite::CS_0031 = nullptr;
CipherSuite* CipherSuite::CS_0036 = nullptr;
CipherSuite* CipherSuite::CS_0037 = nullptr;
CipherSuite* CipherSuite::CS_003E = nullptr;
CipherSuite* CipherSuite::CS_003F = nullptr;
CipherSuite* CipherSuite::CS_0068 = nullptr;
CipherSuite* CipherSuite::CS_0069 = nullptr;
CipherSuite* CipherSuite::CS_00A0 = nullptr;
CipherSuite* CipherSuite::CS_00A1 = nullptr;
CipherSuite* CipherSuite::CS_00A4 = nullptr;
CipherSuite* CipherSuite::CS_00A5 = nullptr;
CipherSuite* CipherSuite::CS_00A8 = nullptr;
CipherSuite* CipherSuite::CS_00A9 = nullptr;
CipherSuite* CipherSuite::CS_00AA = nullptr;
CipherSuite* CipherSuite::CS_00AB = nullptr;
CipherSuite* CipherSuite::CS_00AC = nullptr;
CipherSuite* CipherSuite::CS_00AD = nullptr;
CipherSuite* CipherSuite::CS_00AE = nullptr;
CipherSuite* CipherSuite::CS_00AF = nullptr;
CipherSuite* CipherSuite::CS_00B0 = nullptr;
CipherSuite* CipherSuite::CS_00B1 = nullptr;
CipherSuite* CipherSuite::CS_00B2 = nullptr;
CipherSuite* CipherSuite::CS_00B3 = nullptr;
CipherSuite* CipherSuite::CS_00B4 = nullptr;
CipherSuite* CipherSuite::CS_00B5 = nullptr;
CipherSuite* CipherSuite::CS_00B6 = nullptr;
CipherSuite* CipherSuite::CS_00B7 = nullptr;
CipherSuite* CipherSuite::CS_00B8 = nullptr;
CipherSuite* CipherSuite::CS_00B9 = nullptr;
CipherSuite* CipherSuite::CS_0041 = nullptr;
CipherSuite* CipherSuite::CS_0042 = nullptr;
CipherSuite* CipherSuite::CS_0043 = nullptr;
CipherSuite* CipherSuite::CS_0044 = nullptr;
CipherSuite* CipherSuite::CS_0045 = nullptr;
CipherSuite* CipherSuite::CS_0046 = nullptr;
CipherSuite* CipherSuite::CS_0084 = nullptr;
CipherSuite* CipherSuite::CS_0085 = nullptr;
CipherSuite* CipherSuite::CS_0086 = nullptr;
CipherSuite* CipherSuite::CS_0087 = nullptr;
CipherSuite* CipherSuite::CS_0088 = nullptr;
CipherSuite* CipherSuite::CS_0089 = nullptr;
CipherSuite* CipherSuite::CS_00BA = nullptr;
CipherSuite* CipherSuite::CS_00BB = nullptr;
CipherSuite* CipherSuite::CS_00BC = nullptr;
CipherSuite* CipherSuite::CS_00BD = nullptr;
CipherSuite* CipherSuite::CS_00BE = nullptr;
CipherSuite* CipherSuite::CS_00BF = nullptr;
CipherSuite* CipherSuite::CS_00C0 = nullptr;
CipherSuite* CipherSuite::CS_00C1 = nullptr;
CipherSuite* CipherSuite::CS_00C2 = nullptr;
CipherSuite* CipherSuite::CS_00C3 = nullptr;
CipherSuite* CipherSuite::CS_00C4 = nullptr;
CipherSuite* CipherSuite::CS_00C5 = nullptr;
CipherSuite* CipherSuite::CS_5600 = nullptr;
CipherSuite* CipherSuite::CS_C01A = nullptr;
CipherSuite* CipherSuite::CS_C01B = nullptr;
CipherSuite* CipherSuite::CS_C01C = nullptr;
CipherSuite* CipherSuite::CS_C01D = nullptr;
CipherSuite* CipherSuite::CS_C01E = nullptr;
CipherSuite* CipherSuite::CS_C01F = nullptr;
CipherSuite* CipherSuite::CS_C020 = nullptr;
CipherSuite* CipherSuite::CS_C021 = nullptr;
CipherSuite* CipherSuite::CS_C022 = nullptr;
CipherSuite* CipherSuite::CS_C033 = nullptr;
CipherSuite* CipherSuite::CS_C034 = nullptr;
CipherSuite* CipherSuite::CS_C035 = nullptr;
CipherSuite* CipherSuite::CS_C036 = nullptr;
CipherSuite* CipherSuite::CS_C037 = nullptr;
CipherSuite* CipherSuite::CS_C038 = nullptr;
CipherSuite* CipherSuite::CS_C039 = nullptr;
CipherSuite* CipherSuite::CS_C03A = nullptr;
CipherSuite* CipherSuite::CS_C03B = nullptr;
CipherSuite* CipherSuite::CS_C03C = nullptr;
CipherSuite* CipherSuite::CS_C03D = nullptr;
CipherSuite* CipherSuite::CS_C03E = nullptr;
CipherSuite* CipherSuite::CS_C03F = nullptr;
CipherSuite* CipherSuite::CS_C040 = nullptr;
CipherSuite* CipherSuite::CS_C041 = nullptr;
CipherSuite* CipherSuite::CS_C042 = nullptr;
CipherSuite* CipherSuite::CS_C043 = nullptr;
CipherSuite* CipherSuite::CS_C044 = nullptr;
CipherSuite* CipherSuite::CS_C045 = nullptr;
CipherSuite* CipherSuite::CS_C046 = nullptr;
CipherSuite* CipherSuite::CS_C047 = nullptr;
CipherSuite* CipherSuite::CS_C048 = nullptr;
CipherSuite* CipherSuite::CS_C049 = nullptr;
CipherSuite* CipherSuite::CS_C04A = nullptr;
CipherSuite* CipherSuite::CS_C04B = nullptr;
CipherSuite* CipherSuite::CS_C04C = nullptr;
CipherSuite* CipherSuite::CS_C04D = nullptr;
CipherSuite* CipherSuite::CS_C04E = nullptr;
CipherSuite* CipherSuite::CS_C04F = nullptr;
CipherSuite* CipherSuite::CS_C050 = nullptr;
CipherSuite* CipherSuite::CS_C051 = nullptr;
CipherSuite* CipherSuite::CS_C052 = nullptr;
CipherSuite* CipherSuite::CS_C053 = nullptr;
CipherSuite* CipherSuite::CS_C054 = nullptr;
CipherSuite* CipherSuite::CS_C055 = nullptr;
CipherSuite* CipherSuite::CS_C056 = nullptr;
CipherSuite* CipherSuite::CS_C057 = nullptr;
CipherSuite* CipherSuite::CS_C058 = nullptr;
CipherSuite* CipherSuite::CS_C059 = nullptr;
CipherSuite* CipherSuite::CS_C05A = nullptr;
CipherSuite* CipherSuite::CS_C05B = nullptr;
CipherSuite* CipherSuite::CS_C05C = nullptr;
CipherSuite* CipherSuite::CS_C05D = nullptr;
CipherSuite* CipherSuite::CS_C05E = nullptr;
CipherSuite* CipherSuite::CS_C05F = nullptr;
CipherSuite* CipherSuite::CS_C060 = nullptr;
CipherSuite* CipherSuite::CS_C061 = nullptr;
CipherSuite* CipherSuite::CS_C062 = nullptr;
CipherSuite* CipherSuite::CS_C063 = nullptr;
CipherSuite* CipherSuite::CS_C064 = nullptr;
CipherSuite* CipherSuite::CS_C065 = nullptr;
CipherSuite* CipherSuite::CS_C066 = nullptr;
CipherSuite* CipherSuite::CS_C067 = nullptr;
CipherSuite* CipherSuite::CS_C068 = nullptr;
CipherSuite* CipherSuite::CS_C069 = nullptr;
CipherSuite* CipherSuite::CS_C06A = nullptr;
CipherSuite* CipherSuite::CS_C06B = nullptr;
CipherSuite* CipherSuite::CS_C06C = nullptr;
CipherSuite* CipherSuite::CS_C06D = nullptr;
CipherSuite* CipherSuite::CS_C06E = nullptr;
CipherSuite* CipherSuite::CS_C06F = nullptr;
CipherSuite* CipherSuite::CS_C070 = nullptr;
CipherSuite* CipherSuite::CS_C071 = nullptr;
CipherSuite* CipherSuite::CS_C072 = nullptr;
CipherSuite* CipherSuite::CS_C073 = nullptr;
CipherSuite* CipherSuite::CS_C074 = nullptr;
CipherSuite* CipherSuite::CS_C075 = nullptr;
CipherSuite* CipherSuite::CS_C076 = nullptr;
CipherSuite* CipherSuite::CS_C077 = nullptr;
CipherSuite* CipherSuite::CS_C078 = nullptr;
CipherSuite* CipherSuite::CS_C079 = nullptr;
CipherSuite* CipherSuite::CS_C07A = nullptr;
CipherSuite* CipherSuite::CS_C07B = nullptr;
CipherSuite* CipherSuite::CS_C07C = nullptr;
CipherSuite* CipherSuite::CS_C07D = nullptr;
CipherSuite* CipherSuite::CS_C07E = nullptr;
CipherSuite* CipherSuite::CS_C07F = nullptr;
CipherSuite* CipherSuite::CS_C080 = nullptr;
CipherSuite* CipherSuite::CS_C081 = nullptr;
CipherSuite* CipherSuite::CS_C082 = nullptr;
CipherSuite* CipherSuite::CS_C083 = nullptr;
CipherSuite* CipherSuite::CS_C084 = nullptr;
CipherSuite* CipherSuite::CS_C085 = nullptr;
CipherSuite* CipherSuite::CS_C086 = nullptr;
CipherSuite* CipherSuite::CS_C087 = nullptr;
CipherSuite* CipherSuite::CS_C088 = nullptr;
CipherSuite* CipherSuite::CS_C089 = nullptr;
CipherSuite* CipherSuite::CS_C08A = nullptr;
CipherSuite* CipherSuite::CS_C08B = nullptr;
CipherSuite* CipherSuite::CS_C08C = nullptr;
CipherSuite* CipherSuite::CS_C08D = nullptr;
CipherSuite* CipherSuite::CS_C08E = nullptr;
CipherSuite* CipherSuite::CS_C08F = nullptr;
CipherSuite* CipherSuite::CS_C090 = nullptr;
CipherSuite* CipherSuite::CS_C091 = nullptr;
CipherSuite* CipherSuite::CS_C092 = nullptr;
CipherSuite* CipherSuite::CS_C093 = nullptr;
CipherSuite* CipherSuite::CS_C094 = nullptr;
CipherSuite* CipherSuite::CS_C095 = nullptr;
CipherSuite* CipherSuite::CS_C096 = nullptr;
CipherSuite* CipherSuite::CS_C097 = nullptr;
CipherSuite* CipherSuite::CS_C098 = nullptr;
CipherSuite* CipherSuite::CS_C099 = nullptr;
CipherSuite* CipherSuite::CS_C09A = nullptr;
CipherSuite* CipherSuite::CS_C09B = nullptr;
CipherSuite* CipherSuite::CS_C09C = nullptr;
CipherSuite* CipherSuite::CS_C09D = nullptr;
CipherSuite* CipherSuite::CS_C09E = nullptr;
CipherSuite* CipherSuite::CS_C09F = nullptr;
CipherSuite* CipherSuite::CS_C0A0 = nullptr;
CipherSuite* CipherSuite::CS_C0A1 = nullptr;
CipherSuite* CipherSuite::CS_C0A2 = nullptr;
CipherSuite* CipherSuite::CS_C0A3 = nullptr;
CipherSuite* CipherSuite::CS_C0A4 = nullptr;
CipherSuite* CipherSuite::CS_C0A5 = nullptr;
CipherSuite* CipherSuite::CS_C0A6 = nullptr;
CipherSuite* CipherSuite::CS_C0A7 = nullptr;
CipherSuite* CipherSuite::CS_C0A8 = nullptr;
CipherSuite* CipherSuite::CS_C0A9 = nullptr;
CipherSuite* CipherSuite::CS_C0AA = nullptr;
CipherSuite* CipherSuite::CS_C0AB = nullptr;
CipherSuite* CipherSuite::CS_C0AC = nullptr;
CipherSuite* CipherSuite::CS_C0AD = nullptr;
CipherSuite* CipherSuite::CS_C0AE = nullptr;
CipherSuite* CipherSuite::CS_C0AF = nullptr;
CipherSuite* CipherSuite::C_NULL = nullptr;
$CipherSuiteArray* CipherSuite::$VALUES = nullptr;

$CipherSuiteArray* CipherSuite::$values() {
	$init(CipherSuite);
	return $new($CipherSuiteArray, {
		CipherSuite::TLS_AES_256_GCM_SHA384,
		CipherSuite::TLS_AES_128_GCM_SHA256,
		CipherSuite::TLS_CHACHA20_POLY1305_SHA256,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256,
		CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256,
		CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_DHE_RSA_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256,
		CipherSuite::TLS_DHE_DSS_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_DHE_RSA_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_DHE_DSS_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384,
		CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_DHE_RSA_WITH_AES_256_CBC_SHA256,
		CipherSuite::TLS_DHE_DSS_WITH_AES_256_CBC_SHA256,
		CipherSuite::TLS_DHE_RSA_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_DHE_DSS_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384,
		CipherSuite::TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384,
		CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_DHE_RSA_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_DHE_DSS_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_DHE_RSA_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_DHE_DSS_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_ECDH_RSA_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_ECDH_RSA_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_RSA_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_RSA_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_RSA_WITH_AES_256_CBC_SHA256,
		CipherSuite::TLS_RSA_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_RSA_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_RSA_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::SSL_RSA_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV,
		CipherSuite::TLS_DH_anon_WITH_AES_256_GCM_SHA384,
		CipherSuite::TLS_DH_anon_WITH_AES_128_GCM_SHA256,
		CipherSuite::TLS_DH_anon_WITH_AES_256_CBC_SHA256,
		CipherSuite::TLS_ECDH_anon_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_DH_anon_WITH_AES_256_CBC_SHA,
		CipherSuite::TLS_DH_anon_WITH_AES_128_CBC_SHA256,
		CipherSuite::TLS_ECDH_anon_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_DH_anon_WITH_AES_128_CBC_SHA,
		CipherSuite::TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::SSL_DH_anon_WITH_3DES_EDE_CBC_SHA,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_RC4_128_SHA,
		CipherSuite::TLS_ECDHE_RSA_WITH_RC4_128_SHA,
		CipherSuite::SSL_RSA_WITH_RC4_128_SHA,
		CipherSuite::TLS_ECDH_ECDSA_WITH_RC4_128_SHA,
		CipherSuite::TLS_ECDH_RSA_WITH_RC4_128_SHA,
		CipherSuite::SSL_RSA_WITH_RC4_128_MD5,
		CipherSuite::TLS_ECDH_anon_WITH_RC4_128_SHA,
		CipherSuite::SSL_DH_anon_WITH_RC4_128_MD5,
		CipherSuite::SSL_RSA_WITH_DES_CBC_SHA,
		CipherSuite::SSL_DHE_RSA_WITH_DES_CBC_SHA,
		CipherSuite::SSL_DHE_DSS_WITH_DES_CBC_SHA,
		CipherSuite::SSL_DH_anon_WITH_DES_CBC_SHA,
		CipherSuite::SSL_RSA_EXPORT_WITH_DES40_CBC_SHA,
		CipherSuite::SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA,
		CipherSuite::SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA,
		CipherSuite::SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA,
		CipherSuite::SSL_RSA_EXPORT_WITH_RC4_40_MD5,
		CipherSuite::SSL_DH_anon_EXPORT_WITH_RC4_40_MD5,
		CipherSuite::TLS_RSA_WITH_NULL_SHA256,
		CipherSuite::TLS_ECDHE_ECDSA_WITH_NULL_SHA,
		CipherSuite::TLS_ECDHE_RSA_WITH_NULL_SHA,
		CipherSuite::SSL_RSA_WITH_NULL_SHA,
		CipherSuite::TLS_ECDH_ECDSA_WITH_NULL_SHA,
		CipherSuite::TLS_ECDH_RSA_WITH_NULL_SHA,
		CipherSuite::TLS_ECDH_anon_WITH_NULL_SHA,
		CipherSuite::SSL_RSA_WITH_NULL_MD5,
		CipherSuite::TLS_AES_128_CCM_SHA256,
		CipherSuite::TLS_AES_128_CCM_8_SHA256,
		CipherSuite::CS_0006,
		CipherSuite::CS_0007,
		CipherSuite::CS_000B,
		CipherSuite::CS_000C,
		CipherSuite::CS_000D,
		CipherSuite::CS_000E,
		CipherSuite::CS_000F,
		CipherSuite::CS_0010,
		CipherSuite::CS_001C,
		CipherSuite::CS_001D,
		CipherSuite::CS_0062,
		CipherSuite::CS_0063,
		CipherSuite::CS_0064,
		CipherSuite::CS_0065,
		CipherSuite::CS_0066,
		CipherSuite::CS_FFE0,
		CipherSuite::CS_FFE1,
		CipherSuite::CS_FEFE,
		CipherSuite::CS_FEFF,
		CipherSuite::CS_001E,
		CipherSuite::CS_001F,
		CipherSuite::CS_0020,
		CipherSuite::CS_0021,
		CipherSuite::CS_0022,
		CipherSuite::CS_0023,
		CipherSuite::CS_0024,
		CipherSuite::CS_0025,
		CipherSuite::CS_0026,
		CipherSuite::CS_0027,
		CipherSuite::CS_0028,
		CipherSuite::CS_0029,
		CipherSuite::CS_002A,
		CipherSuite::CS_002B,
		CipherSuite::CS_0096,
		CipherSuite::CS_0097,
		CipherSuite::CS_0098,
		CipherSuite::CS_0099,
		CipherSuite::CS_009A,
		CipherSuite::CS_009B,
		CipherSuite::CS_008A,
		CipherSuite::CS_008B,
		CipherSuite::CS_008C,
		CipherSuite::CS_008D,
		CipherSuite::CS_008E,
		CipherSuite::CS_008F,
		CipherSuite::CS_0090,
		CipherSuite::CS_0091,
		CipherSuite::CS_0092,
		CipherSuite::CS_0093,
		CipherSuite::CS_0094,
		CipherSuite::CS_0095,
		CipherSuite::CS_002C,
		CipherSuite::CS_002D,
		CipherSuite::CS_002E,
		CipherSuite::CS_0030,
		CipherSuite::CS_0031,
		CipherSuite::CS_0036,
		CipherSuite::CS_0037,
		CipherSuite::CS_003E,
		CipherSuite::CS_003F,
		CipherSuite::CS_0068,
		CipherSuite::CS_0069,
		CipherSuite::CS_00A0,
		CipherSuite::CS_00A1,
		CipherSuite::CS_00A4,
		CipherSuite::CS_00A5,
		CipherSuite::CS_00A8,
		CipherSuite::CS_00A9,
		CipherSuite::CS_00AA,
		CipherSuite::CS_00AB,
		CipherSuite::CS_00AC,
		CipherSuite::CS_00AD,
		CipherSuite::CS_00AE,
		CipherSuite::CS_00AF,
		CipherSuite::CS_00B0,
		CipherSuite::CS_00B1,
		CipherSuite::CS_00B2,
		CipherSuite::CS_00B3,
		CipherSuite::CS_00B4,
		CipherSuite::CS_00B5,
		CipherSuite::CS_00B6,
		CipherSuite::CS_00B7,
		CipherSuite::CS_00B8,
		CipherSuite::CS_00B9,
		CipherSuite::CS_0041,
		CipherSuite::CS_0042,
		CipherSuite::CS_0043,
		CipherSuite::CS_0044,
		CipherSuite::CS_0045,
		CipherSuite::CS_0046,
		CipherSuite::CS_0084,
		CipherSuite::CS_0085,
		CipherSuite::CS_0086,
		CipherSuite::CS_0087,
		CipherSuite::CS_0088,
		CipherSuite::CS_0089,
		CipherSuite::CS_00BA,
		CipherSuite::CS_00BB,
		CipherSuite::CS_00BC,
		CipherSuite::CS_00BD,
		CipherSuite::CS_00BE,
		CipherSuite::CS_00BF,
		CipherSuite::CS_00C0,
		CipherSuite::CS_00C1,
		CipherSuite::CS_00C2,
		CipherSuite::CS_00C3,
		CipherSuite::CS_00C4,
		CipherSuite::CS_00C5,
		CipherSuite::CS_5600,
		CipherSuite::CS_C01A,
		CipherSuite::CS_C01B,
		CipherSuite::CS_C01C,
		CipherSuite::CS_C01D,
		CipherSuite::CS_C01E,
		CipherSuite::CS_C01F,
		CipherSuite::CS_C020,
		CipherSuite::CS_C021,
		CipherSuite::CS_C022,
		CipherSuite::CS_C033,
		CipherSuite::CS_C034,
		CipherSuite::CS_C035,
		CipherSuite::CS_C036,
		CipherSuite::CS_C037,
		CipherSuite::CS_C038,
		CipherSuite::CS_C039,
		CipherSuite::CS_C03A,
		CipherSuite::CS_C03B,
		CipherSuite::CS_C03C,
		CipherSuite::CS_C03D,
		CipherSuite::CS_C03E,
		CipherSuite::CS_C03F,
		CipherSuite::CS_C040,
		CipherSuite::CS_C041,
		CipherSuite::CS_C042,
		CipherSuite::CS_C043,
		CipherSuite::CS_C044,
		CipherSuite::CS_C045,
		CipherSuite::CS_C046,
		CipherSuite::CS_C047,
		CipherSuite::CS_C048,
		CipherSuite::CS_C049,
		CipherSuite::CS_C04A,
		CipherSuite::CS_C04B,
		CipherSuite::CS_C04C,
		CipherSuite::CS_C04D,
		CipherSuite::CS_C04E,
		CipherSuite::CS_C04F,
		CipherSuite::CS_C050,
		CipherSuite::CS_C051,
		CipherSuite::CS_C052,
		CipherSuite::CS_C053,
		CipherSuite::CS_C054,
		CipherSuite::CS_C055,
		CipherSuite::CS_C056,
		CipherSuite::CS_C057,
		CipherSuite::CS_C058,
		CipherSuite::CS_C059,
		CipherSuite::CS_C05A,
		CipherSuite::CS_C05B,
		CipherSuite::CS_C05C,
		CipherSuite::CS_C05D,
		CipherSuite::CS_C05E,
		CipherSuite::CS_C05F,
		CipherSuite::CS_C060,
		CipherSuite::CS_C061,
		CipherSuite::CS_C062,
		CipherSuite::CS_C063,
		CipherSuite::CS_C064,
		CipherSuite::CS_C065,
		CipherSuite::CS_C066,
		CipherSuite::CS_C067,
		CipherSuite::CS_C068,
		CipherSuite::CS_C069,
		CipherSuite::CS_C06A,
		CipherSuite::CS_C06B,
		CipherSuite::CS_C06C,
		CipherSuite::CS_C06D,
		CipherSuite::CS_C06E,
		CipherSuite::CS_C06F,
		CipherSuite::CS_C070,
		CipherSuite::CS_C071,
		CipherSuite::CS_C072,
		CipherSuite::CS_C073,
		CipherSuite::CS_C074,
		CipherSuite::CS_C075,
		CipherSuite::CS_C076,
		CipherSuite::CS_C077,
		CipherSuite::CS_C078,
		CipherSuite::CS_C079,
		CipherSuite::CS_C07A,
		CipherSuite::CS_C07B,
		CipherSuite::CS_C07C,
		CipherSuite::CS_C07D,
		CipherSuite::CS_C07E,
		CipherSuite::CS_C07F,
		CipherSuite::CS_C080,
		CipherSuite::CS_C081,
		CipherSuite::CS_C082,
		CipherSuite::CS_C083,
		CipherSuite::CS_C084,
		CipherSuite::CS_C085,
		CipherSuite::CS_C086,
		CipherSuite::CS_C087,
		CipherSuite::CS_C088,
		CipherSuite::CS_C089,
		CipherSuite::CS_C08A,
		CipherSuite::CS_C08B,
		CipherSuite::CS_C08C,
		CipherSuite::CS_C08D,
		CipherSuite::CS_C08E,
		CipherSuite::CS_C08F,
		CipherSuite::CS_C090,
		CipherSuite::CS_C091,
		CipherSuite::CS_C092,
		CipherSuite::CS_C093,
		CipherSuite::CS_C094,
		CipherSuite::CS_C095,
		CipherSuite::CS_C096,
		CipherSuite::CS_C097,
		CipherSuite::CS_C098,
		CipherSuite::CS_C099,
		CipherSuite::CS_C09A,
		CipherSuite::CS_C09B,
		CipherSuite::CS_C09C,
		CipherSuite::CS_C09D,
		CipherSuite::CS_C09E,
		CipherSuite::CS_C09F,
		CipherSuite::CS_C0A0,
		CipherSuite::CS_C0A1,
		CipherSuite::CS_C0A2,
		CipherSuite::CS_C0A3,
		CipherSuite::CS_C0A4,
		CipherSuite::CS_C0A5,
		CipherSuite::CS_C0A6,
		CipherSuite::CS_C0A7,
		CipherSuite::CS_C0A8,
		CipherSuite::CS_C0A9,
		CipherSuite::CS_C0AA,
		CipherSuite::CS_C0AB,
		CipherSuite::CS_C0AC,
		CipherSuite::CS_C0AD,
		CipherSuite::CS_C0AE,
		CipherSuite::CS_C0AF,
		CipherSuite::C_NULL
	});
}

$CipherSuiteArray* CipherSuite::values() {
	$init(CipherSuite);
	return $cast($CipherSuiteArray, CipherSuite::$VALUES->clone());
}

CipherSuite* CipherSuite::valueOf($String* name) {
	$init(CipherSuite);
	return $cast(CipherSuite, $Enum::valueOf(CipherSuite::class$, name));
}

void CipherSuite::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, int32_t id) {
	$init($ProtocolVersion);
	CipherSuite::init$($enum$name, $enum$ordinal, id, false, name, ""_s, $ProtocolVersion::PROTOCOLS_EMPTY, nullptr, nullptr, nullptr, nullptr);
}

void CipherSuite::init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, bool isDefaultEnabled, $String* name, $ProtocolVersionArray* supportedProtocols, $SSLCipher* bulkCipher, $CipherSuite$HashAlg* hashAlg) {
	$init($CipherSuite$MacAlg);
	CipherSuite::init$($enum$name, $enum$ordinal, id, isDefaultEnabled, name, ""_s, supportedProtocols, nullptr, bulkCipher, $CipherSuite$MacAlg::M_NULL, hashAlg);
}

void CipherSuite::init$($String* $enum$name, int32_t $enum$ordinal, int32_t id, bool isDefaultEnabled, $String* name, $String* aliases, $ProtocolVersionArray* supportedProtocols, $CipherSuite$KeyExchange* keyExchange, $SSLCipher* cipher, $CipherSuite$MacAlg* macAlg, $CipherSuite$HashAlg* hashAlg) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id = id;
	this->isDefaultEnabled = isDefaultEnabled;
	$set(this, name$, name);
	if (!$nc(aliases)->isEmpty()) {
		$set(this, aliases, $Arrays::asList($(aliases->split(","_s))));
	} else {
		$set(this, aliases, $Collections::emptyList());
	}
	$set(this, supportedProtocols, $Arrays::asList(supportedProtocols));
	$set(this, keyExchange, keyExchange);
	$set(this, bulkCipher, cipher);
	$set(this, macAlg, macAlg);
	$set(this, hashAlg, hashAlg);
	this->exportable = (cipher != nullptr && cipher->exportable);
}

CipherSuite* CipherSuite::nameOf($String* ciperSuiteName) {
	$init(CipherSuite);
	{
		$var($CipherSuiteArray, arr$, CipherSuite::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CipherSuite* cs = arr$->get(i$);
			{
				bool var$0 = $nc($nc(cs)->name$)->equals(ciperSuiteName);
				if (var$0 || $nc($nc(cs)->aliases)->contains(ciperSuiteName)) {
					return cs;
				}
			}
		}
	}
	return nullptr;
}

CipherSuite* CipherSuite::valueOf(int32_t id) {
	$init(CipherSuite);
	{
		$var($CipherSuiteArray, arr$, CipherSuite::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CipherSuite* cs = arr$->get(i$);
			{
				if ($nc(cs)->id == id) {
					return cs;
				}
			}
		}
	}
	return nullptr;
}

$String* CipherSuite::nameOf(int32_t id) {
	$init(CipherSuite);
	$useLocalCurrentObjectStackCache();
	{
		$var($CipherSuiteArray, arr$, CipherSuite::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CipherSuite* cs = arr$->get(i$);
			{
				if ($nc(cs)->id == id) {
					return cs->name$;
				}
			}
		}
	}
	return $str({"UNKNOWN-CIPHER-SUITE("_s, $($Utilities::byte16HexString(id)), ")"_s});
}

$Collection* CipherSuite::allowedCipherSuites() {
	$init(CipherSuite);
	$useLocalCurrentObjectStackCache();
	$var($Collection, cipherSuites, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>($new($LinkedList))))));
	{
		$var($CipherSuiteArray, arr$, CipherSuite::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CipherSuite* cs = arr$->get(i$);
			{
				if (!$nc($nc(cs)->supportedProtocols)->isEmpty()) {
					cipherSuites->add(cs);
				} else {
					break;
				}
			}
		}
	}
	return cipherSuites;
}

$Collection* CipherSuite::defaultCipherSuites() {
	$init(CipherSuite);
	$useLocalCurrentObjectStackCache();
	$var($Collection, cipherSuites, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(static_cast<$AbstractSequentialList*>($new($LinkedList))))));
	{
		$var($CipherSuiteArray, arr$, CipherSuite::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			CipherSuite* cs = arr$->get(i$);
			{
				if ($nc(cs)->isDefaultEnabled) {
					cipherSuites->add(cs);
				} else {
					break;
				}
			}
		}
	}
	return cipherSuites;
}

$List* CipherSuite::validValuesOf($StringArray* names) {
	$init(CipherSuite);
	$useLocalCurrentObjectStackCache();
	if (names == nullptr) {
		$throwNew($IllegalArgumentException, "CipherSuites cannot be null"_s);
	}
	$var($List, cipherSuites, $new($ArrayList, $nc(names)->length));
	{
		$var($StringArray, arr$, names);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				if (name == nullptr || $nc(name)->isEmpty()) {
					$throwNew($IllegalArgumentException, "The specified CipherSuites array contains invalid null or empty string elements"_s);
				}
				bool found = false;
				{
					$var($CipherSuiteArray, arr$, CipherSuite::values());
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						CipherSuite* cs = arr$->get(i$);
						{
							if (!$nc($nc(cs)->supportedProtocols)->isEmpty()) {
								bool var$0 = $nc(cs->name$)->equals(name);
								if (var$0 || $nc(cs->aliases)->contains(name)) {
									cipherSuites->add(cs);
									found = true;
									break;
								}
							} else {
								break;
							}
						}
					}
				}
				if (!found) {
					$throwNew($IllegalArgumentException, $$str({"Unsupported CipherSuite: "_s, name}));
				}
			}
		}
	}
	return $Collections::unmodifiableList(cipherSuites);
}

$StringArray* CipherSuite::namesOf($List* cipherSuites) {
	$init(CipherSuite);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, $new($StringArray, $nc(cipherSuites)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, cipherSuites->iterator());
		for (; $nc(i$)->hasNext();) {
			CipherSuite* cipherSuite = $cast(CipherSuite, i$->next());
			{
				names->set(i++, $nc(cipherSuite)->name$);
			}
		}
	}
	return names;
}

bool CipherSuite::isAvailable() {
	bool var$1 = !$nc(this->supportedProtocols)->isEmpty();
	bool var$0 = var$1 && (this->keyExchange == nullptr || this->keyExchange->isAvailable()) && this->bulkCipher != nullptr;
	return var$0 && this->bulkCipher->isAvailable();
}

bool CipherSuite::supports($ProtocolVersion* protocolVersion) {
	return $nc(this->supportedProtocols)->contains(protocolVersion);
}

bool CipherSuite::isNegotiable() {
	return this != CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV && isAvailable();
}

bool CipherSuite::isAnonymous() {
	return (this->keyExchange != nullptr && this->keyExchange->isAnonymous);
}

int32_t CipherSuite::calculatePacketSize(int32_t fragmentSize, $ProtocolVersion* protocolVersion, bool isDTLS) {
	int32_t packetSize = fragmentSize;
	$init($SSLCipher);
	if (this->bulkCipher != nullptr && this->bulkCipher != $SSLCipher::B_NULL) {
		int32_t blockSize = this->bulkCipher->ivSize;
		$init($CipherSuite$1);
		switch ($nc($CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType)->get((this->bulkCipher->cipherType)->ordinal())) {
		case 1:
			{
				packetSize += this->macAlg->size;
				packetSize += 1;
				packetSize += $mod((blockSize - ($mod(packetSize, blockSize))), blockSize);
				if ($nc(protocolVersion)->useTLS11PlusSpec()) {
					packetSize += blockSize;
				}
				break;
			}
		case 2:
			{
				$init($ProtocolVersion);
				if (protocolVersion == $ProtocolVersion::TLS12 || protocolVersion == $ProtocolVersion::DTLS12) {
					packetSize += this->bulkCipher->ivSize - this->bulkCipher->fixedIvSize;
				}
				packetSize += this->bulkCipher->tagSize;
				break;
			}
		default:
			{
				packetSize += this->macAlg->size;
			}
		}
	}
	return packetSize + (isDTLS ? $DTLSRecord::headerSize : $SSLRecord::headerSize);
}

int32_t CipherSuite::calculateFragSize(int32_t packetLimit, $ProtocolVersion* protocolVersion, bool isDTLS) {
	int32_t fragSize = packetLimit - (isDTLS ? $DTLSRecord::headerSize : $SSLRecord::headerSize);
	$init($SSLCipher);
	if (this->bulkCipher != nullptr && this->bulkCipher != $SSLCipher::B_NULL) {
		int32_t blockSize = this->bulkCipher->ivSize;
		$init($CipherSuite$1);
		switch ($nc($CipherSuite$1::$SwitchMap$sun$security$ssl$CipherType)->get((this->bulkCipher->cipherType)->ordinal())) {
		case 1:
			{
				if ($nc(protocolVersion)->useTLS11PlusSpec()) {
					fragSize -= blockSize;
				}
				fragSize -= ($mod(fragSize, blockSize));
				fragSize -= 1;
				fragSize -= this->macAlg->size;
				break;
			}
		case 2:
			{
				fragSize -= this->bulkCipher->tagSize;
				fragSize -= this->bulkCipher->ivSize - this->bulkCipher->fixedIvSize;
				break;
			}
		default:
			{
				fragSize -= this->macAlg->size;
			}
		}
	}
	return fragSize;
}

void clinit$CipherSuite($Class* class$) {
	$init($ProtocolVersion);
	$init($SSLCipher);
	$init($CipherSuite$HashAlg);
	$assignStatic(CipherSuite::TLS_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_AES_256_GCM_SHA384"_s, 0, 4866, true, "TLS_AES_256_GCM_SHA384"_s, $ProtocolVersion::PROTOCOLS_OF_13, $SSLCipher::B_AES_256_GCM_IV, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_AES_128_GCM_SHA256"_s, 1, 4865, true, "TLS_AES_128_GCM_SHA256"_s, $ProtocolVersion::PROTOCOLS_OF_13, $SSLCipher::B_AES_128_GCM_IV, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_CHACHA20_POLY1305_SHA256, $new(CipherSuite, "TLS_CHACHA20_POLY1305_SHA256"_s, 2, 4867, true, "TLS_CHACHA20_POLY1305_SHA256"_s, $ProtocolVersion::PROTOCOLS_OF_13, $SSLCipher::B_CC20_P1305, $CipherSuite$HashAlg::H_SHA256));
	$init($CipherSuite$KeyExchange);
	$init($CipherSuite$MacAlg);
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384"_s, 3, 0x0000C02C, true, "TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256"_s, 4, 0x0000C02B, true, "TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256"_s, 5, 0x0000CCA9, true, "TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_CC20_P1305, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"_s, 6, 0x0000C030, true, "TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256"_s, 7, 0x0000CCA8, true, "TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_CC20_P1305, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256"_s, 8, 0x0000C02F, true, "TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_DHE_RSA_WITH_AES_256_GCM_SHA384"_s, 9, 159, true, "TLS_DHE_RSA_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256, $new(CipherSuite, "TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256"_s, 10, 0x0000CCAA, true, "TLS_DHE_RSA_WITH_CHACHA20_POLY1305_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_CC20_P1305, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_DSS_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_DHE_DSS_WITH_AES_256_GCM_SHA384"_s, 11, 163, true, "TLS_DHE_DSS_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_DHE_RSA_WITH_AES_128_GCM_SHA256"_s, 12, 158, true, "TLS_DHE_RSA_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_DSS_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_DHE_DSS_WITH_AES_128_GCM_SHA256"_s, 13, 162, true, "TLS_DHE_DSS_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384"_s, 14, 0x0000C024, true, "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA384, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384"_s, 15, 0x0000C028, true, "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA384, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256"_s, 16, 0x0000C023, true, "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256"_s, 17, 0x0000C027, true, "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_AES_256_CBC_SHA256, $new(CipherSuite, "TLS_DHE_RSA_WITH_AES_256_CBC_SHA256"_s, 18, 107, true, "TLS_DHE_RSA_WITH_AES_256_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_DSS_WITH_AES_256_CBC_SHA256, $new(CipherSuite, "TLS_DHE_DSS_WITH_AES_256_CBC_SHA256"_s, 19, 106, true, "TLS_DHE_DSS_WITH_AES_256_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_DHE_RSA_WITH_AES_128_CBC_SHA256"_s, 20, 103, true, "TLS_DHE_RSA_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_DSS_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_DHE_DSS_WITH_AES_128_CBC_SHA256"_s, 21, 64, true, "TLS_DHE_DSS_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384"_s, 22, 0x0000C02E, true, "TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384"_s, 23, 0x0000C032, true, "TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256"_s, 24, 0x0000C02D, true, "TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256"_s, 25, 0x0000C031, true, "TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384"_s, 26, 0x0000C026, true, "TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA384, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384, $new(CipherSuite, "TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384"_s, 27, 0x0000C02A, true, "TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA384, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256"_s, 28, 0x0000C025, true, "TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256"_s, 29, 0x0000C029, true, "TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA"_s, 30, 0x0000C00A, true, "TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"_s, 31, 0x0000C014, true, "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA"_s, 32, 0x0000C009, true, "TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"_s, 33, 0x0000C013, true, "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_DHE_RSA_WITH_AES_256_CBC_SHA"_s, 34, 57, true, "TLS_DHE_RSA_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_DSS_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_DHE_DSS_WITH_AES_256_CBC_SHA"_s, 35, 56, true, "TLS_DHE_DSS_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_RSA_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_DHE_RSA_WITH_AES_128_CBC_SHA"_s, 36, 51, true, "TLS_DHE_RSA_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DHE_DSS_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_DHE_DSS_WITH_AES_128_CBC_SHA"_s, 37, 50, true, "TLS_DHE_DSS_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA"_s, 38, 0x0000C005, true, "TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_ECDH_RSA_WITH_AES_256_CBC_SHA"_s, 39, 0x0000C00F, true, "TLS_ECDH_RSA_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA"_s, 40, 0x0000C004, true, "TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_ECDH_RSA_WITH_AES_128_CBC_SHA"_s, 41, 0x0000C00E, true, "TLS_ECDH_RSA_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_RSA_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_RSA_WITH_AES_256_GCM_SHA384"_s, 42, 157, true, "TLS_RSA_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_RSA_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_RSA_WITH_AES_128_GCM_SHA256"_s, 43, 156, true, "TLS_RSA_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_RSA_WITH_AES_256_CBC_SHA256, $new(CipherSuite, "TLS_RSA_WITH_AES_256_CBC_SHA256"_s, 44, 61, true, "TLS_RSA_WITH_AES_256_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_RSA_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_RSA_WITH_AES_128_CBC_SHA256"_s, 45, 60, true, "TLS_RSA_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_RSA_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_RSA_WITH_AES_256_CBC_SHA"_s, 46, 53, true, "TLS_RSA_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_RSA_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_RSA_WITH_AES_128_CBC_SHA"_s, 47, 47, true, "TLS_RSA_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA"_s, 48, 0x0000C008, true, "TLS_ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA"_s, 49, 0x0000C012, true, "TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA"_s, 50, 22, true, "SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA"_s, "TLS_DHE_RSA_WITH_3DES_EDE_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA"_s, 51, 19, true, "SSL_DHE_DSS_WITH_3DES_EDE_CBC_SHA"_s, "TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA"_s, 52, 0x0000C003, true, "TLS_ECDH_ECDSA_WITH_3DES_EDE_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA"_s, 53, 0x0000C00D, true, "TLS_ECDH_RSA_WITH_3DES_EDE_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_RSA_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "SSL_RSA_WITH_3DES_EDE_CBC_SHA"_s, 54, 10, true, "SSL_RSA_WITH_3DES_EDE_CBC_SHA"_s, "TLS_RSA_WITH_3DES_EDE_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_EMPTY_RENEGOTIATION_INFO_SCSV, $new(CipherSuite, "TLS_EMPTY_RENEGOTIATION_INFO_SCSV"_s, 55, 255, true, "TLS_EMPTY_RENEGOTIATION_INFO_SCSV"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_SCSV, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::TLS_DH_anon_WITH_AES_256_GCM_SHA384, $new(CipherSuite, "TLS_DH_anon_WITH_AES_256_GCM_SHA384"_s, 56, 167, false, "TLS_DH_anon_WITH_AES_256_GCM_SHA384"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_AES_256_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA384));
	$assignStatic(CipherSuite::TLS_DH_anon_WITH_AES_128_GCM_SHA256, $new(CipherSuite, "TLS_DH_anon_WITH_AES_128_GCM_SHA256"_s, 57, 166, false, "TLS_DH_anon_WITH_AES_128_GCM_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_AES_128_GCM, $CipherSuite$MacAlg::M_NULL, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DH_anon_WITH_AES_256_CBC_SHA256, $new(CipherSuite, "TLS_DH_anon_WITH_AES_256_CBC_SHA256"_s, 58, 109, false, "TLS_DH_anon_WITH_AES_256_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_anon_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_ECDH_anon_WITH_AES_256_CBC_SHA"_s, 59, 0x0000C019, false, "TLS_ECDH_anon_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ANON, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DH_anon_WITH_AES_256_CBC_SHA, $new(CipherSuite, "TLS_DH_anon_WITH_AES_256_CBC_SHA"_s, 60, 58, false, "TLS_DH_anon_WITH_AES_256_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_AES_256, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DH_anon_WITH_AES_128_CBC_SHA256, $new(CipherSuite, "TLS_DH_anon_WITH_AES_128_CBC_SHA256"_s, 61, 108, false, "TLS_DH_anon_WITH_AES_128_CBC_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_anon_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_ECDH_anon_WITH_AES_128_CBC_SHA"_s, 62, 0x0000C018, false, "TLS_ECDH_anon_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ANON, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_DH_anon_WITH_AES_128_CBC_SHA, $new(CipherSuite, "TLS_DH_anon_WITH_AES_128_CBC_SHA"_s, 63, 52, false, "TLS_DH_anon_WITH_AES_128_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_AES_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA"_s, 64, 0x0000C017, false, "TLS_ECDH_anon_WITH_3DES_EDE_CBC_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ANON, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_DH_anon_WITH_3DES_EDE_CBC_SHA, $new(CipherSuite, "SSL_DH_anon_WITH_3DES_EDE_CBC_SHA"_s, 65, 27, false, "SSL_DH_anon_WITH_3DES_EDE_CBC_SHA"_s, "TLS_DH_anon_WITH_3DES_EDE_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_3DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_RC4_128_SHA, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_RC4_128_SHA"_s, 66, 0x0000C007, false, "TLS_ECDHE_ECDSA_WITH_RC4_128_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_RC4_128_SHA, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_RC4_128_SHA"_s, 67, 0x0000C011, false, "TLS_ECDHE_RSA_WITH_RC4_128_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_RSA_WITH_RC4_128_SHA, $new(CipherSuite, "SSL_RSA_WITH_RC4_128_SHA"_s, 68, 5, false, "SSL_RSA_WITH_RC4_128_SHA"_s, "TLS_RSA_WITH_RC4_128_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_RC4_128_SHA, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_RC4_128_SHA"_s, 69, 0x0000C002, false, "TLS_ECDH_ECDSA_WITH_RC4_128_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_RC4_128_SHA, $new(CipherSuite, "TLS_ECDH_RSA_WITH_RC4_128_SHA"_s, 70, 0x0000C00C, false, "TLS_ECDH_RSA_WITH_RC4_128_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_RSA_WITH_RC4_128_MD5, $new(CipherSuite, "SSL_RSA_WITH_RC4_128_MD5"_s, 71, 4, false, "SSL_RSA_WITH_RC4_128_MD5"_s, "TLS_RSA_WITH_RC4_128_MD5"_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_MD5, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_anon_WITH_RC4_128_SHA, $new(CipherSuite, "TLS_ECDH_anon_WITH_RC4_128_SHA"_s, 72, 0x0000C016, false, "TLS_ECDH_anon_WITH_RC4_128_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_ECDH_ANON, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_DH_anon_WITH_RC4_128_MD5, $new(CipherSuite, "SSL_DH_anon_WITH_RC4_128_MD5"_s, 73, 24, false, "SSL_DH_anon_WITH_RC4_128_MD5"_s, "TLS_DH_anon_WITH_RC4_128_MD5"_s, $ProtocolVersion::PROTOCOLS_TO_TLS12, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_RC4_128, $CipherSuite$MacAlg::M_MD5, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_RSA_WITH_DES_CBC_SHA, $new(CipherSuite, "SSL_RSA_WITH_DES_CBC_SHA"_s, 74, 9, false, "SSL_RSA_WITH_DES_CBC_SHA"_s, "TLS_RSA_WITH_DES_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_11, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DHE_RSA_WITH_DES_CBC_SHA, $new(CipherSuite, "SSL_DHE_RSA_WITH_DES_CBC_SHA"_s, 75, 21, false, "SSL_DHE_RSA_WITH_DES_CBC_SHA"_s, "TLS_DHE_RSA_WITH_DES_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_11, $CipherSuite$KeyExchange::K_DHE_RSA, $SSLCipher::B_DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DHE_DSS_WITH_DES_CBC_SHA, $new(CipherSuite, "SSL_DHE_DSS_WITH_DES_CBC_SHA"_s, 76, 18, false, "SSL_DHE_DSS_WITH_DES_CBC_SHA"_s, "TLS_DHE_DSS_WITH_DES_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_11, $CipherSuite$KeyExchange::K_DHE_DSS, $SSLCipher::B_DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DH_anon_WITH_DES_CBC_SHA, $new(CipherSuite, "SSL_DH_anon_WITH_DES_CBC_SHA"_s, 77, 26, false, "SSL_DH_anon_WITH_DES_CBC_SHA"_s, "TLS_DH_anon_WITH_DES_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_11, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_DES, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_RSA_EXPORT_WITH_DES40_CBC_SHA, $new(CipherSuite, "SSL_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, 78, 8, false, "SSL_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, "TLS_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_10, $CipherSuite$KeyExchange::K_RSA_EXPORT, $SSLCipher::B_DES_40, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA, $new(CipherSuite, "SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, 79, 20, false, "SSL_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, "TLS_DHE_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_10, $CipherSuite$KeyExchange::K_DHE_RSA_EXPORT, $SSLCipher::B_DES_40, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA, $new(CipherSuite, "SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA"_s, 80, 17, false, "SSL_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA"_s, "TLS_DHE_DSS_EXPORT_WITH_DES40_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_10, $CipherSuite$KeyExchange::K_DHE_DSS_EXPORT, $SSLCipher::B_DES_40, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA, $new(CipherSuite, "SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA"_s, 81, 25, false, "SSL_DH_anon_EXPORT_WITH_DES40_CBC_SHA"_s, "TLS_DH_anon_EXPORT_WITH_DES40_CBC_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_10, $CipherSuite$KeyExchange::K_DH_ANON_EXPORT, $SSLCipher::B_DES_40, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_RSA_EXPORT_WITH_RC4_40_MD5, $new(CipherSuite, "SSL_RSA_EXPORT_WITH_RC4_40_MD5"_s, 82, 3, false, "SSL_RSA_EXPORT_WITH_RC4_40_MD5"_s, "TLS_RSA_EXPORT_WITH_RC4_40_MD5"_s, $ProtocolVersion::PROTOCOLS_TO_10, $CipherSuite$KeyExchange::K_RSA_EXPORT, $SSLCipher::B_RC4_40, $CipherSuite$MacAlg::M_MD5, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::SSL_DH_anon_EXPORT_WITH_RC4_40_MD5, $new(CipherSuite, "SSL_DH_anon_EXPORT_WITH_RC4_40_MD5"_s, 83, 23, false, "SSL_DH_anon_EXPORT_WITH_RC4_40_MD5"_s, "TLS_DH_anon_EXPORT_WITH_RC4_40_MD5"_s, $ProtocolVersion::PROTOCOLS_TO_10, $CipherSuite$KeyExchange::K_DH_ANON, $SSLCipher::B_RC4_40, $CipherSuite$MacAlg::M_MD5, $CipherSuite$HashAlg::H_NONE));
	$assignStatic(CipherSuite::TLS_RSA_WITH_NULL_SHA256, $new(CipherSuite, "TLS_RSA_WITH_NULL_SHA256"_s, 84, 59, false, "TLS_RSA_WITH_NULL_SHA256"_s, ""_s, $ProtocolVersion::PROTOCOLS_OF_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA256, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_ECDSA_WITH_NULL_SHA, $new(CipherSuite, "TLS_ECDHE_ECDSA_WITH_NULL_SHA"_s, 85, 0x0000C006, false, "TLS_ECDHE_ECDSA_WITH_NULL_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_ECDSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDHE_RSA_WITH_NULL_SHA, $new(CipherSuite, "TLS_ECDHE_RSA_WITH_NULL_SHA"_s, 86, 0x0000C010, false, "TLS_ECDHE_RSA_WITH_NULL_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDHE_RSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_RSA_WITH_NULL_SHA, $new(CipherSuite, "SSL_RSA_WITH_NULL_SHA"_s, 87, 2, false, "SSL_RSA_WITH_NULL_SHA"_s, "TLS_RSA_WITH_NULL_SHA"_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_ECDSA_WITH_NULL_SHA, $new(CipherSuite, "TLS_ECDH_ECDSA_WITH_NULL_SHA"_s, 88, 0x0000C001, false, "TLS_ECDH_ECDSA_WITH_NULL_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ECDSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_RSA_WITH_NULL_SHA, $new(CipherSuite, "TLS_ECDH_RSA_WITH_NULL_SHA"_s, 89, 0x0000C00B, false, "TLS_ECDH_RSA_WITH_NULL_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_RSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_ECDH_anon_WITH_NULL_SHA, $new(CipherSuite, "TLS_ECDH_anon_WITH_NULL_SHA"_s, 90, 0x0000C015, false, "TLS_ECDH_anon_WITH_NULL_SHA"_s, ""_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_ECDH_ANON, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_SHA, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::SSL_RSA_WITH_NULL_MD5, $new(CipherSuite, "SSL_RSA_WITH_NULL_MD5"_s, 91, 1, false, "SSL_RSA_WITH_NULL_MD5"_s, "TLS_RSA_WITH_NULL_MD5"_s, $ProtocolVersion::PROTOCOLS_TO_12, $CipherSuite$KeyExchange::K_RSA, $SSLCipher::B_NULL, $CipherSuite$MacAlg::M_MD5, $CipherSuite$HashAlg::H_SHA256));
	$assignStatic(CipherSuite::TLS_AES_128_CCM_SHA256, $new(CipherSuite, "TLS_AES_128_CCM_SHA256"_s, 92, "TLS_AES_128_CCM_SHA256"_s, 4868));
	$assignStatic(CipherSuite::TLS_AES_128_CCM_8_SHA256, $new(CipherSuite, "TLS_AES_128_CCM_8_SHA256"_s, 93, "TLS_AES_128_CCM_8_SHA256"_s, 4869));
	$assignStatic(CipherSuite::CS_0006, $new(CipherSuite, "CS_0006"_s, 94, "SSL_RSA_EXPORT_WITH_RC2_CBC_40_MD5"_s, 6));
	$assignStatic(CipherSuite::CS_0007, $new(CipherSuite, "CS_0007"_s, 95, "SSL_RSA_WITH_IDEA_CBC_SHA"_s, 7));
	$assignStatic(CipherSuite::CS_000B, $new(CipherSuite, "CS_000B"_s, 96, "SSL_DH_DSS_EXPORT_WITH_DES40_CBC_SHA"_s, 11));
	$assignStatic(CipherSuite::CS_000C, $new(CipherSuite, "CS_000C"_s, 97, "SSL_DH_DSS_WITH_DES_CBC_SHA"_s, 12));
	$assignStatic(CipherSuite::CS_000D, $new(CipherSuite, "CS_000D"_s, 98, "SSL_DH_DSS_WITH_3DES_EDE_CBC_SHA"_s, 13));
	$assignStatic(CipherSuite::CS_000E, $new(CipherSuite, "CS_000E"_s, 99, "SSL_DH_RSA_EXPORT_WITH_DES40_CBC_SHA"_s, 14));
	$assignStatic(CipherSuite::CS_000F, $new(CipherSuite, "CS_000F"_s, 100, "SSL_DH_RSA_WITH_DES_CBC_SHA"_s, 15));
	$assignStatic(CipherSuite::CS_0010, $new(CipherSuite, "CS_0010"_s, 101, "SSL_DH_RSA_WITH_3DES_EDE_CBC_SHA"_s, 16));
	$assignStatic(CipherSuite::CS_001C, $new(CipherSuite, "CS_001C"_s, 102, "SSL_FORTEZZA_DMS_WITH_NULL_SHA"_s, 28));
	$assignStatic(CipherSuite::CS_001D, $new(CipherSuite, "CS_001D"_s, 103, "SSL_FORTEZZA_DMS_WITH_FORTEZZA_CBC_SHA"_s, 29));
	$assignStatic(CipherSuite::CS_0062, $new(CipherSuite, "CS_0062"_s, 104, "SSL_RSA_EXPORT1024_WITH_DES_CBC_SHA"_s, 98));
	$assignStatic(CipherSuite::CS_0063, $new(CipherSuite, "CS_0063"_s, 105, "SSL_DHE_DSS_EXPORT1024_WITH_DES_CBC_SHA"_s, 99));
	$assignStatic(CipherSuite::CS_0064, $new(CipherSuite, "CS_0064"_s, 106, "SSL_RSA_EXPORT1024_WITH_RC4_56_SHA"_s, 100));
	$assignStatic(CipherSuite::CS_0065, $new(CipherSuite, "CS_0065"_s, 107, "SSL_DHE_DSS_EXPORT1024_WITH_RC4_56_SHA"_s, 101));
	$assignStatic(CipherSuite::CS_0066, $new(CipherSuite, "CS_0066"_s, 108, "SSL_DHE_DSS_WITH_RC4_128_SHA"_s, 102));
	$assignStatic(CipherSuite::CS_FFE0, $new(CipherSuite, "CS_FFE0"_s, 109, "NETSCAPE_RSA_FIPS_WITH_3DES_EDE_CBC_SHA"_s, 0x0000FFE0));
	$assignStatic(CipherSuite::CS_FFE1, $new(CipherSuite, "CS_FFE1"_s, 110, "NETSCAPE_RSA_FIPS_WITH_DES_CBC_SHA"_s, 0x0000FFE1));
	$assignStatic(CipherSuite::CS_FEFE, $new(CipherSuite, "CS_FEFE"_s, 111, "SSL_RSA_FIPS_WITH_DES_CBC_SHA"_s, 0x0000FEFE));
	$assignStatic(CipherSuite::CS_FEFF, $new(CipherSuite, "CS_FEFF"_s, 112, "SSL_RSA_FIPS_WITH_3DES_EDE_CBC_SHA"_s, 0x0000FEFF));
	$assignStatic(CipherSuite::CS_001E, $new(CipherSuite, "CS_001E"_s, 113, "TLS_KRB5_WITH_DES_CBC_SHA"_s, 30));
	$assignStatic(CipherSuite::CS_001F, $new(CipherSuite, "CS_001F"_s, 114, "TLS_KRB5_WITH_3DES_EDE_CBC_SHA"_s, 31));
	$assignStatic(CipherSuite::CS_0020, $new(CipherSuite, "CS_0020"_s, 115, "TLS_KRB5_WITH_RC4_128_SHA"_s, 32));
	$assignStatic(CipherSuite::CS_0021, $new(CipherSuite, "CS_0021"_s, 116, "TLS_KRB5_WITH_IDEA_CBC_SHA"_s, 33));
	$assignStatic(CipherSuite::CS_0022, $new(CipherSuite, "CS_0022"_s, 117, "TLS_KRB5_WITH_DES_CBC_MD5"_s, 34));
	$assignStatic(CipherSuite::CS_0023, $new(CipherSuite, "CS_0023"_s, 118, "TLS_KRB5_WITH_3DES_EDE_CBC_MD5"_s, 35));
	$assignStatic(CipherSuite::CS_0024, $new(CipherSuite, "CS_0024"_s, 119, "TLS_KRB5_WITH_RC4_128_MD5"_s, 36));
	$assignStatic(CipherSuite::CS_0025, $new(CipherSuite, "CS_0025"_s, 120, "TLS_KRB5_WITH_IDEA_CBC_MD5"_s, 37));
	$assignStatic(CipherSuite::CS_0026, $new(CipherSuite, "CS_0026"_s, 121, "TLS_KRB5_EXPORT_WITH_DES_CBC_40_SHA"_s, 38));
	$assignStatic(CipherSuite::CS_0027, $new(CipherSuite, "CS_0027"_s, 122, "TLS_KRB5_EXPORT_WITH_RC2_CBC_40_SHA"_s, 39));
	$assignStatic(CipherSuite::CS_0028, $new(CipherSuite, "CS_0028"_s, 123, "TLS_KRB5_EXPORT_WITH_RC4_40_SHA"_s, 40));
	$assignStatic(CipherSuite::CS_0029, $new(CipherSuite, "CS_0029"_s, 124, "TLS_KRB5_EXPORT_WITH_DES_CBC_40_MD5"_s, 41));
	$assignStatic(CipherSuite::CS_002A, $new(CipherSuite, "CS_002A"_s, 125, "TLS_KRB5_EXPORT_WITH_RC2_CBC_40_MD5"_s, 42));
	$assignStatic(CipherSuite::CS_002B, $new(CipherSuite, "CS_002B"_s, 126, "TLS_KRB5_EXPORT_WITH_RC4_40_MD5"_s, 43));
	$assignStatic(CipherSuite::CS_0096, $new(CipherSuite, "CS_0096"_s, 127, "TLS_RSA_WITH_SEED_CBC_SHA"_s, 150));
	$assignStatic(CipherSuite::CS_0097, $new(CipherSuite, "CS_0097"_s, 128, "TLS_DH_DSS_WITH_SEED_CBC_SHA"_s, 151));
	$assignStatic(CipherSuite::CS_0098, $new(CipherSuite, "CS_0098"_s, 129, "TLS_DH_RSA_WITH_SEED_CBC_SHA"_s, 152));
	$assignStatic(CipherSuite::CS_0099, $new(CipherSuite, "CS_0099"_s, 130, "TLS_DHE_DSS_WITH_SEED_CBC_SHA"_s, 153));
	$assignStatic(CipherSuite::CS_009A, $new(CipherSuite, "CS_009A"_s, 131, "TLS_DHE_RSA_WITH_SEED_CBC_SHA"_s, 154));
	$assignStatic(CipherSuite::CS_009B, $new(CipherSuite, "CS_009B"_s, 132, "TLS_DH_anon_WITH_SEED_CBC_SHA"_s, 155));
	$assignStatic(CipherSuite::CS_008A, $new(CipherSuite, "CS_008A"_s, 133, "TLS_PSK_WITH_RC4_128_SHA"_s, 138));
	$assignStatic(CipherSuite::CS_008B, $new(CipherSuite, "CS_008B"_s, 134, "TLS_PSK_WITH_3DES_EDE_CBC_SHA"_s, 139));
	$assignStatic(CipherSuite::CS_008C, $new(CipherSuite, "CS_008C"_s, 135, "TLS_PSK_WITH_AES_128_CBC_SHA"_s, 140));
	$assignStatic(CipherSuite::CS_008D, $new(CipherSuite, "CS_008D"_s, 136, "TLS_PSK_WITH_AES_256_CBC_SHA"_s, 141));
	$assignStatic(CipherSuite::CS_008E, $new(CipherSuite, "CS_008E"_s, 137, "TLS_DHE_PSK_WITH_RC4_128_SHA"_s, 142));
	$assignStatic(CipherSuite::CS_008F, $new(CipherSuite, "CS_008F"_s, 138, "TLS_DHE_PSK_WITH_3DES_EDE_CBC_SHA"_s, 143));
	$assignStatic(CipherSuite::CS_0090, $new(CipherSuite, "CS_0090"_s, 139, "TLS_DHE_PSK_WITH_AES_128_CBC_SHA"_s, 144));
	$assignStatic(CipherSuite::CS_0091, $new(CipherSuite, "CS_0091"_s, 140, "TLS_DHE_PSK_WITH_AES_256_CBC_SHA"_s, 145));
	$assignStatic(CipherSuite::CS_0092, $new(CipherSuite, "CS_0092"_s, 141, "TLS_RSA_PSK_WITH_RC4_128_SHA"_s, 146));
	$assignStatic(CipherSuite::CS_0093, $new(CipherSuite, "CS_0093"_s, 142, "TLS_RSA_PSK_WITH_3DES_EDE_CBC_SHA"_s, 147));
	$assignStatic(CipherSuite::CS_0094, $new(CipherSuite, "CS_0094"_s, 143, "TLS_RSA_PSK_WITH_AES_128_CBC_SHA"_s, 148));
	$assignStatic(CipherSuite::CS_0095, $new(CipherSuite, "CS_0095"_s, 144, "TLS_RSA_PSK_WITH_AES_256_CBC_SHA"_s, 149));
	$assignStatic(CipherSuite::CS_002C, $new(CipherSuite, "CS_002C"_s, 145, "TLS_PSK_WITH_NULL_SHA"_s, 44));
	$assignStatic(CipherSuite::CS_002D, $new(CipherSuite, "CS_002D"_s, 146, "TLS_DHE_PSK_WITH_NULL_SHA"_s, 45));
	$assignStatic(CipherSuite::CS_002E, $new(CipherSuite, "CS_002E"_s, 147, "TLS_RSA_PSK_WITH_NULL_SHA"_s, 46));
	$assignStatic(CipherSuite::CS_0030, $new(CipherSuite, "CS_0030"_s, 148, "TLS_DH_DSS_WITH_AES_128_CBC_SHA"_s, 48));
	$assignStatic(CipherSuite::CS_0031, $new(CipherSuite, "CS_0031"_s, 149, "TLS_DH_RSA_WITH_AES_128_CBC_SHA"_s, 49));
	$assignStatic(CipherSuite::CS_0036, $new(CipherSuite, "CS_0036"_s, 150, "TLS_DH_DSS_WITH_AES_256_CBC_SHA"_s, 54));
	$assignStatic(CipherSuite::CS_0037, $new(CipherSuite, "CS_0037"_s, 151, "TLS_DH_RSA_WITH_AES_256_CBC_SHA"_s, 55));
	$assignStatic(CipherSuite::CS_003E, $new(CipherSuite, "CS_003E"_s, 152, "TLS_DH_DSS_WITH_AES_128_CBC_SHA256"_s, 62));
	$assignStatic(CipherSuite::CS_003F, $new(CipherSuite, "CS_003F"_s, 153, "TLS_DH_RSA_WITH_AES_128_CBC_SHA256"_s, 63));
	$assignStatic(CipherSuite::CS_0068, $new(CipherSuite, "CS_0068"_s, 154, "TLS_DH_DSS_WITH_AES_256_CBC_SHA256"_s, 104));
	$assignStatic(CipherSuite::CS_0069, $new(CipherSuite, "CS_0069"_s, 155, "TLS_DH_RSA_WITH_AES_256_CBC_SHA256"_s, 105));
	$assignStatic(CipherSuite::CS_00A0, $new(CipherSuite, "CS_00A0"_s, 156, "TLS_DH_RSA_WITH_AES_128_GCM_SHA256"_s, 160));
	$assignStatic(CipherSuite::CS_00A1, $new(CipherSuite, "CS_00A1"_s, 157, "TLS_DH_RSA_WITH_AES_256_GCM_SHA384"_s, 161));
	$assignStatic(CipherSuite::CS_00A4, $new(CipherSuite, "CS_00A4"_s, 158, "TLS_DH_DSS_WITH_AES_128_GCM_SHA256"_s, 164));
	$assignStatic(CipherSuite::CS_00A5, $new(CipherSuite, "CS_00A5"_s, 159, "TLS_DH_DSS_WITH_AES_256_GCM_SHA384"_s, 165));
	$assignStatic(CipherSuite::CS_00A8, $new(CipherSuite, "CS_00A8"_s, 160, "TLS_PSK_WITH_AES_128_GCM_SHA256"_s, 168));
	$assignStatic(CipherSuite::CS_00A9, $new(CipherSuite, "CS_00A9"_s, 161, "TLS_PSK_WITH_AES_256_GCM_SHA384"_s, 169));
	$assignStatic(CipherSuite::CS_00AA, $new(CipherSuite, "CS_00AA"_s, 162, "TLS_DHE_PSK_WITH_AES_128_GCM_SHA256"_s, 170));
	$assignStatic(CipherSuite::CS_00AB, $new(CipherSuite, "CS_00AB"_s, 163, "TLS_DHE_PSK_WITH_AES_256_GCM_SHA384"_s, 171));
	$assignStatic(CipherSuite::CS_00AC, $new(CipherSuite, "CS_00AC"_s, 164, "TLS_RSA_PSK_WITH_AES_128_GCM_SHA256"_s, 172));
	$assignStatic(CipherSuite::CS_00AD, $new(CipherSuite, "CS_00AD"_s, 165, "TLS_RSA_PSK_WITH_AES_256_GCM_SHA384"_s, 173));
	$assignStatic(CipherSuite::CS_00AE, $new(CipherSuite, "CS_00AE"_s, 166, "TLS_PSK_WITH_AES_128_CBC_SHA256"_s, 174));
	$assignStatic(CipherSuite::CS_00AF, $new(CipherSuite, "CS_00AF"_s, 167, "TLS_PSK_WITH_AES_256_CBC_SHA384"_s, 175));
	$assignStatic(CipherSuite::CS_00B0, $new(CipherSuite, "CS_00B0"_s, 168, "TLS_PSK_WITH_NULL_SHA256"_s, 176));
	$assignStatic(CipherSuite::CS_00B1, $new(CipherSuite, "CS_00B1"_s, 169, "TLS_PSK_WITH_NULL_SHA384"_s, 177));
	$assignStatic(CipherSuite::CS_00B2, $new(CipherSuite, "CS_00B2"_s, 170, "TLS_DHE_PSK_WITH_AES_128_CBC_SHA256"_s, 178));
	$assignStatic(CipherSuite::CS_00B3, $new(CipherSuite, "CS_00B3"_s, 171, "TLS_DHE_PSK_WITH_AES_256_CBC_SHA384"_s, 179));
	$assignStatic(CipherSuite::CS_00B4, $new(CipherSuite, "CS_00B4"_s, 172, "TLS_DHE_PSK_WITH_NULL_SHA256"_s, 180));
	$assignStatic(CipherSuite::CS_00B5, $new(CipherSuite, "CS_00B5"_s, 173, "TLS_DHE_PSK_WITH_NULL_SHA384"_s, 181));
	$assignStatic(CipherSuite::CS_00B6, $new(CipherSuite, "CS_00B6"_s, 174, "TLS_RSA_PSK_WITH_AES_128_CBC_SHA256"_s, 182));
	$assignStatic(CipherSuite::CS_00B7, $new(CipherSuite, "CS_00B7"_s, 175, "TLS_RSA_PSK_WITH_AES_256_CBC_SHA384"_s, 183));
	$assignStatic(CipherSuite::CS_00B8, $new(CipherSuite, "CS_00B8"_s, 176, "TLS_RSA_PSK_WITH_NULL_SHA256"_s, 184));
	$assignStatic(CipherSuite::CS_00B9, $new(CipherSuite, "CS_00B9"_s, 177, "TLS_RSA_PSK_WITH_NULL_SHA384"_s, 185));
	$assignStatic(CipherSuite::CS_0041, $new(CipherSuite, "CS_0041"_s, 178, "TLS_RSA_WITH_CAMELLIA_128_CBC_SHA"_s, 65));
	$assignStatic(CipherSuite::CS_0042, $new(CipherSuite, "CS_0042"_s, 179, "TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA"_s, 66));
	$assignStatic(CipherSuite::CS_0043, $new(CipherSuite, "CS_0043"_s, 180, "TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA"_s, 67));
	$assignStatic(CipherSuite::CS_0044, $new(CipherSuite, "CS_0044"_s, 181, "TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA"_s, 68));
	$assignStatic(CipherSuite::CS_0045, $new(CipherSuite, "CS_0045"_s, 182, "TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA"_s, 69));
	$assignStatic(CipherSuite::CS_0046, $new(CipherSuite, "CS_0046"_s, 183, "TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA"_s, 70));
	$assignStatic(CipherSuite::CS_0084, $new(CipherSuite, "CS_0084"_s, 184, "TLS_RSA_WITH_CAMELLIA_256_CBC_SHA"_s, 132));
	$assignStatic(CipherSuite::CS_0085, $new(CipherSuite, "CS_0085"_s, 185, "TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA"_s, 133));
	$assignStatic(CipherSuite::CS_0086, $new(CipherSuite, "CS_0086"_s, 186, "TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA"_s, 134));
	$assignStatic(CipherSuite::CS_0087, $new(CipherSuite, "CS_0087"_s, 187, "TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA"_s, 135));
	$assignStatic(CipherSuite::CS_0088, $new(CipherSuite, "CS_0088"_s, 188, "TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA"_s, 136));
	$assignStatic(CipherSuite::CS_0089, $new(CipherSuite, "CS_0089"_s, 189, "TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA"_s, 137));
	$assignStatic(CipherSuite::CS_00BA, $new(CipherSuite, "CS_00BA"_s, 190, "TLS_RSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 186));
	$assignStatic(CipherSuite::CS_00BB, $new(CipherSuite, "CS_00BB"_s, 191, "TLS_DH_DSS_WITH_CAMELLIA_128_CBC_SHA256"_s, 187));
	$assignStatic(CipherSuite::CS_00BC, $new(CipherSuite, "CS_00BC"_s, 192, "TLS_DH_RSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 188));
	$assignStatic(CipherSuite::CS_00BD, $new(CipherSuite, "CS_00BD"_s, 193, "TLS_DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256"_s, 189));
	$assignStatic(CipherSuite::CS_00BE, $new(CipherSuite, "CS_00BE"_s, 194, "TLS_DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 190));
	$assignStatic(CipherSuite::CS_00BF, $new(CipherSuite, "CS_00BF"_s, 195, "TLS_DH_anon_WITH_CAMELLIA_128_CBC_SHA256"_s, 191));
	$assignStatic(CipherSuite::CS_00C0, $new(CipherSuite, "CS_00C0"_s, 196, "TLS_RSA_WITH_CAMELLIA_256_CBC_SHA256"_s, 192));
	$assignStatic(CipherSuite::CS_00C1, $new(CipherSuite, "CS_00C1"_s, 197, "TLS_DH_DSS_WITH_CAMELLIA_256_CBC_SHA256"_s, 193));
	$assignStatic(CipherSuite::CS_00C2, $new(CipherSuite, "CS_00C2"_s, 198, "TLS_DH_RSA_WITH_CAMELLIA_256_CBC_SHA256"_s, 194));
	$assignStatic(CipherSuite::CS_00C3, $new(CipherSuite, "CS_00C3"_s, 199, "TLS_DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256"_s, 195));
	$assignStatic(CipherSuite::CS_00C4, $new(CipherSuite, "CS_00C4"_s, 200, "TLS_DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256"_s, 196));
	$assignStatic(CipherSuite::CS_00C5, $new(CipherSuite, "CS_00C5"_s, 201, "TLS_DH_anon_WITH_CAMELLIA_256_CBC_SHA256"_s, 197));
	$assignStatic(CipherSuite::CS_5600, $new(CipherSuite, "CS_5600"_s, 202, "TLS_FALLBACK_SCSV"_s, 22016));
	$assignStatic(CipherSuite::CS_C01A, $new(CipherSuite, "CS_C01A"_s, 203, "TLS_SRP_SHA_WITH_3DES_EDE_CBC_SHA"_s, 0x0000C01A));
	$assignStatic(CipherSuite::CS_C01B, $new(CipherSuite, "CS_C01B"_s, 204, "TLS_SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA"_s, 0x0000C01B));
	$assignStatic(CipherSuite::CS_C01C, $new(CipherSuite, "CS_C01C"_s, 205, "TLS_SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA"_s, 0x0000C01C));
	$assignStatic(CipherSuite::CS_C01D, $new(CipherSuite, "CS_C01D"_s, 206, "TLS_SRP_SHA_WITH_AES_128_CBC_SHA"_s, 0x0000C01D));
	$assignStatic(CipherSuite::CS_C01E, $new(CipherSuite, "CS_C01E"_s, 207, "TLS_SRP_SHA_RSA_WITH_AES_128_CBC_SHA"_s, 0x0000C01E));
	$assignStatic(CipherSuite::CS_C01F, $new(CipherSuite, "CS_C01F"_s, 208, "TLS_SRP_SHA_DSS_WITH_AES_128_CBC_SHA"_s, 0x0000C01F));
	$assignStatic(CipherSuite::CS_C020, $new(CipherSuite, "CS_C020"_s, 209, "TLS_SRP_SHA_WITH_AES_256_CBC_SHA"_s, 0x0000C020));
	$assignStatic(CipherSuite::CS_C021, $new(CipherSuite, "CS_C021"_s, 210, "TLS_SRP_SHA_RSA_WITH_AES_256_CBC_SHA"_s, 0x0000C021));
	$assignStatic(CipherSuite::CS_C022, $new(CipherSuite, "CS_C022"_s, 211, "TLS_SRP_SHA_DSS_WITH_AES_256_CBC_SHA"_s, 0x0000C022));
	$assignStatic(CipherSuite::CS_C033, $new(CipherSuite, "CS_C033"_s, 212, "TLS_ECDHE_PSK_WITH_RC4_128_SHA"_s, 0x0000C033));
	$assignStatic(CipherSuite::CS_C034, $new(CipherSuite, "CS_C034"_s, 213, "TLS_ECDHE_PSK_WITH_3DES_EDE_CBC_SHA"_s, 0x0000C034));
	$assignStatic(CipherSuite::CS_C035, $new(CipherSuite, "CS_C035"_s, 214, "TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA"_s, 0x0000C035));
	$assignStatic(CipherSuite::CS_C036, $new(CipherSuite, "CS_C036"_s, 215, "TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA"_s, 0x0000C036));
	$assignStatic(CipherSuite::CS_C037, $new(CipherSuite, "CS_C037"_s, 216, "TLS_ECDHE_PSK_WITH_AES_128_CBC_SHA256"_s, 0x0000C037));
	$assignStatic(CipherSuite::CS_C038, $new(CipherSuite, "CS_C038"_s, 217, "TLS_ECDHE_PSK_WITH_AES_256_CBC_SHA384"_s, 0x0000C038));
	$assignStatic(CipherSuite::CS_C039, $new(CipherSuite, "CS_C039"_s, 218, "TLS_ECDHE_PSK_WITH_NULL_SHA"_s, 0x0000C039));
	$assignStatic(CipherSuite::CS_C03A, $new(CipherSuite, "CS_C03A"_s, 219, "TLS_ECDHE_PSK_WITH_NULL_SHA256"_s, 0x0000C03A));
	$assignStatic(CipherSuite::CS_C03B, $new(CipherSuite, "CS_C03B"_s, 220, "TLS_ECDHE_PSK_WITH_NULL_SHA384"_s, 0x0000C03B));
	$assignStatic(CipherSuite::CS_C03C, $new(CipherSuite, "CS_C03C"_s, 221, "TLS_RSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C03C));
	$assignStatic(CipherSuite::CS_C03D, $new(CipherSuite, "CS_C03D"_s, 222, "TLS_RSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C03D));
	$assignStatic(CipherSuite::CS_C03E, $new(CipherSuite, "CS_C03E"_s, 223, "TLS_DH_DSS_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C03E));
	$assignStatic(CipherSuite::CS_C03F, $new(CipherSuite, "CS_C03F"_s, 224, "TLS_DH_DSS_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C03F));
	$assignStatic(CipherSuite::CS_C040, $new(CipherSuite, "CS_C040"_s, 225, "TLS_DH_RSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C040));
	$assignStatic(CipherSuite::CS_C041, $new(CipherSuite, "CS_C041"_s, 226, "TLS_DH_RSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C041));
	$assignStatic(CipherSuite::CS_C042, $new(CipherSuite, "CS_C042"_s, 227, "TLS_DHE_DSS_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C042));
	$assignStatic(CipherSuite::CS_C043, $new(CipherSuite, "CS_C043"_s, 228, "TLS_DHE_DSS_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C043));
	$assignStatic(CipherSuite::CS_C044, $new(CipherSuite, "CS_C044"_s, 229, "TLS_DHE_RSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C044));
	$assignStatic(CipherSuite::CS_C045, $new(CipherSuite, "CS_C045"_s, 230, "TLS_DHE_RSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C045));
	$assignStatic(CipherSuite::CS_C046, $new(CipherSuite, "CS_C046"_s, 231, "TLS_DH_anon_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C046));
	$assignStatic(CipherSuite::CS_C047, $new(CipherSuite, "CS_C047"_s, 232, "TLS_DH_anon_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C047));
	$assignStatic(CipherSuite::CS_C048, $new(CipherSuite, "CS_C048"_s, 233, "TLS_ECDHE_ECDSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C048));
	$assignStatic(CipherSuite::CS_C049, $new(CipherSuite, "CS_C049"_s, 234, "TLS_ECDHE_ECDSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C049));
	$assignStatic(CipherSuite::CS_C04A, $new(CipherSuite, "CS_C04A"_s, 235, "TLS_ECDH_ECDSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C04A));
	$assignStatic(CipherSuite::CS_C04B, $new(CipherSuite, "CS_C04B"_s, 236, "TLS_ECDH_ECDSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C04B));
	$assignStatic(CipherSuite::CS_C04C, $new(CipherSuite, "CS_C04C"_s, 237, "TLS_ECDHE_RSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C04C));
	$assignStatic(CipherSuite::CS_C04D, $new(CipherSuite, "CS_C04D"_s, 238, "TLS_ECDHE_RSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C04D));
	$assignStatic(CipherSuite::CS_C04E, $new(CipherSuite, "CS_C04E"_s, 239, "TLS_ECDH_RSA_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C04E));
	$assignStatic(CipherSuite::CS_C04F, $new(CipherSuite, "CS_C04F"_s, 240, "TLS_ECDH_RSA_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C04F));
	$assignStatic(CipherSuite::CS_C050, $new(CipherSuite, "CS_C050"_s, 241, "TLS_RSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C050));
	$assignStatic(CipherSuite::CS_C051, $new(CipherSuite, "CS_C051"_s, 242, "TLS_RSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C051));
	$assignStatic(CipherSuite::CS_C052, $new(CipherSuite, "CS_C052"_s, 243, "TLS_DHE_RSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C052));
	$assignStatic(CipherSuite::CS_C053, $new(CipherSuite, "CS_C053"_s, 244, "TLS_DHE_RSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C053));
	$assignStatic(CipherSuite::CS_C054, $new(CipherSuite, "CS_C054"_s, 245, "TLS_DH_RSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C054));
	$assignStatic(CipherSuite::CS_C055, $new(CipherSuite, "CS_C055"_s, 246, "TLS_DH_RSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C055));
	$assignStatic(CipherSuite::CS_C056, $new(CipherSuite, "CS_C056"_s, 247, "TLS_DHE_DSS_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C056));
	$assignStatic(CipherSuite::CS_C057, $new(CipherSuite, "CS_C057"_s, 248, "TLS_DHE_DSS_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C057));
	$assignStatic(CipherSuite::CS_C058, $new(CipherSuite, "CS_C058"_s, 249, "TLS_DH_DSS_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C058));
	$assignStatic(CipherSuite::CS_C059, $new(CipherSuite, "CS_C059"_s, 250, "TLS_DH_DSS_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C059));
	$assignStatic(CipherSuite::CS_C05A, $new(CipherSuite, "CS_C05A"_s, 251, "TLS_DH_anon_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C05A));
	$assignStatic(CipherSuite::CS_C05B, $new(CipherSuite, "CS_C05B"_s, 252, "TLS_DH_anon_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C05B));
	$assignStatic(CipherSuite::CS_C05C, $new(CipherSuite, "CS_C05C"_s, 253, "TLS_ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C05C));
	$assignStatic(CipherSuite::CS_C05D, $new(CipherSuite, "CS_C05D"_s, 254, "TLS_ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C05D));
	$assignStatic(CipherSuite::CS_C05E, $new(CipherSuite, "CS_C05E"_s, 255, "TLS_ECDH_ECDSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C05E));
	$assignStatic(CipherSuite::CS_C05F, $new(CipherSuite, "CS_C05F"_s, 256, "TLS_ECDH_ECDSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C05F));
	$assignStatic(CipherSuite::CS_C060, $new(CipherSuite, "CS_C060"_s, 257, "TLS_ECDHE_RSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C060));
	$assignStatic(CipherSuite::CS_C061, $new(CipherSuite, "CS_C061"_s, 258, "TLS_ECDHE_RSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C061));
	$assignStatic(CipherSuite::CS_C062, $new(CipherSuite, "CS_C062"_s, 259, "TLS_ECDH_RSA_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C062));
	$assignStatic(CipherSuite::CS_C063, $new(CipherSuite, "CS_C063"_s, 260, "TLS_ECDH_RSA_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C063));
	$assignStatic(CipherSuite::CS_C064, $new(CipherSuite, "CS_C064"_s, 261, "TLS_PSK_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C064));
	$assignStatic(CipherSuite::CS_C065, $new(CipherSuite, "CS_C065"_s, 262, "TLS_PSK_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C065));
	$assignStatic(CipherSuite::CS_C066, $new(CipherSuite, "CS_C066"_s, 263, "TLS_DHE_PSK_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C066));
	$assignStatic(CipherSuite::CS_C067, $new(CipherSuite, "CS_C067"_s, 264, "TLS_DHE_PSK_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C067));
	$assignStatic(CipherSuite::CS_C068, $new(CipherSuite, "CS_C068"_s, 265, "TLS_RSA_PSK_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C068));
	$assignStatic(CipherSuite::CS_C069, $new(CipherSuite, "CS_C069"_s, 266, "TLS_RSA_PSK_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C069));
	$assignStatic(CipherSuite::CS_C06A, $new(CipherSuite, "CS_C06A"_s, 267, "TLS_PSK_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C06A));
	$assignStatic(CipherSuite::CS_C06B, $new(CipherSuite, "CS_C06B"_s, 268, "TLS_PSK_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C06B));
	$assignStatic(CipherSuite::CS_C06C, $new(CipherSuite, "CS_C06C"_s, 269, "TLS_DHE_PSK_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C06C));
	$assignStatic(CipherSuite::CS_C06D, $new(CipherSuite, "CS_C06D"_s, 270, "TLS_DHE_PSK_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C06D));
	$assignStatic(CipherSuite::CS_C06E, $new(CipherSuite, "CS_C06E"_s, 271, "TLS_RSA_PSK_WITH_ARIA_128_GCM_SHA256"_s, 0x0000C06E));
	$assignStatic(CipherSuite::CS_C06F, $new(CipherSuite, "CS_C06F"_s, 272, "TLS_RSA_PSK_WITH_ARIA_256_GCM_SHA384"_s, 0x0000C06F));
	$assignStatic(CipherSuite::CS_C070, $new(CipherSuite, "CS_C070"_s, 273, "TLS_ECDHE_PSK_WITH_ARIA_128_CBC_SHA256"_s, 0x0000C070));
	$assignStatic(CipherSuite::CS_C071, $new(CipherSuite, "CS_C071"_s, 274, "TLS_ECDHE_PSK_WITH_ARIA_256_CBC_SHA384"_s, 0x0000C071));
	$assignStatic(CipherSuite::CS_C072, $new(CipherSuite, "CS_C072"_s, 275, "TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C072));
	$assignStatic(CipherSuite::CS_C073, $new(CipherSuite, "CS_C073"_s, 276, "TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C073));
	$assignStatic(CipherSuite::CS_C074, $new(CipherSuite, "CS_C074"_s, 277, "TLS_ECDH_ECDSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C074));
	$assignStatic(CipherSuite::CS_C075, $new(CipherSuite, "CS_C075"_s, 278, "TLS_ECDH_ECDSA_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C075));
	$assignStatic(CipherSuite::CS_C076, $new(CipherSuite, "CS_C076"_s, 279, "TLS_ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C076));
	$assignStatic(CipherSuite::CS_C077, $new(CipherSuite, "CS_C077"_s, 280, "TLS_ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C077));
	$assignStatic(CipherSuite::CS_C078, $new(CipherSuite, "CS_C078"_s, 281, "TLS_ECDH_RSA_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C078));
	$assignStatic(CipherSuite::CS_C079, $new(CipherSuite, "CS_C079"_s, 282, "TLS_ECDH_RSA_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C079));
	$assignStatic(CipherSuite::CS_C07A, $new(CipherSuite, "CS_C07A"_s, 283, "TLS_RSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C07A));
	$assignStatic(CipherSuite::CS_C07B, $new(CipherSuite, "CS_C07B"_s, 284, "TLS_RSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C07B));
	$assignStatic(CipherSuite::CS_C07C, $new(CipherSuite, "CS_C07C"_s, 285, "TLS_DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C07C));
	$assignStatic(CipherSuite::CS_C07D, $new(CipherSuite, "CS_C07D"_s, 286, "TLS_DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C07D));
	$assignStatic(CipherSuite::CS_C07E, $new(CipherSuite, "CS_C07E"_s, 287, "TLS_DH_RSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C07E));
	$assignStatic(CipherSuite::CS_C07F, $new(CipherSuite, "CS_C07F"_s, 288, "TLS_DH_RSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C07F));
	$assignStatic(CipherSuite::CS_C080, $new(CipherSuite, "CS_C080"_s, 289, "TLS_DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C080));
	$assignStatic(CipherSuite::CS_C081, $new(CipherSuite, "CS_C081"_s, 290, "TLS_DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C081));
	$assignStatic(CipherSuite::CS_C082, $new(CipherSuite, "CS_C082"_s, 291, "TLS_DH_DSS_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C082));
	$assignStatic(CipherSuite::CS_C083, $new(CipherSuite, "CS_C083"_s, 292, "TLS_DH_DSS_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C083));
	$assignStatic(CipherSuite::CS_C084, $new(CipherSuite, "CS_C084"_s, 293, "TLS_DH_anon_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C084));
	$assignStatic(CipherSuite::CS_C085, $new(CipherSuite, "CS_C085"_s, 294, "TLS_DH_anon_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C085));
	$assignStatic(CipherSuite::CS_C086, $new(CipherSuite, "CS_C086"_s, 295, "TLS_ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C086));
	$assignStatic(CipherSuite::CS_C087, $new(CipherSuite, "CS_C087"_s, 296, "TLS_ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C087));
	$assignStatic(CipherSuite::CS_C088, $new(CipherSuite, "CS_C088"_s, 297, "TLS_ECDH_ECDSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C088));
	$assignStatic(CipherSuite::CS_C089, $new(CipherSuite, "CS_C089"_s, 298, "TLS_ECDH_ECDSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C089));
	$assignStatic(CipherSuite::CS_C08A, $new(CipherSuite, "CS_C08A"_s, 299, "TLS_ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C08A));
	$assignStatic(CipherSuite::CS_C08B, $new(CipherSuite, "CS_C08B"_s, 300, "TLS_ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C08B));
	$assignStatic(CipherSuite::CS_C08C, $new(CipherSuite, "CS_C08C"_s, 301, "TLS_ECDH_RSA_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C08C));
	$assignStatic(CipherSuite::CS_C08D, $new(CipherSuite, "CS_C08D"_s, 302, "TLS_ECDH_RSA_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C08D));
	$assignStatic(CipherSuite::CS_C08E, $new(CipherSuite, "CS_C08E"_s, 303, "TLS_PSK_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C08E));
	$assignStatic(CipherSuite::CS_C08F, $new(CipherSuite, "CS_C08F"_s, 304, "TLS_PSK_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C08F));
	$assignStatic(CipherSuite::CS_C090, $new(CipherSuite, "CS_C090"_s, 305, "TLS_DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C090));
	$assignStatic(CipherSuite::CS_C091, $new(CipherSuite, "CS_C091"_s, 306, "TLS_DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C091));
	$assignStatic(CipherSuite::CS_C092, $new(CipherSuite, "CS_C092"_s, 307, "TLS_RSA_PSK_WITH_CAMELLIA_128_GCM_SHA256"_s, 0x0000C092));
	$assignStatic(CipherSuite::CS_C093, $new(CipherSuite, "CS_C093"_s, 308, "TLS_RSA_PSK_WITH_CAMELLIA_256_GCM_SHA384"_s, 0x0000C093));
	$assignStatic(CipherSuite::CS_C094, $new(CipherSuite, "CS_C094"_s, 309, "TLS_PSK_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C094));
	$assignStatic(CipherSuite::CS_C095, $new(CipherSuite, "CS_C095"_s, 310, "TLS_PSK_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C095));
	$assignStatic(CipherSuite::CS_C096, $new(CipherSuite, "CS_C096"_s, 311, "TLS_DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C096));
	$assignStatic(CipherSuite::CS_C097, $new(CipherSuite, "CS_C097"_s, 312, "TLS_DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C097));
	$assignStatic(CipherSuite::CS_C098, $new(CipherSuite, "CS_C098"_s, 313, "TLS_RSA_PSK_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C098));
	$assignStatic(CipherSuite::CS_C099, $new(CipherSuite, "CS_C099"_s, 314, "TLS_RSA_PSK_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C099));
	$assignStatic(CipherSuite::CS_C09A, $new(CipherSuite, "CS_C09A"_s, 315, "TLS_ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256"_s, 0x0000C09A));
	$assignStatic(CipherSuite::CS_C09B, $new(CipherSuite, "CS_C09B"_s, 316, "TLS_ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384"_s, 0x0000C09B));
	$assignStatic(CipherSuite::CS_C09C, $new(CipherSuite, "CS_C09C"_s, 317, "TLS_RSA_WITH_AES_128_CCM"_s, 0x0000C09C));
	$assignStatic(CipherSuite::CS_C09D, $new(CipherSuite, "CS_C09D"_s, 318, "TLS_RSA_WITH_AES_256_CCM"_s, 0x0000C09D));
	$assignStatic(CipherSuite::CS_C09E, $new(CipherSuite, "CS_C09E"_s, 319, "TLS_DHE_RSA_WITH_AES_128_CCM"_s, 0x0000C09E));
	$assignStatic(CipherSuite::CS_C09F, $new(CipherSuite, "CS_C09F"_s, 320, "TLS_DHE_RSA_WITH_AES_256_CCM"_s, 0x0000C09F));
	$assignStatic(CipherSuite::CS_C0A0, $new(CipherSuite, "CS_C0A0"_s, 321, "TLS_RSA_WITH_AES_128_CCM_8"_s, 0x0000C0A0));
	$assignStatic(CipherSuite::CS_C0A1, $new(CipherSuite, "CS_C0A1"_s, 322, "TLS_RSA_WITH_AES_256_CCM_8"_s, 0x0000C0A1));
	$assignStatic(CipherSuite::CS_C0A2, $new(CipherSuite, "CS_C0A2"_s, 323, "TLS_DHE_RSA_WITH_AES_128_CCM_8"_s, 0x0000C0A2));
	$assignStatic(CipherSuite::CS_C0A3, $new(CipherSuite, "CS_C0A3"_s, 324, "TLS_DHE_RSA_WITH_AES_256_CCM_8"_s, 0x0000C0A3));
	$assignStatic(CipherSuite::CS_C0A4, $new(CipherSuite, "CS_C0A4"_s, 325, "TLS_PSK_WITH_AES_128_CCM"_s, 0x0000C0A4));
	$assignStatic(CipherSuite::CS_C0A5, $new(CipherSuite, "CS_C0A5"_s, 326, "TLS_PSK_WITH_AES_256_CCM"_s, 0x0000C0A5));
	$assignStatic(CipherSuite::CS_C0A6, $new(CipherSuite, "CS_C0A6"_s, 327, "TLS_DHE_PSK_WITH_AES_128_CCM"_s, 0x0000C0A6));
	$assignStatic(CipherSuite::CS_C0A7, $new(CipherSuite, "CS_C0A7"_s, 328, "TLS_DHE_PSK_WITH_AES_256_CCM"_s, 0x0000C0A7));
	$assignStatic(CipherSuite::CS_C0A8, $new(CipherSuite, "CS_C0A8"_s, 329, "TLS_PSK_WITH_AES_128_CCM_8"_s, 0x0000C0A8));
	$assignStatic(CipherSuite::CS_C0A9, $new(CipherSuite, "CS_C0A9"_s, 330, "TLS_PSK_WITH_AES_256_CCM_8"_s, 0x0000C0A9));
	$assignStatic(CipherSuite::CS_C0AA, $new(CipherSuite, "CS_C0AA"_s, 331, "TLS_PSK_DHE_WITH_AES_128_CCM_8"_s, 0x0000C0AA));
	$assignStatic(CipherSuite::CS_C0AB, $new(CipherSuite, "CS_C0AB"_s, 332, "TLS_PSK_DHE_WITH_AES_256_CCM_8"_s, 0x0000C0AB));
	$assignStatic(CipherSuite::CS_C0AC, $new(CipherSuite, "CS_C0AC"_s, 333, "TLS_ECDHE_ECDSA_WITH_AES_128_CCM"_s, 0x0000C0AC));
	$assignStatic(CipherSuite::CS_C0AD, $new(CipherSuite, "CS_C0AD"_s, 334, "TLS_ECDHE_ECDSA_WITH_AES_256_CCM"_s, 0x0000C0AD));
	$assignStatic(CipherSuite::CS_C0AE, $new(CipherSuite, "CS_C0AE"_s, 335, "TLS_ECDHE_ECDSA_WITH_AES_128_CCM_8"_s, 0x0000C0AE));
	$assignStatic(CipherSuite::CS_C0AF, $new(CipherSuite, "CS_C0AF"_s, 336, "TLS_ECDHE_ECDSA_WITH_AES_256_CCM_8"_s, 0x0000C0AF));
	$assignStatic(CipherSuite::C_NULL, $new(CipherSuite, "C_NULL"_s, 337, "SSL_NULL_WITH_NULL_NULL"_s, 0));
	$assignStatic(CipherSuite::$VALUES, CipherSuite::$values());
}

CipherSuite::CipherSuite() {
}

$Class* CipherSuite::load$($String* name, bool initialize) {
	$loadClass(CipherSuite, name, initialize, &_CipherSuite_ClassInfo_, clinit$CipherSuite, allocate$CipherSuite);
	return class$;
}

$Class* CipherSuite::class$ = nullptr;

		} // ssl
	} // security
} // sun