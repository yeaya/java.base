#include <java/security/Timestamp.h>

#include <java/io/ObjectInputStream.h>
#include <java/security/cert/CertPath.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CertPath = ::java::security::cert::CertPath;
using $Date = ::java::util::Date;
using $List = ::java::util::List;

namespace java {
	namespace security {

$FieldInfo _Timestamp_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Timestamp, serialVersionUID)},
	{"timestamp", "Ljava/util/Date;", nullptr, $PRIVATE, $field(Timestamp, timestamp)},
	{"signerCertPath", "Ljava/security/cert/CertPath;", nullptr, $PRIVATE, $field(Timestamp, signerCertPath)},
	{"myhash", "I", nullptr, $PRIVATE | $TRANSIENT, $field(Timestamp, myhash)},
	{}
};

$MethodInfo _Timestamp_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Date;Ljava/security/cert/CertPath;)V", nullptr, $PUBLIC, $method(static_cast<void(Timestamp::*)($Date*,$CertPath*)>(&Timestamp::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getSignerCertPath", "()Ljava/security/cert/CertPath;", nullptr, $PUBLIC, $method(static_cast<$CertPath*(Timestamp::*)()>(&Timestamp::getSignerCertPath))},
	{"getTimestamp", "()Ljava/util/Date;", nullptr, $PUBLIC, $method(static_cast<$Date*(Timestamp::*)()>(&Timestamp::getTimestamp))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Timestamp::*)($ObjectInputStream*)>(&Timestamp::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Timestamp_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.Timestamp",
	"java.lang.Object",
	"java.io.Serializable",
	_Timestamp_FieldInfo_,
	_Timestamp_MethodInfo_
};

$Object* allocate$Timestamp($Class* clazz) {
	return $of($alloc(Timestamp));
}

void Timestamp::init$($Date* timestamp, $CertPath* signerCertPath) {
	this->myhash = -1;
	if (timestamp == nullptr || signerCertPath == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, timestamp, $new($Date, $nc(timestamp)->getTime()));
	$set(this, signerCertPath, signerCertPath);
}

$Date* Timestamp::getTimestamp() {
	return $new($Date, $nc(this->timestamp)->getTime());
}

$CertPath* Timestamp::getSignerCertPath() {
	return this->signerCertPath;
}

int32_t Timestamp::hashCode() {
	if (this->myhash == -1) {
		int32_t var$0 = $nc(this->timestamp)->hashCode();
		this->myhash = var$0 + $nc(this->signerCertPath)->hashCode();
	}
	return this->myhash;
}

bool Timestamp::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	$var(Timestamp, other, nullptr);
	bool var$1 = $instanceOf(Timestamp, obj);
	if (var$1) {
		$assign(other, $cast(Timestamp, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$2 = $nc(this->timestamp)->equals($($nc(other)->getTimestamp()));
		var$0 = (var$2 && $nc(this->signerCertPath)->equals($($nc(other)->getSignerCertPath())));
	}
	return var$0;
}

$String* Timestamp::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("("_s);
	sb->append($$str({"timestamp: "_s, this->timestamp}));
	$var($List, certs, $nc(this->signerCertPath)->getCertificates());
	if (!$nc(certs)->isEmpty()) {
		sb->append($$str({"TSA: "_s, $(certs->get(0))}));
	} else {
		sb->append("TSA: <empty>"_s);
	}
	sb->append(")"_s);
	return sb->toString();
}

void Timestamp::readObject($ObjectInputStream* ois) {
	$nc(ois)->defaultReadObject();
	this->myhash = -1;
	$set(this, timestamp, $new($Date, $nc(this->timestamp)->getTime()));
}

Timestamp::Timestamp() {
}

$Class* Timestamp::load$($String* name, bool initialize) {
	$loadClass(Timestamp, name, initialize, &_Timestamp_ClassInfo_, allocate$Timestamp);
	return class$;
}

$Class* Timestamp::class$ = nullptr;

	} // security
} // java