#include <sun/security/x509/CertException.h>

#include <java/lang/SecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;

namespace sun {
	namespace security {
		namespace x509 {

$CompoundAttribute _CertException_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CertException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CertException, serialVersionUID)},
	{"verf_INVALID_SIG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_INVALID_SIG)},
	{"verf_INVALID_REVOKED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_INVALID_REVOKED)},
	{"verf_INVALID_NOTBEFORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_INVALID_NOTBEFORE)},
	{"verf_INVALID_EXPIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_INVALID_EXPIRED)},
	{"verf_CA_UNTRUSTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_CA_UNTRUSTED)},
	{"verf_CHAIN_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_CHAIN_LENGTH)},
	{"verf_PARSE_ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, verf_PARSE_ERROR)},
	{"err_CONSTRUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, err_CONSTRUCTION)},
	{"err_INVALID_PUBLIC_KEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, err_INVALID_PUBLIC_KEY)},
	{"err_INVALID_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, err_INVALID_VERSION)},
	{"err_INVALID_FORMAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, err_INVALID_FORMAT)},
	{"err_ENCODING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CertException, err_ENCODING)},
	{"verfCode", "I", nullptr, $PRIVATE, $field(CertException, verfCode)},
	{"moreData", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CertException, moreData)},
	{}
};

$MethodInfo _CertException_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CertException::*)(int32_t,$String*)>(&CertException::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CertException::*)(int32_t)>(&CertException::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMoreData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getVerfCode", "()I", nullptr, $PUBLIC},
	{"getVerfDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertException",
	"java.lang.SecurityException",
	nullptr,
	_CertException_FieldInfo_,
	_CertException_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CertException_Annotations_
};

$Object* allocate$CertException($Class* clazz) {
	return $of($alloc(CertException));
}

void CertException::init$(int32_t code, $String* moredata) {
	$SecurityException::init$();
	this->verfCode = code;
	$set(this, moreData, moredata);
}

void CertException::init$(int32_t code) {
	$SecurityException::init$();
	this->verfCode = code;
}

int32_t CertException::getVerfCode() {
	return this->verfCode;
}

$String* CertException::getMoreData() {
	return this->moreData;
}

$String* CertException::getVerfDescription() {
	switch (this->verfCode) {
	case CertException::verf_INVALID_SIG:
		{
			return "The signature in the certificate is not valid."_s;
		}
	case CertException::verf_INVALID_REVOKED:
		{
			return "The certificate has been revoked."_s;
		}
	case CertException::verf_INVALID_NOTBEFORE:
		{
			return "The certificate is not yet valid."_s;
		}
	case CertException::verf_INVALID_EXPIRED:
		{
			return "The certificate has expired."_s;
		}
	case CertException::verf_CA_UNTRUSTED:
		{
			return "The Authority which issued the certificate is not trusted."_s;
		}
	case CertException::verf_CHAIN_LENGTH:
		{
			return "The certificate path to a trusted authority is too long."_s;
		}
	case CertException::verf_PARSE_ERROR:
		{
			return "The certificate could not be parsed."_s;
		}
	case CertException::err_CONSTRUCTION:
		{
			return "There was an error when constructing the certificate."_s;
		}
	case CertException::err_INVALID_PUBLIC_KEY:
		{
			return "The public key was not in the correct format."_s;
		}
	case CertException::err_INVALID_VERSION:
		{
			return "The certificate has an invalid version number."_s;
		}
	case CertException::err_INVALID_FORMAT:
		{
			return "The certificate has an invalid format."_s;
		}
	case CertException::err_ENCODING:
		{
			return "Problem encountered while encoding the data."_s;
		}
	default:
		{
			return $str({"Unknown code:  "_s, $$str(this->verfCode)});
		}
	}
}

$String* CertException::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"[Certificate Exception: "_s, $(getMessage()), $$str(u']')});
}

$String* CertException::getMessage() {
	$useLocalCurrentObjectStackCache();
	return $str({$(getVerfDescription()), ((this->moreData != nullptr) ? ($$str({"\n  ("_s, this->moreData, $$str(u')')})) : ""_s)});
}

CertException::CertException() {
}

CertException::CertException(const CertException& e) : $SecurityException(e) {
}

void CertException::throw$() {
	throw *this;
}

$Class* CertException::load$($String* name, bool initialize) {
	$loadClass(CertException, name, initialize, &_CertException_ClassInfo_, allocate$CertException);
	return class$;
}

$Class* CertException::class$ = nullptr;

		} // x509
	} // security
} // sun