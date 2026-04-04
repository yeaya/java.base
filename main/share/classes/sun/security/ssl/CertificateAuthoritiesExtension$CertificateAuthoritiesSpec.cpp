#include <sun/security/ssl/CertificateAuthoritiesExtension$CertificateAuthoritiesSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/cert/X509Certificate.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/CertificateAuthoritiesExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef ENGLISH

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $X500PrincipalArray = $Array<::javax::security::auth::x500::X500Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

void CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::init$($List* authorities) {
	$set(this, authorities, authorities);
}

void CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	if ($nc(m)->remaining() < 3) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid certificate_authorities extension: insufficient data"_s))));
	}
	int32_t listLen = $Record::getInt16(m);
	if (listLen == 0) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, "Invalid certificate_authorities extension: no certificate authorities"_s)));
	}
	if (listLen > m->remaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, "Invalid certificate_authorities extension: insufficient data"_s)));
	}
	$set(this, authorities, $new($LinkedList));
	while (listLen > 0) {
		$var($bytes, encoded, $Record::getBytes16(m));
		listLen -= (2 + $nc(encoded)->length);
		$nc(this->authorities)->add(encoded);
	}
}

$List* CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::getEncodedAuthorities($X509CertificateArray* trustedCerts) {
	$init(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec);
	$useLocalObjectStack();
	$var($List, authorities, $new($ArrayList, $nc(trustedCerts)->length));
	int32_t sizeAccount = 0;
	{
		$var($X509CertificateArray, arr$, trustedCerts);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($X509Certificate, cert, arr$->get(i$));
			{
				$var($X500Principal, x500Principal, $nc(cert)->getSubjectX500Principal());
				$var($bytes, encodedPrincipal, $nc(x500Principal)->getEncoded());
				sizeAccount += $nc(encodedPrincipal)->length;
				if (sizeAccount > 0x0000ffff) {
					return $Collections::emptyList();
				}
				if (encodedPrincipal->length != 0) {
					authorities->add(encodedPrincipal);
				}
			}
		}
	}
	return authorities;
}

$X500PrincipalArray* CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::getAuthorities() {
	$useLocalObjectStack();
	$var($X500PrincipalArray, principals, $new($X500PrincipalArray, $nc(this->authorities)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, this->authorities->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				principals->set(i++, $$new($X500Principal, encoded));
			}
		}
	}
	return principals;
}

$String* CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"certificate authorities\": \'[\'\n{0}\']\'"_s, $Locale::ENGLISH));
	$var($StringBuilder, builder, $new($StringBuilder, 512));
	{
		$var($Iterator, i$, $nc(this->authorities)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($bytes, encoded, $cast($bytes, i$->next()));
			{
				$var($X500Principal, principal, $new($X500Principal, encoded));
				builder->append($(principal->toString()));
				builder->append("\n"_s);
			}
		}
	}
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($Utilities::indent($(builder->toString())))}));
	return messageFormat->format(messageFields);
}

CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::CertificateAuthoritiesExtension$CertificateAuthoritiesSpec() {
}

$Class* CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"authorities", "Ljava/util/List;", "Ljava/util/List<[B>;", $FINAL, $field(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, authorities)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<[B>;)V", $PRIVATE, $method(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, init$, void, $List*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"getAuthorities", "()[Ljavax/security/auth/x500/X500Principal;", nullptr, 0, $method(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, getAuthorities, $X500PrincipalArray*)},
		{"getEncodedAuthorities", "([Ljava/security/cert/X509Certificate;)Ljava/util/List;", "([Ljava/security/cert/X509Certificate;)Ljava/util/List<[B>;", $PRIVATE | $STATIC, $staticMethod(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, getEncodedAuthorities, $List*, $X509CertificateArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesSpec", "sun.security.ssl.CertificateAuthoritiesExtension", "CertificateAuthoritiesSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.CertificateAuthoritiesExtension$CertificateAuthoritiesSpec",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$SSLExtensionSpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertificateAuthoritiesExtension"
	};
	$loadClass(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificateAuthoritiesExtension$CertificateAuthoritiesSpec);
	});
	return class$;
}

$Class* CertificateAuthoritiesExtension$CertificateAuthoritiesSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun