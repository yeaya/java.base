#include <java/security/URIParameter.h>

#include <java/net/URI.h>
#include <java/security/Policy$Parameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $Policy$Parameters = ::java::security::Policy$Parameters;

namespace java {
	namespace security {

$FieldInfo _URIParameter_FieldInfo_[] = {
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE, $field(URIParameter, uri)},
	{}
};

$MethodInfo _URIParameter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(URIParameter, init$, void, $URI*)},
	{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(URIParameter, getURI, $URI*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _URIParameter_InnerClassesInfo_[] = {
	{"java.security.Policy$Parameters", "java.security.Policy", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.security.auth.login.Configuration$Parameters", "javax.security.auth.login.Configuration", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _URIParameter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.URIParameter",
	"java.lang.Object",
	"java.security.Policy$Parameters,javax.security.auth.login.Configuration$Parameters",
	_URIParameter_FieldInfo_,
	_URIParameter_MethodInfo_,
	nullptr,
	nullptr,
	_URIParameter_InnerClassesInfo_
};

$Object* allocate$URIParameter($Class* clazz) {
	return $of($alloc(URIParameter));
}

int32_t URIParameter::hashCode() {
	 return this->$Policy$Parameters::hashCode();
}

bool URIParameter::equals(Object$* obj) {
	 return this->$Policy$Parameters::equals(obj);
}

$Object* URIParameter::clone() {
	 return this->$Policy$Parameters::clone();
}

$String* URIParameter::toString() {
	 return this->$Policy$Parameters::toString();
}

void URIParameter::finalize() {
	this->$Policy$Parameters::finalize();
}

void URIParameter::init$($URI* uri) {
	if (uri == nullptr) {
		$throwNew($NullPointerException, "invalid null URI"_s);
	}
	$set(this, uri, uri);
}

$URI* URIParameter::getURI() {
	return this->uri;
}

URIParameter::URIParameter() {
}

$Class* URIParameter::load$($String* name, bool initialize) {
	$loadClass(URIParameter, name, initialize, &_URIParameter_ClassInfo_, allocate$URIParameter);
	return class$;
}

$Class* URIParameter::class$ = nullptr;

	} // security
} // java