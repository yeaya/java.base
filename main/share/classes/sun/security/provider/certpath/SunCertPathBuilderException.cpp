#include <sun/security/provider/certpath/SunCertPathBuilderException.h>

#include <java/security/cert/CertPathBuilderException.h>
#include <sun/security/provider/certpath/AdjacencyList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertPathBuilderException = ::java::security::cert::CertPathBuilderException;
using $AdjacencyList = ::sun::security::provider::certpath::AdjacencyList;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _SunCertPathBuilderException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunCertPathBuilderException, serialVersionUID)},
	{"adjList", "Lsun/security/provider/certpath/AdjacencyList;", nullptr, $PRIVATE | $TRANSIENT, $field(SunCertPathBuilderException, adjList)},
	{}
};

$MethodInfo _SunCertPathBuilderException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SunCertPathBuilderException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SunCertPathBuilderException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SunCertPathBuilderException, init$, void, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SunCertPathBuilderException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;Lsun/security/provider/certpath/AdjacencyList;)V", nullptr, 0, $method(SunCertPathBuilderException, init$, void, $String*, $AdjacencyList*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;Lsun/security/provider/certpath/AdjacencyList;)V", nullptr, 0, $method(SunCertPathBuilderException, init$, void, $String*, $Throwable*, $AdjacencyList*)},
	{"getAdjacencyList", "()Lsun/security/provider/certpath/AdjacencyList;", nullptr, $PUBLIC, $virtualMethod(SunCertPathBuilderException, getAdjacencyList, $AdjacencyList*)},
	{}
};

$ClassInfo _SunCertPathBuilderException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.SunCertPathBuilderException",
	"java.security.cert.CertPathBuilderException",
	nullptr,
	_SunCertPathBuilderException_FieldInfo_,
	_SunCertPathBuilderException_MethodInfo_
};

$Object* allocate$SunCertPathBuilderException($Class* clazz) {
	return $of($alloc(SunCertPathBuilderException));
}

void SunCertPathBuilderException::init$() {
	$CertPathBuilderException::init$();
}

void SunCertPathBuilderException::init$($String* msg) {
	$CertPathBuilderException::init$(msg);
}

void SunCertPathBuilderException::init$($Throwable* cause) {
	$CertPathBuilderException::init$(cause);
}

void SunCertPathBuilderException::init$($String* msg, $Throwable* cause) {
	$CertPathBuilderException::init$(msg, cause);
}

void SunCertPathBuilderException::init$($String* msg, $AdjacencyList* adjList) {
	SunCertPathBuilderException::init$(msg);
	$set(this, adjList, adjList);
}

void SunCertPathBuilderException::init$($String* msg, $Throwable* cause, $AdjacencyList* adjList) {
	SunCertPathBuilderException::init$(msg, cause);
	$set(this, adjList, adjList);
}

$AdjacencyList* SunCertPathBuilderException::getAdjacencyList() {
	return this->adjList;
}

SunCertPathBuilderException::SunCertPathBuilderException() {
}

SunCertPathBuilderException::SunCertPathBuilderException(const SunCertPathBuilderException& e) : $CertPathBuilderException(e) {
}

void SunCertPathBuilderException::throw$() {
	throw *this;
}

$Class* SunCertPathBuilderException::load$($String* name, bool initialize) {
	$loadClass(SunCertPathBuilderException, name, initialize, &_SunCertPathBuilderException_ClassInfo_, allocate$SunCertPathBuilderException);
	return class$;
}

$Class* SunCertPathBuilderException::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun