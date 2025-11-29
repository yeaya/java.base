#include <sun/security/util/DisabledAlgorithmConstraints$DenyAfterConstraint.h>

#include <java/security/Key.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException$BasicReason.h>
#include <java/security/cert/CertPathValidatorException$Reason.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/util/Calendar$Builder.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/TimeZone.h>
#include <sun/security/util/ConstraintsParameters.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <jcpp.h>

#undef ALGORITHM_CONSTRAINED
#undef DAY_OF_MONTH
#undef MONTH
#undef YEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertPathValidatorException$BasicReason = ::java::security::cert::CertPathValidatorException$BasicReason;
using $CertPathValidatorException$Reason = ::java::security::cert::CertPathValidatorException$Reason;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $Calendar = ::java::util::Calendar;
using $Calendar$Builder = ::java::util::Calendar$Builder;
using $Date = ::java::util::Date;
using $TimeZone = ::java::util::TimeZone;
using $ConstraintsParameters = ::sun::security::util::ConstraintsParameters;
using $Debug = ::sun::security::util::Debug;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $DisabledAlgorithmConstraints$Constraint = ::sun::security::util::DisabledAlgorithmConstraints$Constraint;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DisabledAlgorithmConstraints$DenyAfterConstraint_FieldInfo_[] = {
	{"denyAfterDate", "Ljava/util/Date;", nullptr, $PRIVATE, $field(DisabledAlgorithmConstraints$DenyAfterConstraint, denyAfterDate)},
	{"dateFormat", "Ljava/text/SimpleDateFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$DenyAfterConstraint, dateFormat)},
	{}
};

$MethodInfo _DisabledAlgorithmConstraints$DenyAfterConstraint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;III)V", nullptr, 0, $method(static_cast<void(DisabledAlgorithmConstraints$DenyAfterConstraint::*)($String*,int32_t,int32_t,int32_t)>(&DisabledAlgorithmConstraints$DenyAfterConstraint::init$))},
	{"permits", "(Lsun/security/util/ConstraintsParameters;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertPathValidatorException"},
	{"permits", "(Ljava/security/Key;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DisabledAlgorithmConstraints$DenyAfterConstraint_InnerClassesInfo_[] = {
	{"sun.security.util.DisabledAlgorithmConstraints$DenyAfterConstraint", "sun.security.util.DisabledAlgorithmConstraints", "DenyAfterConstraint", $PRIVATE | $STATIC},
	{"sun.security.util.DisabledAlgorithmConstraints$Constraint", "sun.security.util.DisabledAlgorithmConstraints", "Constraint", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DisabledAlgorithmConstraints$DenyAfterConstraint_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DisabledAlgorithmConstraints$DenyAfterConstraint",
	"sun.security.util.DisabledAlgorithmConstraints$Constraint",
	nullptr,
	_DisabledAlgorithmConstraints$DenyAfterConstraint_FieldInfo_,
	_DisabledAlgorithmConstraints$DenyAfterConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_DisabledAlgorithmConstraints$DenyAfterConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.DisabledAlgorithmConstraints"
};

$Object* allocate$DisabledAlgorithmConstraints$DenyAfterConstraint($Class* clazz) {
	return $of($alloc(DisabledAlgorithmConstraints$DenyAfterConstraint));
}

$SimpleDateFormat* DisabledAlgorithmConstraints$DenyAfterConstraint::dateFormat = nullptr;

void DisabledAlgorithmConstraints$DenyAfterConstraint::init$($String* algo, int32_t year, int32_t month, int32_t day) {
	$useLocalCurrentObjectStackCache();
	$DisabledAlgorithmConstraints$Constraint::init$();
	$var($Calendar, c, nullptr);
	$set(this, algorithm, algo);
	$init($DisabledAlgorithmConstraints);
	if ($DisabledAlgorithmConstraints::debug != nullptr) {
		$nc($DisabledAlgorithmConstraints::debug)->println($$str({"DenyAfterConstraint read in as:  year "_s, $$str(year), ", month = "_s, $$str(month), ", day = "_s, $$str(day)}));
	}
	$assign(c, $nc($($nc($($$new($Calendar$Builder)->setTimeZone($($TimeZone::getTimeZone("GMT"_s)))))->setDate(year, month - 1, day)))->build());
	bool var$0 = year > $nc(c)->getActualMaximum($Calendar::YEAR);
	if (var$0 || year < $nc(c)->getActualMinimum($Calendar::YEAR)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid year given in constraint: "_s, $$str(year)}));
	}
	bool var$1 = (month - 1) > $nc(c)->getActualMaximum($Calendar::MONTH);
	if (var$1 || (month - 1) < $nc(c)->getActualMinimum($Calendar::MONTH)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid month given in constraint: "_s, $$str(month)}));
	}
	bool var$2 = day > $nc(c)->getActualMaximum($Calendar::DAY_OF_MONTH);
	if (var$2 || day < $nc(c)->getActualMinimum($Calendar::DAY_OF_MONTH)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid Day of Month given in constraint: "_s, $$str(day)}));
	}
	$set(this, denyAfterDate, $nc(c)->getTime());
	if ($DisabledAlgorithmConstraints::debug != nullptr) {
		$nc($DisabledAlgorithmConstraints::debug)->println($$str({"DenyAfterConstraint date set to: "_s, $($nc(DisabledAlgorithmConstraints$DenyAfterConstraint::dateFormat)->format(this->denyAfterDate))}));
	}
}

void DisabledAlgorithmConstraints$DenyAfterConstraint::permits($ConstraintsParameters* cp) {
	$useLocalCurrentObjectStackCache();
	$var($Date, currentDate, nullptr);
	$var($String, errmsg, nullptr);
	if ($nc(cp)->getDate() != nullptr) {
		$assign(currentDate, cp->getDate());
	} else {
		$assign(currentDate, $new($Date));
	}
	if (!$nc(this->denyAfterDate)->after(currentDate)) {
		if (next(cp)) {
			return;
		}
		$var($String, var$1, $$str({"denyAfter constraint check failed: "_s, this->algorithm, " used with Constraint date: "_s, $($nc(DisabledAlgorithmConstraints$DenyAfterConstraint::dateFormat)->format(this->denyAfterDate)), "; params date: "_s}));
		$var($String, var$0, $$concat(var$1, $($nc(DisabledAlgorithmConstraints$DenyAfterConstraint::dateFormat)->format(currentDate))));
		$init($CertPathValidatorException$BasicReason);
		$throwNew($CertPathValidatorException, $$concat(var$0, $($nc(cp)->extendedExceptionMsg())), nullptr, nullptr, -1, $CertPathValidatorException$BasicReason::ALGORITHM_CONSTRAINED);
	}
}

bool DisabledAlgorithmConstraints$DenyAfterConstraint::permits($Key* key) {
	$useLocalCurrentObjectStackCache();
	if (next(key)) {
		return true;
	}
	$init($DisabledAlgorithmConstraints);
	if ($DisabledAlgorithmConstraints::debug != nullptr) {
		$nc($DisabledAlgorithmConstraints::debug)->println($$str({"DenyAfterConstraints.permits(): "_s, this->algorithm}));
	}
	return $nc(this->denyAfterDate)->after($$new($Date));
}

void clinit$DisabledAlgorithmConstraints$DenyAfterConstraint($Class* class$) {
	$assignStatic(DisabledAlgorithmConstraints$DenyAfterConstraint::dateFormat, $new($SimpleDateFormat, "EEE, MMM d HH:mm:ss z yyyy"_s));
}

DisabledAlgorithmConstraints$DenyAfterConstraint::DisabledAlgorithmConstraints$DenyAfterConstraint() {
}

$Class* DisabledAlgorithmConstraints$DenyAfterConstraint::load$($String* name, bool initialize) {
	$loadClass(DisabledAlgorithmConstraints$DenyAfterConstraint, name, initialize, &_DisabledAlgorithmConstraints$DenyAfterConstraint_ClassInfo_, clinit$DisabledAlgorithmConstraints$DenyAfterConstraint, allocate$DisabledAlgorithmConstraints$DenyAfterConstraint);
	return class$;
}

$Class* DisabledAlgorithmConstraints$DenyAfterConstraint::class$ = nullptr;

		} // util
	} // security
} // sun