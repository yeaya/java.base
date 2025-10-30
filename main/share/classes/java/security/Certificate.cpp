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

$NamedAttribute Certificate_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Certificate_Annotations_[] = {
	{"Ljava/lang/Deprecated;", Certificate_Attribute_var$0},
	{}
};

$MethodInfo _Certificate_MethodInfo_[] = {
	{"decode", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyException,java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyException,java.io.IOException"},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGuarantor", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Certificate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.Certificate",
	nullptr,
	nullptr,
	nullptr,
	_Certificate_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Certificate_Annotations_
};

$Object* allocate$Certificate($Class* clazz) {
	return $of($alloc(Certificate));
}

$Class* Certificate::load$($String* name, bool initialize) {
	$loadClass(Certificate, name, initialize, &_Certificate_ClassInfo_, allocate$Certificate);
	return class$;
}

$Class* Certificate::class$ = nullptr;

	} // security
} // java