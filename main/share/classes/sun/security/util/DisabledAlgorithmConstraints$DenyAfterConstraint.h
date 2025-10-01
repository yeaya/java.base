#ifndef _sun_security_util_DisabledAlgorithmConstraints$DenyAfterConstraint_h_
#define _sun_security_util_DisabledAlgorithmConstraints$DenyAfterConstraint_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$DenyAfterConstraint
//$ extends sun.security.util.DisabledAlgorithmConstraints$Constraint

#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>

namespace java {
	namespace security {
		class Key;
	}
}
namespace java {
	namespace text {
		class SimpleDateFormat;
	}
}
namespace java {
	namespace util {
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ConstraintsParameters;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DisabledAlgorithmConstraints$DenyAfterConstraint : public ::sun::security::util::DisabledAlgorithmConstraints$Constraint {
	$class(DisabledAlgorithmConstraints$DenyAfterConstraint, 0, ::sun::security::util::DisabledAlgorithmConstraints$Constraint)
public:
	DisabledAlgorithmConstraints$DenyAfterConstraint();
	void init$($String* algo, int32_t year, int32_t month, int32_t day);
	using ::sun::security::util::DisabledAlgorithmConstraints$Constraint::permits;
	virtual void permits(::sun::security::util::ConstraintsParameters* cp) override;
	virtual bool permits(::java::security::Key* key) override;
	::java::util::Date* denyAfterDate = nullptr;
	static ::java::text::SimpleDateFormat* dateFormat;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$DenyAfterConstraint_h_