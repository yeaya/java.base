#include <sun/security/provider/certpath/BuildStep.h>

#include <java/security/cert/X509Certificate.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/Vertex.h>
#include <jcpp.h>

#undef BACK
#undef FAIL
#undef FOLLOW
#undef POSSIBLE
#undef SUCCEED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Vertex = ::sun::security::provider::certpath::Vertex;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _BuildStep_FieldInfo_[] = {
	{"vertex", "Lsun/security/provider/certpath/Vertex;", nullptr, $PRIVATE, $field(BuildStep, vertex)},
	{"cert", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(BuildStep, cert)},
	{"throwable", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(BuildStep, throwable)},
	{"result", "I", nullptr, $PRIVATE, $field(BuildStep, result)},
	{"POSSIBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BuildStep, POSSIBLE)},
	{"BACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BuildStep, BACK)},
	{"FOLLOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BuildStep, FOLLOW)},
	{"FAIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BuildStep, FAIL)},
	{"SUCCEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BuildStep, SUCCEED)},
	{}
};

$MethodInfo _BuildStep_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/certpath/Vertex;I)V", nullptr, $PUBLIC, $method(static_cast<void(BuildStep::*)($Vertex*,int32_t)>(&BuildStep::init$))},
	{"fullToString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{"getIssuerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIssuerName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getResult", "()I", nullptr, $PUBLIC},
	{"getSubjectName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSubjectName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getThrowable", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getVertex", "()Lsun/security/provider/certpath/Vertex;", nullptr, $PUBLIC},
	{"resultToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verboseToString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BuildStep_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.BuildStep",
	"java.lang.Object",
	nullptr,
	_BuildStep_FieldInfo_,
	_BuildStep_MethodInfo_
};

$Object* allocate$BuildStep($Class* clazz) {
	return $of($alloc(BuildStep));
}

void BuildStep::init$($Vertex* vtx, int32_t res) {
	$set(this, vertex, vtx);
	if (this->vertex != nullptr) {
		$set(this, cert, $nc(this->vertex)->getCertificate());
		$set(this, throwable, $nc(this->vertex)->getThrowable());
	}
	this->result = res;
}

$Vertex* BuildStep::getVertex() {
	return this->vertex;
}

$X509Certificate* BuildStep::getCertificate() {
	return this->cert;
}

$String* BuildStep::getIssuerName() {
	return getIssuerName(nullptr);
}

$String* BuildStep::getIssuerName($String* defaultName) {
	return (this->cert == nullptr ? defaultName : $nc($($nc(this->cert)->getIssuerX500Principal()))->toString());
}

$String* BuildStep::getSubjectName() {
	return getSubjectName(nullptr);
}

$String* BuildStep::getSubjectName($String* defaultName) {
	return (this->cert == nullptr ? defaultName : $nc($($nc(this->cert)->getSubjectX500Principal()))->toString());
}

$Throwable* BuildStep::getThrowable() {
	return this->throwable;
}

int32_t BuildStep::getResult() {
	return this->result;
}

$String* BuildStep::resultToString(int32_t res) {
	$var($String, resultString, ""_s);
	switch (res) {
	case BuildStep::POSSIBLE:
		{
			$assign(resultString, "Certificate to be tried.\n"_s);
			break;
		}
	case BuildStep::BACK:
		{
			$assign(resultString, "Certificate backed out since path does not satisfy build requirements.\n"_s);
			break;
		}
	case BuildStep::FOLLOW:
		{
			$assign(resultString, "Certificate satisfies conditions.\n"_s);
			break;
		}
	case BuildStep::FAIL:
		{
			$assign(resultString, "Certificate backed out since path does not satisfy conditions.\n"_s);
			break;
		}
	case BuildStep::SUCCEED:
		{
			$assign(resultString, "Certificate satisfies conditions.\n"_s);
			break;
		}
	default:
		{
			$assign(resultString, "Internal error: Invalid step result value.\n"_s);
		}
	}
	return resultString;
}

$String* BuildStep::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, out, "Internal Error\n"_s);
	switch (this->result) {
	case BuildStep::BACK:
		{}
	case BuildStep::FAIL:
		{
			$assign(out, resultToString(this->result));
			$assign(out, $str({out, $($nc(this->vertex)->throwableToString())}));
			break;
		}
	case BuildStep::FOLLOW:
		{}
	case BuildStep::SUCCEED:
		{}
	case BuildStep::POSSIBLE:
		{
			$assign(out, resultToString(this->result));
			break;
		}
	default:
		{
			$assign(out, "Internal Error: Invalid step result\n"_s);
		}
	}
	return out;
}

$String* BuildStep::verboseToString() {
	$useLocalCurrentObjectStackCache();
	$var($String, out, resultToString(getResult()));
	switch (this->result) {
	case BuildStep::BACK:
		{}
	case BuildStep::FAIL:
		{
			$assign(out, $str({out, $($nc(this->vertex)->throwableToString())}));
			break;
		}
	case BuildStep::FOLLOW:
		{}
	case BuildStep::SUCCEED:
		{
			$assign(out, $str({out, $($nc(this->vertex)->moreToString())}));
			break;
		}
	case BuildStep::POSSIBLE:
		{
			break;
		}
	default:
		{
			break;
		}
	}
	$assign(out, $str({out, "Certificate contains:\n"_s, $($nc(this->vertex)->certToString())}));
	return out;
}

$String* BuildStep::fullToString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $(resultToString(getResult())));
	return $concat(var$0, $($nc(this->vertex)->toString()));
}

BuildStep::BuildStep() {
}

$Class* BuildStep::load$($String* name, bool initialize) {
	$loadClass(BuildStep, name, initialize, &_BuildStep_ClassInfo_, allocate$BuildStep);
	return class$;
}

$Class* BuildStep::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun