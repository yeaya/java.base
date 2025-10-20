#include <sun/security/util/DisabledAlgorithmConstraints$KeySizeConstraint.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/security/util/AlgorithmDecomposer.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DisabledAlgorithmConstraints$1.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint$Operator.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <sun/security/util/KeyUtil.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED
#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $AlgorithmDecomposer = ::sun::security::util::AlgorithmDecomposer;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $Debug = ::sun::security::util::Debug;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $DisabledAlgorithmConstraints$1 = ::sun::security::util::DisabledAlgorithmConstraints$1;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;
using $DisabledAlgorithmConstraints$Constraint$Operator = ::sun::security::util::DisabledAlgorithmConstraints$Constraint$Operator;
using $KeyUtil = ::sun::security::util::KeyUtil;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$KeySizeConstraint_FieldInfo_[] = {
	{"minSize", "I", nullptr, $PRIVATE, $field(DisabledAlgorithmConstraints$KeySizeConstraint, minSize)},
	{"maxSize", "I", nullptr, $PRIVATE, $field(DisabledAlgorithmConstraints$KeySizeConstraint, maxSize)},
	{"prohibitedSize", "I", nullptr, $PRIVATE, $field(DisabledAlgorithmConstraints$KeySizeConstraint, prohibitedSize)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$KeySizeConstraint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/security/util/DisabledAlgorithmConstraints$Constraint$Operator;I)V", nullptr, $PUBLIC, $method(static_cast<void(DisabledAlgorithmConstraints$KeySizeConstraint::*)($String*,$DisabledAlgorithmConstraints$Constraint$Operator*,int32_t)>(&DisabledAlgorithmConstraints$KeySizeConstraint::init$))},
	{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{"permits", "(Ljava/security/Key;)Z", nullptr, $PUBLIC},
	{"permits", "(Ljava/security/AlgorithmParameters;)Z", nullptr, $PUBLIC},
	{"permitsImpl", "(Ljava/security/Key;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DisabledAlgorithmConstraints$KeySizeConstraint::*)($Key*)>(&DisabledAlgorithmConstraints$KeySizeConstraint::permitsImpl))},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$KeySizeConstraint_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$KeySizeConstraint", "sun.security.util.DisabledAlgorithmConstraints", "KeySizeConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$KeySizeConstraint_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$KeySizeConstraint",
	"sun.security.util.DisabledAlgorithmConstraints$Constraint",
	nullptr,
	_DisabledAlgorithmConstraints$KeySizeConstraint_FieldInfo_,
	_DisabledAlgorithmConstraints$KeySizeConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$KeySizeConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$KeySizeConstraint($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$KeySizeConstraint));
}

void DisabledAlgorithmConstraints$KeySizeConstraint::init$($String* algo, $DisabledAlgorithmConstraints$Constraint$Operator* operator$, int32_t length) {
	$DisabledAlgorithmConstraints$Constraint::init$();
	this->prohibitedSize = -1;
	$set(this, algorithm, algo);
	$init($DisabledAlgorithmConstraints$1);
	switch ($nc($DisabledAlgorithmConstraints$1::$SwitchMap$sun$security$util$DisabledAlgorithmConstraints$Constraint$Operator)->get($nc((operator$))->ordinal())) {
	case 1:
		{
			this->minSize = 0;
			this->maxSize = $Integer::MAX_VALUE;
			this->prohibitedSize = length;
			break;
		}
	case 2:
		{
			this->minSize = length;
			this->maxSize = length;
			break;
		}
	case 3:
		{
			this->minSize = length;
			this->maxSize = $Integer::MAX_VALUE;
			break;
		}
	case 4:
		{
			this->minSize = length + 1;
			this->maxSize = $Integer::MAX_VALUE;
			break;
		}
	case 5:
		{
			this->minSize = 0;
			this->maxSize = length;
			break;
		}
	case 6:
		{
			this->minSize = 0;
			this->maxSize = length > 1 ? (length - 1) : 0;
			break;
		}
	default:
		{
			this->minSize = $Integer::MAX_VALUE;
			this->maxSize = -1;
		}
	}
}

void DisabledAlgorithmConstraints$KeySizeConstraint::permits($ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(cp)->getKeys()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Key, key, $cast($Key, i$->next()));
			{
				if (!permitsImpl(key)) {
					if (this->nextConstraint != nullptr) {
						$nc(this->nextConstraint)->permits(cp);
						continue;
					}
					$var($String, var$0, $$str({"Algorithm constraints check failed on keysize limits: "_s, this->algorithm, " "_s, $$str($KeyUtil::getKeySize(key)), " bit key"_s}));
					$init($CertPathValidatorException$BasicReason);
					$throwNew($CertPathValidatorException, $$concat(var$0, $(cp->extendedExceptionMsg())), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
				}
			}
		}
	}
}

bool DisabledAlgorithmConstraints$KeySizeConstraint::permits($Key* key) {
	if (this->nextConstraint != nullptr && $nc(this->nextConstraint)->permits(key)) {
		return true;
	}
	$init($DisabledAlgorithmConstraints);
	if ($DisabledAlgorithmConstraints::debug != nullptr) {
		$nc($DisabledAlgorithmConstraints::debug)->println($$str({"KeySizeConstraints.permits(): "_s, this->algorithm}));
	}
	return permitsImpl(key);
}

bool DisabledAlgorithmConstraints$KeySizeConstraint::permits($AlgorithmParameters* parameters) {
	$useLocalCurrentObjectStackCache();
	$var($String, paramAlg, $nc(parameters)->getAlgorithm());
	if (!$nc(this->algorithm)->equalsIgnoreCase($(parameters->getAlgorithm()))) {
		$var($Collection, aliases, $AlgorithmDecomposer::getAliases(this->algorithm));
		if (!$nc(aliases)->contains(paramAlg)) {
			return true;
		}
	}
	int32_t keySize = $KeyUtil::getKeySize(parameters);
	if (keySize == 0) {
		return false;
	} else if (keySize > 0) {
		return !((keySize < this->minSize) || (keySize > this->maxSize) || (this->prohibitedSize == keySize));
	}
	return true;
}

bool DisabledAlgorithmConstraints$KeySizeConstraint::permitsImpl($Key* key) {
	if ($nc(this->algorithm)->compareToIgnoreCase($($nc(key)->getAlgorithm())) != 0) {
		return true;
	}
	int32_t size = $KeyUtil::getKeySize(key);
	if (size == 0) {
		return false;
	} else if (size > 0) {
		return !((size < this->minSize) || (size > this->maxSize) || (this->prohibitedSize == size));
	}
	return true;
}

DisabledAlgorithmConstraints$KeySizeConstraint::DisabledAlgorithmConstraints$KeySizeConstraint() {
}

$Class* DisabledAlgorithmConstraints$KeySizeConstraint::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$KeySizeConstraint, name, initialize, &_DisabledAlgorithmConstraints$KeySizeConstraint_ClassInfo_, allocate$DisabledAlgorithmConstraints$KeySizeConstraint);
	return class$;
}

$Class* DisabledAlgorithmConstraints$KeySizeConstraint::class$ = nullptr;

		} // util
	} // security
} // sun