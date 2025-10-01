#ifndef _sun_security_util_DisabledAlgorithmConstraints$jdkCAConstraint_h_
#define _sun_security_util_DisabledAlgorithmConstraints$jdkCAConstraint_h_
//$ class sun.security.util.DisabledAlgorithmConstraints$jdkCAConstraint
//$ extends sun.security.util.DisabledAlgorithmConstraints$Constraint

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

class DisabledAlgorithmConstraints$jdkCAConstraint : public ::sun::security::util::DisabledAlgorithmConstraints$Constraint {
	$class(DisabledAlgorithmConstraints$jdkCAConstraint, $NO_CLASS_INIT, ::sun::security::util::DisabledAlgorithmConstraints$Constraint)
public:
	DisabledAlgorithmConstraints$jdkCAConstraint();
	void init$($String* algo);
	using ::sun::security::util::DisabledAlgorithmConstraints$Constraint::permits;
	virtual void permits(::sun::security::util::ConstraintsParameters* cp) override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DisabledAlgorithmConstraints$jdkCAConstraint_h_