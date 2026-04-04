#include <java/security/Certificate.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/security/Principal.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Principal = ::java::security::Principal;
using $PublicKey = ::java::security::PublicKey;

namespace java {
	namespace security {

$Class* Certificate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"decode", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, decode, void, $InputStream*), "java.security.KeyException,java.io.IOException"},
		{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, encode, void, $OutputStream*), "java.security.KeyException,java.io.IOException"},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, getFormat, $String*)},
		{"getGuarantor", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, getGuarantor, $Principal*)},
		{"getPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, getPrincipal, $Principal*)},
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, getPublicKey, $PublicKey*)},
		{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Certificate, toString, $String*, bool)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.2"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.Certificate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Certificate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Certificate);
	});
	return class$;
}

$Class* Certificate::class$ = nullptr;

	} // security
} // java