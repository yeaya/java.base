#ifndef _sun_security_util_DisabledAlgorithmConstraints$UsageConstraint_h_
#define _sun_security_util_DisabledAlgorithmConstraints$UsageConstraint_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$UsageConstraint
//$ extends sun.security.util.DisabledAlgorithmConstraints$Constraint

#include <java/lang/Array.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraint.h>

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

class DisabledAlgorithmConstraints$UsageConstraint : public ::sun::security::util::DisabledAlgorithmConstraints$Constraint {
	$class(DisabledAlgorithmConstraints$UsageConstraint, $NO_CLASS_INIT, ::sun::security::util::DisabledAlgorithmConstraints$Constraint)
public:
	DisabledAlgorithmConstraints$UsageConstraint();
	void init$($String* algorithm, $StringArray* usages);
	using ::sun::security::util::DisabledAlgorithmConstraints$Constraint::permits;
	virtual void permits(::sun::security::util::ConstraintsParameters* cp) override;
	$StringArray* usages = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$UsageConstraint_h_