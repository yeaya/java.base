#include <java/security/CodeSigner.h>

#include <java/io/ObjectInputStream.h>
#include <java/security/Timestamp.h>
#include <java/security/cert/CertPath.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Timestamp = ::java::security::Timestamp;
using $CertPath = ::java::security::cert::CertPath;
using $List = ::java::util::List;

namespace java {
	namespace security {

$FieldInfo _CodeSigner_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CodeSigner, serialVersionUID)},
	{"signerCertPath", "Ljava/security/cert/CertPath;", nullptr, $PRIVATE, $field(CodeSigner, signerCertPath)},
	{"timestamp", "Ljava/security/Timestamp;", nullptr, $PRIVATE, $field(CodeSigner, timestamp)},
	{"myhash", "I", nullptr, $PRIVATE | $TRANSIENT, $field(CodeSigner, myhash)},
	{}
};

$MethodInfo _CodeSigner_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V", nullptr, $PUBLIC, $method(static_cast<void(CodeSigner::*)($CertPath*,$Timestamp*)>(&CodeSigner::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getSignerCertPath", "()Ljava/security/cert/CertPath;", nullptr, $PUBLIC, $method(static_cast<$CertPath*(CodeSigner::*)()>(&CodeSigner::getSignerCertPath))},
	{"getTimestamp", "()Ljava/security/Timestamp;", nullptr, $PUBLIC, $method(static_cast<$Timestamp*(CodeSigner::*)()>(&CodeSigner::getTimestamp))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CodeSigner::*)($ObjectInputStream*)>(&CodeSigner::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CodeSigner_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.CodeSigner",
	"java.lang.Object",
	"java.io.Serializable",
	_CodeSigner_FieldInfo_,
	_CodeSigner_MethodInfo_
};

$Object* allocate$CodeSigner($Class* clazz) {
	return $of($alloc(CodeSigner));
}

void CodeSigner::init$($CertPath* signerCertPath, $Timestamp* timestamp) {
	this->myhash = -1;
	if (signerCertPath == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, signerCertPath, signerCertPath);
	$set(this, timestamp, timestamp);
}

$CertPath* CodeSigner::getSignerCertPath() {
	return this->signerCertPath;
}

$Timestamp* CodeSigner::getTimestamp() {
	return this->timestamp;
}

int32_t CodeSigner::hashCode() {
	if (this->myhash == -1) {
		if (this->timestamp == nullptr) {
			this->myhash = $nc(this->signerCertPath)->hashCode();
		} else {
			int32_t var$0 = $nc(this->signerCertPath)->hashCode();
			this->myhash = var$0 + $nc(this->timestamp)->hashCode();
		}
	}
	return this->myhash;
}

bool CodeSigner::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var(CodeSigner, that, nullptr);
	bool var$0 = obj == nullptr;
	if (!var$0) {
		bool var$1 = $instanceOf(CodeSigner, obj);
		if (var$1) {
			$assign(that, $cast(CodeSigner, obj));
			var$1 = true;
		}
		var$0 = (!(var$1));
	}
	if (var$0) {
		return false;
	}
	if (this == that) {
		return true;
	}
	$var($Timestamp, thatTimestamp, $nc(that)->getTimestamp());
	if (this->timestamp == nullptr) {
		if (thatTimestamp != nullptr) {
			return false;
		}
	} else if (thatTimestamp == nullptr || (!$nc(this->timestamp)->equals(thatTimestamp))) {
		return false;
	}
	return $nc(this->signerCertPath)->equals($(that->getSignerCertPath()));
}

$String* CodeSigner::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("("_s);
	sb->append($$str({"Signer: "_s, $($nc($($nc(this->signerCertPath)->getCertificates()))->get(0))}));
	if (this->timestamp != nullptr) {
		sb->append($$str({"timestamp: "_s, this->timestamp}));
	}
	sb->append(")"_s);
	return sb->toString();
}

void CodeSigner::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	this->myhash = -1;
}

CodeSigner::CodeSigner() {
}

$Class* CodeSigner::load$($String* name, bool initialize) {
	$loadClass(CodeSigner, name, initialize, &_CodeSigner_ClassInfo_, allocate$CodeSigner);
	return class$;
}

$Class* CodeSigner::class$ = nullptr;

	} // security
} // java